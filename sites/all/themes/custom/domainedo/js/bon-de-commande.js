/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//alert("hello world !");
jQuery(function($) {
  var total = 0;
  $('<h2 id="h2-total">Total : <span id="total">0€</span></h2>').insertBefore('#edit-previous');//Insére le noeud #h2 avant le noeud # detail
  $( ".form-radio" ).change(function() {
    $( "input:checked" ).each(function( index ) {
      var id = $(this).attr('id');
      var res = (id.match(/euro[^\.]/g));

      if(res){
        res = res.toString();
        res = res.substring(4);
        total = ($( this ).val()*res)+"€";
        $("#total").text(total);
        $("#edit-submitted-total").val(total);
     
      }
    }); //end each
  });
  
  
});


