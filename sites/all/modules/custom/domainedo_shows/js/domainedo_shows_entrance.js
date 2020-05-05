(function ($) {

  Drupal.behaviors.show_festival = {
    attach: function (context, settings) {
      console.log("Dans domainedo_show_festival_entrance.js");
      $(".field-name-field-entrance .field-item").
        html('nord - <a target="_blank" href="https://www.tam-voyages.com/ri/index.asp?rub_code=4&laction=&comDep=&keywordsDep=&pointDep=&comArr=&keywordsArr=Malbosc+%28Arr%C3%AAt%29+-+MONTPELLIER&pointArr=5544%24Malbosc%244%2434172&">Tramway ligne 1 arrêt Malbosc</a>')
    }
  };
}(jQuery));

