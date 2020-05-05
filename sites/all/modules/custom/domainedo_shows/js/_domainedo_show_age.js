(function ($) {

  Drupal.behaviors.show_age = {
    attach: function (context, settings) {
      console.log("Dans domainedo_show_age.js");
      const ages = ["3 mois", "6 mois", "9 mois", "1 an", "2 ans", "3 ans",
        "4 ans", "5 ans", "6 ans", "7 ans", "8 ans", "9 ans", "10 ans", "11 ans", "12 ans",
        "13 ans", "14 ans", "15 ans", "16 ans", "17 ans", "18 ans"];
      const age_input = document.getElementById("edit-field-minimum-age-value");
      age_input.value = '';
      age_input.setAttribute("value",0);
      //$("#edit-field-minimum-age-value").val("Prout");
      autocomplete(age_input, ages);
      function autocomplete(inp, arr) {
        /*the autocomplete function takes two arguments,
        the text field element and an array of possible autocompleted values:*/
        var currentFocus;
        /*execute a function when someone writes in the text field:*/
        inp.addEventListener("input", function (e) {
          console.log("ici");
          var a, b, i, val = this.value;
          if (!val) age_input.setAttribute("value", 0);
          else if (isNaN(val) || val > 18){
            inp.value = "";
            age_input.setAttribute("value", 0);
            alert("Merci d'entrer un nombre entre 1 et 18 et cliquer ensuite sur l'item de la liste qui correspond à votre recherche.");
          }
          /*close any already open lists of autocompleted values*/
          closeAllLists();
          if (!val) { return false; }
          currentFocus = -1;
          /*create a DIV element that will contain the items (values):*/
          a = document.createElement("DIV");
          a.setAttribute("id", this.id + "autocomplete-list");
          a.setAttribute("class", "autocomplete-items");
          /*append the DIV element as a child of the autocomplete container:*/
          this.parentNode.appendChild(a);
          /*for each item in the array...*/
          for (i = 0; i < arr.length; i++) {
            /*check if the item starts with the same letters as the text field value:*/
            if (arr[i].substr(0, val.length).toUpperCase() == val.toUpperCase()) {
              /*create a DIV element for each matching element:*/
              b = document.createElement("DIV");
              /*make the matching letters bold:*/
              b.innerHTML = "<strong>" + arr[i].substr(0, val.length) + "</strong>";
              b.innerHTML += arr[i].substr(val.length);
              /*insert a input field that will hold the current array item's value:*/
              b.innerHTML += "<input type='hidden' value='" + arr[i] + "'>";
              /*execute a function when someone clicks on the item value (DIV element):*/
              b.addEventListener("click", function (e) {
                /*insert the value for the autocomplete text field:*/
                inp.value = this.getElementsByTagName("input")[0].value;
                // récupération du nombre à placer dans l'input
                let choosen_age = 0
                switch (inp.value) {
                  case "3 mois":
                    choosen_age = 0.25;
                    break;
                  case "6 mois":
                    choosen_age = 0.25;
                    break;
                  case "9 mois":
                    choosen_age = 0.75;
                    break;
                  default:
                    choosen_age = inp.value.split(' ')[0];
                }
                console.log("Age choisi : ", choosen_age);
                age_input.setAttribute("value", choosen_age);
                /*close the list of autocompleted values,
                (or any other open lists of autocompleted values:*/
                closeAllLists();
              });
              a.appendChild(b);
            }
          }
        });
        function closeAllLists(elmnt) {
          /*close all autocomplete lists in the document,
          except the one passed as an argument:*/
          var x = document.getElementsByClassName("autocomplete-items");
          for (var i = 0; i < x.length; i++) {
            if (elmnt != x[i] && elmnt != inp) {
              x[i].parentNode.removeChild(x[i]);
            }
          }
        }
        /*execute a function when someone clicks in the document:*/
        document.addEventListener("click", function (e) {
          closeAllLists(e.target);
        });
      }
    }
  };
}(jQuery));

