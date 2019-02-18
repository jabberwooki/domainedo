jQuery(function ($) {
    /*
     * Hide link "link-listshows" if there is no result
     */
    if (!$("#block-system-main .node-show").length &&
        $("#link-listshows").length) {
        $("#link-listshows").hide();
    }

    /*
     * Hide calendar if date form is not filled out
     */
    if ($(".field-name-field-calendar-archive").length) {
        if ($(".field-name-field-calendar-archive a").attr('href') == '/calendrier') $(".field-name-field-calendar-archive a").hide();
    }

    // boutons réseaux sociaux
    const pathname = window.location.pathname;
    let first_button;
    const under_social_wrapper = $("<div></div>",{
        class: "under_show-social-wrapper"
    });
    const social_wrapper = $("<div></div>",{
        class: "show-social-wrapper"
    });
    
    under_social_wrapper.insertAfter(".field-name-field-by");
    social_wrapper.appendTo(under_social_wrapper);

    // SMS
    const ua = navigator.userAgent.toLowerCase();
    const isAndroid = ua.indexOf("android") > -1; //&& ua.indexOf("mobile");
    let sms_link = false;
    if (isAndroid) {
        sms_link = $('<a class="icon-chat chat-show" href="sms:?&body=' + 
        'https://www.domainedo.fr' + 
            pathname +
            '"><span>Partager par SMS</span></a>');
        sms_link.appendTo(social_wrapper);
    }
    if ((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i))) {
        sms_link = $('<a class="icon-chat chat-show" href="sms:;body=https://www.domainedo.fr' + pathname +
            '"><span>Partager par SMS</span></a>');
        sms_link.appendTo(social_wrapper);
    }
    /* sms_link = $('<a class="icon-chat chat-show" href="sms:?&body=' + 'https://www.domainedo.fr' + pathname +
        '"><span>Partager par SMS</span></a>');
    sms_link.appendTo(social_wrapper);
    
    first_button = (sms_link) ? sms_link : ".field-name-field-by"; */

    // whatsApp
    if (isAndroid ||(navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i))) {
        const whatsapp_button = $('<a class="show-whatsapp" href="whatsapp://send?text=' +
    'https://www.domainedo.fr' + 
        pathname +
    '" data-action="share/whatsapp/share"> ' + 
    '<img id="whatsapp" src="/sites/all/themes/custom/ddobs/less/images/whatsapp.png" alt="Partager sur WhatsApp">' +
    '<span class="sr-only">Partager avec Whatsapp</span></a>').appendTo(social_wrapper);
    }
   /*  const whatsapp_button = $('<a class="icon-whatsapp show-whatsapp" href="whatsapp://send?text=' +
    'https://www.domainedo.fr' + 
        pathname +
    '" data-action="share/whatsapp/share"><span class="sr-only">Partager avec Whatsapp</span></a>').appendTo(social_wrapper); */
    // facebook
    const facebook_button =
        $('<div class="fb-like" data-href="https://www.domainedo.fr' +
            pathname +
            '" data-width="40" data-layout="button" data-action="recommend" data-size="large" data-show-faces="false" data-share="true"></div>');
    facebook_button.appendTo(social_wrapper);

    (function (d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        js = d.createElement(s); js.id = id;
        js.src = 'https://connect.facebook.net/fr_FR/sdk.js#xfbml=1&version=v3.2&appId=1815308221819289&autoLogAppEvents=1';
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));

    
    

    //Twitter
    const twitter_url = 'https://twitter.com/intent/tweet?url=https%3A%2F%2Fdomainedo.fr' +
        pathname +
        '&text=&hashtags=spectacle,Montpellier';

    const twitter_button = $('<a></a>', {
        html: '<span class="sr-only">Twitter</span>',
        class: "icon-twitter twitter-show",
        href: twitter_url
    }).appendTo(social_wrapper);

    // Tracking bouton réserver
    $(".field-name-field-boxoffice-url a").attr("onClick","ga('send', 'event', 'Button', 'Click', 'Billetterie via bouton réserver sur le site du domaine'");
});

