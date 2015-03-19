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
var groupe_6 ="#block-views-shows-block-1 div.group6";
var base_url="";


  // Objet diaporama
  function Diaporama() {
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
        if(thediapo.nb_diapo>1){
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
        }
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
            if(thediapo.nb_diapo>1){
            // dimmensionner les boutons suivants et précédents
              $("#next_diapo").width(86);
              $("#next_diapo").height(360);
              $("#previous_diapo").width(0);
              $("#previous_diapo").height(360);
            }else{
              $(groupe_6).css({'margin-left':'34px'});
            }
      })();
      
      
  }
  
  function next_diapo(thediapo){
        
      if(thediapo.nb_diapo>thediapo.selected_controler+1){// ???
          
          if(!thediapo.selected_controler) {
            $(conteneur_long).animate({"left": "-="+(thediapo.largeur-100)+"px"}, "slow");
            console.log("deplacement : "+(thediapo.largeur-100));
          } else $(conteneur_long).animate({"left": "-="+(thediapo.largeur-69)+"px"}, "slow");
          
          thediapo.position_left += thediapo.largeur;
          var id_ncs = thediapo.selected_controler+1;
          $("#controler_"+id_ncs).addClass("selected_controler");
          $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler ++;
          // dimmensionner les boutons suivants et précédents
            (thediapo.selected_controler == (thediapo.nb_diapo-1)) ? $("#next_diapo").width(1) : $("#next_diapo").width(54);
            $("#previous_diapo").width(46);

      }
  }
  function previous_diapo(thediapo){

       if(thediapo.selected_controler>0){
         if(thediapo.selected_controler == 1) $(conteneur_long).animate({"left": "+="+(thediapo.largeur-100)+"px"}, "slow");
          else $(conteneur_long).animate({"left": "+="+(thediapo.largeur-69)+"px"}, "slow");
          thediapo.position_left -= thediapo.largeur;
          var id_ncs = thediapo.selected_controler-1;
          $("#controler_"+id_ncs).addClass("selected_controler");
          $("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler --;
          if(!thediapo.selected_controler){
              $("#previous_diapo").width(0);
              $("#next_diapo").width(86);
          }else $("#next_diapo").width(54);
      }
  }

  function selected_diapo(num_controler,thediapo){
      console.log("num_controler : "+num_controler);
      var mvt = (thediapo.selected_controler-num_controler);
      console.log("mvt : "+mvt);
      var long_mvt = Math.abs(mvt)*(thediapo.largeur-69);
      if (mvt == -num_controler || !num_controler){
        long_mvt -= 31;
      }
      
      console.log("deplacement : "+long_mvt);
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
          $("#previous_diapo").width(46);
          $("#next_diapo").width(0);
      }else if(thediapo.selected_controler == 0){
          $("#previous_diapo").width(0);
          $("#next_diapo").width(86);
      }else{
          $("#previous_diapo").width(46);
          $("#next_diapo").width(54);
      }
  }

    var diapo = new Diaporama();
    
 /*
  * Manage date display
  */
 $('.field-name-field-show-dates .field-items','#block-views-shows-block-1').each(function(){
   var nb_dates = $('.field-item',this).length;
   if( nb_dates && nb_dates > 1) {
     var mvt = ((nb_dates-2)*3)+'px';
     
     $(this).addClass('more-dates');
     $(this).click(function(){
       if($(this).hasClass('bg-white')){
         $(this).removeClass('bg-white');
         $(this).animate({top:'0px'},1000);
       }else{
        $(this).addClass('bg-white');
        $(this).css({position:'relative'},{zindex:'999'},{backgroundColor:'#FFFFFF'},{opacity:1});
        $(this).animate({top:'-'+mvt},1000);
       }
       
     });
    
   }
 });
 var month_date = '';
 $('.field-name-field-show-dates .field-items','.view-display-id-block_2').each(function(){
   month_date = '';
   var nb_dates = $('.field-item',this).length;
   if( nb_dates && nb_dates > 1) {
     $('.field-item',this).each(function(){
       if ($(this).text() == month_date) $(this).css({display:'none'}); 
       month_date = $(this).text();
     });
      
   }
 });
 
 /*
  * Gestion de l'apparition et la disparition du slideshow en page d'accueil
  * au redimensionnement de la fenêtre
  */
 var ss_visible = true;
 var link_shows_visible = false;
 var link_shows_created = false;
 var link_shows = '<h2 class="h2-event" id="h2-js-shows"><a href="spectacles/tous-les-spectacles">Prochains spectacles</a></h2>'
 
 if ($(window).width() < 740) manageDisplayHomeSlideshow();
 window.onresize = function(){
      
      if (($(window).width() < 740) && ss_visible) manageDisplayHomeSlideshow();
      else if (!ss_visible && ($(window).width() > 740)) {
        $('#block-views-shows-block-1').show();
        ss_visible = true;
        console.log('lien créé : '+link_shows_created+' lien visible : '+link_shows_visible);
        if(link_shows_created && link_shows_visible){
          $('#h2-js-shows').hide();
          link_shows_visible = false;
        }
      }
 }
 function manageDisplayHomeSlideshow(){
   $('#block-views-shows-block-1').hide();
   if(!link_shows_visible && !link_shows_created) {
     $(link_shows).insertBefore('#h2-event-home');
     link_shows_created = true;
   }
   else if (!link_shows_visible && link_shows_created){
     $('#h2-js-shows').show();
     link_shows_visible = true;
   }
   ss_visible = false;
   link_shows_visible = true;
 }
});
