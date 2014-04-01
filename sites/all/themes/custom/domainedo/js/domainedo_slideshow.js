'use strict';
/*
 * Atention, pour pouvoir bouger avec la fonction animate, le div concerné doit
 * être en position:relative
 */
jQuery(function($) {

//paramètres de base
var diaporama_visible_width = 549;
var diaporama_height = 376;

var id_du_diapo ="#block-views-shows-block-1";
var conteneur_long ="#block-views-shows-block-1 .block-inner";
var groupe_6 ="div.group6";
var base_url="";


  // Objet diaporama
  function Diaporama(){
      this.nb_diapo = $("div.group6").length;
      this.largeur = diaporama_visible_width;
      this.hauteur = diaporama_height;
      this.largeur_cachee = this.nb_diapo*this.largeur+20; // 20 : marge pour le cas où l'on placerait un contour aux diapos
      this.position_left = 0;
      this.selected_controler = 0;
      this.previous = '<div id="previous_diapo"><</div>';
      this.next = '<div id="next_diapo">></div>';

      // Méthodes des objets diaporama
      this.next_diapo = next_diapo;
      this.previous_diapo = previous_diapo;
      this.selected_diapo = selected_diapo;
      
      var thediapo = this;
      
      // création des boutons précédents et suivants et des boutons de contrôle
      (function(){
          var buttons_controlers='<div id="buttons_controlers">';
          for(var i=0;i<thediapo.nb_diapo;i++){
              if(i==0) buttons_controlers +='<div id="controler_'+i+'" class="button_controler selected_controler"></div>';      
              else buttons_controlers +='<div id="controler_'+i+'" class="button_controler"></div>';
          }
          buttons_controlers +='</div>';
          
          var buttons_previous_next = '<div id="previous_diapo"></div><div id="next_diapo"></div>';
          $(id_du_diapo).prepend(buttons_controlers+buttons_previous_next);  
          
          for(i=0;i<thediapo.nb_diapo;i++){  
              (function(j){
                $('#controler_'+j).click(function() {
                    thediapo.selected_diapo(j,thediapo);
                });
               })(i);     
          }
          
          $("#next_diapo").click(function() {
            thediapo.next_diapo(thediapo);
          });
          $("#previous_diapo").click(function() {
            thediapo.previous_diapo(thediapo);
          });
      })();
      
      // dimensionnement initial du diaporama et de ses éléments
      (function(){
            // dimmensionner le diapo
            $(id_du_diapo).width(thediapo.largeur);
            $(conteneur_long).height(thediapo.hauteur);

            //dimmensionner le conteneur de toutes les diapos
            $(conteneur_long).width(thediapo.largeur_cachee);
            $(conteneur_long).height(thediapo.hauteur);

            // dimmensionner chaque diapo
            $(groupe_6).width((thediapo.largeur)-69);//
            $(groupe_6).height(thediapo.hauteur);
            
            // dimmensionner les boutons suivants et précédents
            $("#next_diapo").width(86);
            $("#next_diapo").height(350);
            $("#previous_diapo").width(0);
            $("#previous_diapo").height(350);
      })();
      
      
  }
  
  function next_diapo(thediapo){
        
      if(thediapo.nb_diapo>thediapo.selected_controler+1){// ???
          
          $(conteneur_long).animate({"left": "-="+(thediapo.largeur-100)+"px"}, "slow");
          
          thediapo.position_left += thediapo.largeur;
          var id_ncs = thediapo.selected_controler+1;
          $("#controler_"+id_ncs).addClass("selected_controler");
          $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler ++;
          // dimmensionner les boutons suivants et précédents
            (thediapo.selected_controler == (thediapo.nb_diapo-1)) ? $("#next_diapo").width(1) : $("#next_diapo").width(54);
            $("#previous_diapo").width(50);

      }
  }
  function previous_diapo(thediapo){

       if(thediapo.selected_controler>0){
          $(conteneur_long).animate({"left": "+="+(thediapo.largeur-100)+"px"}, "slow");
          thediapo.position_left -= thediapo.largeur;
          var id_ncs = thediapo.selected_controler-1;
          $("#controler_"+id_ncs).addClass("selected_controler");
          $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler --;
          if(!thediapo.selected_controler){
              $("#previous_diapo").width(0);
              $("#next_diapo").width(86);
          } 
      }
  }
  function selected_diapo(num_controler,thediapo){
      //alert(num_controler);
      var mvt = (thediapo.selected_controler-num_controler);
      var long_mvt = Math.abs(mvt)*(thediapo.largeur-100);
      //var id_new_selected = "#controler"+num_controler;
      //alert("controler cliqué : "+num_controler+" diapo affichée : "+thediapo.selected_controler+" long_mvt : "+long_mvt+" px");
      if (!mvt || ($(document).width() < 600)) {           
              $("#controler_"+num_controler).addClass("selected_controler");
              $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
             
          }
      else if (mvt<0){
          if(Math.abs(mvt)<3) $(conteneur_long).animate({"left": "-="+long_mvt+"px"}, "slow");
          else  {
              $(conteneur_long).animate({opacity: 0}, 200);
              $(conteneur_long).animate({"left": "-="+long_mvt+"px"}, 400,"swing");
              $(conteneur_long).animate({opacity: 1}, 200);
          }
          $("#controler_"+num_controler).addClass("selected_controler");
          $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler -= mvt;      
      }
      else {
          if(Math.abs(mvt)<3) $(conteneur_long).animate({"left": "+="+long_mvt+"px"}, "slow");
          else {
              $(conteneur_long).animate({opacity: 0}, 200);
              $(conteneur_long).animate({"left": "+="+long_mvt+"px"}, 400,"swing");
              $(conteneur_long).animate({opacity: 1}, 200);
          }
          $("#controler_"+num_controler).addClass("selected_controler");
          $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler -= mvt;
      }
      if (thediapo.selected_controler == (thediapo.nb_diapo-1)){
          $("#previous_diapo").width(50);
          $("#next_diapo").width(0);
      }else if(thediapo.selected_controler == 0){
          $("#previous_diapo").width(0);
          $("#next_diapo").width(86);
      }else{
          $("#previous_diapo").width(50);
          $("#next_diapo").width(54);
      }
  }
  

  var diapo = new Diaporama();

 
});
