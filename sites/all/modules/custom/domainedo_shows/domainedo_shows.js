jQuery(function($) {
    /*
     * Hide link "link-listshows" if there is no result
     */
    if(!$("#block-system-main .node-show").length &&
        $("#link-listshows").length){
        $("#link-listshows").hide();
    }
    /*
     * Hide calendar if date form is not filled out
     */
    if($(".field-name-field-calendar-archive").length){
        if ($(".field-name-field-calendar-archive a").attr('href') == '/calendrier') $(".field-name-field-calendar-archive a").hide();
    }
    // facebook
    console.log("facebook");
    const pathname = window.location.pathname;
    const facebook_button = 
    $('<div class="fb-like" data-href="https://www.domainedo.fr' +
    pathname +
    '" data-width="40" data-layout="button" data-action="recommend" data-size="large" data-show-faces="false" data-share="true"></div>');
    facebook_button.insertAfter(".field-name-field-by");

   
    (function(d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        js = d.createElement(s); js.id = id;
        js.src = 'https://connect.facebook.net/fr_FR/sdk.js#xfbml=1&version=v3.2&appId=1815308221819289&autoLogAppEvents=1';
        fjs.parentNode.insertBefore(js, fjs);
      }(document, 'script', 'facebook-jssdk'));

    //Twitter
    const twitter_url = 'https://twitter.com/intent/tweet?url=https%3A%2F%2Fdomainedo.fr'+
    pathname +
    '&text=&hashtags=spectacle,Montpellier';
    
    const twitter_button = $('<a></a>',{
        text: "lien",
        class: "icon-twitter",
        href: twitter_url
    }).insertAfter(facebook_button);  

    // SMS
    const ua = navigator.userAgent.toLowerCase();
    const isAndroid = ua.indexOf("android") > -1; //&& ua.indexOf("mobile");
    if(isAndroid) {
        let sms_link = $('<a href="sms:?&body=' + 'https://www.domainedo.fr' + pathname + '">SMS</a>');
        sms_link.insertAfter(twitter_button); 
    }
    if((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i))) {
        let sms_link = $('<a href="sms:;body=https://www.domainedo.fr' + pathname + '">SMS</a>');
        sms_link.insertAfter(twitter_button); 
   }
     
});