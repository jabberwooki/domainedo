/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//alert("hello world !");
jQuery(function($) {
  console.log("hello");
  var total = 0;
  $('<h2 id="h2-total">Total : <span id="total">0€</span></h2>').insertBefore('#edit-previous');//Insére le noeud #h2 avant le noeud # detail
  $( ".form-radio" ).change(function() {
    $( "input:checked" ).each(function( index ) {
      var id = $(this).attr('id');
      var res = (id.match(/eu-[^\.]/g));
      console.log(res);
      if(res){
        res = res.toString();
        res = res.substring(3);
        total = ($( this ).val()*res)+"€";
        $("#total").text(total);
        $("#edit-submitted-total").val(total);
     
      }
    }); //end each
  });
  
  
});


