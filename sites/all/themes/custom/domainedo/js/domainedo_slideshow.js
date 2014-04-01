'use strict';
/*
 * Atention, pour pouvoir bouger avec la fonction animate, le div concerné doit
 * être en position:relative
 */
jQuery(function() {

//paramètres de base
var diaporama_visible_width = 549;
var diaporama_height = 376;

var id_du_diapo ="#block-views-shows-block-1";
var conteneur_long ="#block-views-shows-block-1 .block-inner";
var groupe_6 ="div.group6";
var base_url="";


  // Objet diaporama
  function Diaporama(){
      this.nb_diapo = jQuery("div.group6").length;
      console.log ("nb diapos : "+this.nb_diapo);
      this.largeur = diaporama_visible_width;
      this.hauteur = diaporama_height;
      this.largeur_cachee = this.nb_diapo*this.largeur+20; // 20 : marge pour le cas où l'on placerait un contour aux diapos
      console.log ("largeur cachée : "+this.largeur_cachee);
      this.position_left = 0;
      this.selected_controler = 0;
      this.previous = '<div id="previous_diapo"><</div>';
      this.next = '<div id="next_diapo">></div>';

      // Méthodes des objets diaporama
      this.next_diapo = next_diapo;
      this.previous_diapo = previous_diapo;
      this.selected_diapo = selected_diapo;
      
      var thediapo = this;
      
      // dimensionnement du diaporama et de ses éléments
      (function(){
          console.log("dimensionnement du diaporama et de ses éléments");
            // dimmensionner le diapo
            jQuery(id_du_diapo).width(thediapo.largeur);
            console.log ("largeur visible du diapo : "+thediapo.largeur+' px');
            jQuery(conteneur_long).height(thediapo.hauteur);

            //dimmensionner le conteneur de toutes les diapos
            jQuery(conteneur_long).width(thediapo.largeur_cachee);
            jQuery(conteneur_long).height(thediapo.hauteur);

            // dimmensionner chaque diapo
            jQuery(groupe_6).width((thediapo.largeur)-69);//
            jQuery(groupe_6).height(thediapo.hauteur);
      })();
      
      // création des boutons précédents et suivants
      (function(){
          jQuery(id_du_diapo).prepend('<div id="previous_diapo"><</div><div id="next_diapo">></div>');
          jQuery("#next_diapo").click(function() {
            thediapo.next_diapo(thediapo);
          });
          jQuery("#previous_diapo").click(function() {
            thediapo.previous_diapo(thediapo);
          });
      })();
      
  }
  
  function next_diapo(thediapo){
        console.log("next_diapo activé");
      if(thediapo.nb_diapo>thediapo.selected_controler+1){// ???
          console.log("dans le premier if");
          jQuery(conteneur_long).animate({"left": "-="+(thediapo.largeur-100)+"px"}, "slow");
          console.log("animation : "+(thediapo.largeur-100)+"px");
          thediapo.position_left += thediapo.largeur;
          var id_ncs = thediapo.selected_controler+1;
          jQuery("#controler_"+id_ncs).addClass("selected_controler");
          jQuery("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
          thediapo.selected_controler = thediapo.selected_controler+1;

      }else{
          console.log("dans le else ");
          var long_mvt = thediapo.largeur*(thediapo.nb_diapo-1);//alert(long_mvt);
           jQuery(id_du_diapo).animate({opacity: 0}, 200);
           jQuery(id_du_diapo).animate({"left": "+="+long_mvt+"px"}, 400,"swing");
           jQuery(id_du_diapo).animate({opacity: 1}, 200);
           jQuery("#controler_0").addClass("selected_controler");
           jQuery("#controler_"+thediapo.selected_controler).removeClass("selected_controler");
           thediapo.selected_controler =0;
      }
  }
  function previous_diapo(){

       if(this.selected_controler>0){
          jQuery(conteneur_long).animate({"left": "+="+(this.largeur-100)+"px"}, "slow");
          this.position_left -= this.largeur;
          var id_ncs = this.selected_controler-1;
          jQuery("#controler_"+id_ncs).addClass("selected_controler");
          jQuery("#controler_"+this.selected_controler).removeClass("selected_controler");
          this.selected_controler --;
      }else{
          var long_mvt = this.largeur*(this.nb_diapo-1);//alert(long_mvt);
           jQuery(id_du_diapo).animate({opacity: 0}, 200);
           jQuery(id_du_diapo).animate({"left": "-="+long_mvt+"px"}, 400,"swing");
           jQuery(id_du_diapo).animate({opacity: 1}, 200);
           jQuery("#controler_"+(this.nb_diapo-1)).addClass("selected_controler");
           jQuery("#controler_"+this.selected_controler).removeClass("selected_controler");
           this.selected_controler =this.nb_diapo-1;
      }
  }
  function selected_diapo(num_controler){
      
      var mvt = (this.selected_controler-num_controler);
      var long_mvt = Math.abs(mvt)*this.largeur;
      //var id_new_selected = "#controler"+num_controler;
      //alert("controler cliqué : "+num_controler+" diapo affichée : "+this.selected_controler+" long_mvt : "+long_mvt+" px");
      if (!mvt || (jQuery(document).width() < 600)) {           
              jQuery("#controler_"+num_controler).addClass("selected_controler");
              jQuery("#controler_"+this.selected_controler).removeClass("selected_controler");
              location.href=base_url+this.urlArray[num_controler];
          }//alert("envoi vers l'url : "+this.urlArray[num_controler]);
      else if (mvt<0){
          if(Math.abs(mvt)<3) jQuery(id_du_diapo).animate({"left": "-="+long_mvt+"px"}, "slow");
          else  {
              jQuery(id_du_diapo).animate({opacity: 0}, 200);
              jQuery(id_du_diapo).animate({"left": "-="+long_mvt+"px"}, 400,"swing");
              jQuery(id_du_diapo).animate({opacity: 1}, 200);
          }
          jQuery("#controler_"+num_controler).addClass("selected_controler");
          jQuery("#controler_"+this.selected_controler).removeClass("selected_controler");
          this.selected_controler -= mvt;      
      }
      else {
          if(Math.abs(mvt)<3) jQuery(id_du_diapo).animate({"left": "+="+long_mvt+"px"}, "slow");
          else {
              jQuery(id_du_diapo).animate({opacity: 0}, 200);
              jQuery(id_du_diapo).animate({"left": "+="+long_mvt+"px"}, 400,"swing");
              jQuery(id_du_diapo).animate({opacity: 1}, 200);
          }
          jQuery("#controler_"+num_controler).addClass("selected_controler");
          jQuery("#controler_"+this.selected_controler).removeClass("selected_controler");
          this.selected_controler -= mvt;
      }
  }
  

  var diapo = new Diaporama();

 
});
