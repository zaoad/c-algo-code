<!DOCTYPE html>
<html><head>
    <title>
        Topic-wise Practice Contest (Articulation Point, Bridge, BCC, SCC) - Virtual Judge
    </title>

    




















    
        
        
    


<meta http-equiv="content-type" content="text/html; charset=UTF-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1">

<meta name="keywords" content="Online Judge, vjudge, OJ, Virtual Judge, Replay Contest, ICPC, OnlineJudge, JudgeOnline, Coding, Algorithm, ç«èµ, ç®æ³, POJ, ZOJ, UVALive, SGU, URAL, HUST, SPOJ, HDU, HYSBZ, UVA, CodeForces, Z-Trening, Aizu, LightOJ, UESTC, NBUT, FZU, CSU, SCU, ACdream, CodeChef, CF::Gym, OpenJudge, Kattis, HihoCoder, HIT, HRBUST, EIJudge, AtCoder, HackerRank, 51Nod">
<meta name="author" content="chaoshxxu">
<meta name="robots" content="index, follow">

<link rel="shortcut icon" href="critcalpoint_files/logo.ico">
<link rel="stylesheet" type="text/css" href="critcalpoint_files/vendor.css">
<link rel="stylesheet" type="text/css" href="critcalpoint_files/app.css">


    <meta property="og:url" content="https://vjudge.net/contest/126862">
    <meta property="og:type" content="website">
    <meta property="og:title" content="Topic-wise Practice Contest (Articulation Point, Bridge, BCC, SCC) - Virtual Judge">
    <meta property="og:description" content="Contest [Topic-wise Practice Contest (Articulation Point, Bridge, BCC, SCC)] in Virtual Judge">
    <meta property="og:image" content="https://vjudge.net//static/images/logo.ico">
<style type="text/css">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}.fb_link img{border:none}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_reset .fb_dialog_legacy{overflow:visible}.fb_dialog_advanced{padding:10px;-moz-border-radius:8px;-webkit-border-radius:8px;border-radius:8px}.fb_dialog_content{background:#fff;color:#333}.fb_dialog_close_icon{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{top:5px;left:5px;right:auto}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_loader{background-color:#f6f7f9;border:1px solid #606060;font-size:24px;padding:20px}.fb_dialog_top_left,.fb_dialog_top_right,.fb_dialog_bottom_left,.fb_dialog_bottom_right{height:10px;width:10px;overflow:hidden;position:absolute}.fb_dialog_top_left{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 0;left:-10px;top:-10px}.fb_dialog_top_right{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 -10px;right:-10px;top:-10px}.fb_dialog_bottom_left{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 -20px;bottom:-10px;left:-10px}.fb_dialog_bottom_right{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/ye/r/8YeTNIlTZjm.png) no-repeat 0 -30px;right:-10px;bottom:-10px}.fb_dialog_vert_left,.fb_dialog_vert_right,.fb_dialog_horiz_top,.fb_dialog_horiz_bottom{position:absolute;background:#525252;filter:alpha(opacity=70);opacity:.7}.fb_dialog_vert_left,.fb_dialog_vert_right{width:10px;height:100%}.fb_dialog_vert_left{margin-left:-10px}.fb_dialog_vert_right{right:0;margin-right:-10px}.fb_dialog_horiz_top,.fb_dialog_horiz_bottom{width:100%;height:10px}.fb_dialog_horiz_top{margin-top:-10px}.fb_dialog_horiz_bottom{bottom:0;margin-bottom:-10px}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{-webkit-transform:none;height:100%;margin:0;overflow:visible;position:absolute;top:-10000px;left:0;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{width:auto;height:auto;min-height:initial;min-width:initial;background:none}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{color:#fff;display:block;padding-top:20px;clear:both;font-size:18px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .45);position:absolute;bottom:0;left:0;right:0;top:0;width:100%;min-height:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_content .dialog_header{-webkit-box-shadow:white 0 1px 1px -1px inset;background:-webkit-gradient(linear, 0% 0%, 0% 100%, from(#738ABA), to(#2C4987));border-bottom:1px solid;border-color:#1d4088;color:#fff;font:14px Helvetica, sans-serif;font-weight:bold;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{-webkit-font-smoothing:subpixel-antialiased;height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:-webkit-gradient(linear, 0% 0%, 0% 100%, from(#4966A6), color-stop(.5, #355492), to(#2A4887));border:1px solid #29487d;-webkit-background-clip:padding-box;-webkit-border-radius:3px;-webkit-box-shadow:rgba(0, 0, 0, .117188) 0 1px 1px inset, rgba(255, 255, 255, .167969) 0 1px 0;display:inline-block;margin-top:3px;max-width:85px;line-height:18px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{border:none;background:none;color:#fff;font:12px Helvetica, sans-serif;font-weight:bold;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #555;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f6f7f9;border:1px solid #555;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_button{text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-repeat:no-repeat;background-position:50% 50%;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_hide_iframes iframe{position:relative;left:-10000px}.fb_iframe_widget_loader{position:relative;display:inline-block}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}.fb_iframe_widget_loader iframe{min-height:32px;z-index:2;zoom:1}.fb_iframe_widget_loader .FB_Loader{background:url(http://z-m-static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat;height:32px;width:32px;margin-left:-16px;position:absolute;left:50%;z-index:4}</style></head>

<body style="padding-right: 10px;" class="modal-open">




















<nav class="navbar navbar-dark bg-inverse">
    <button class="navbar-toggler hidden-md-up" type="button" data-toggle="collapse" data-target="#navbarResponsive"></button>
    <div class="collapse navbar-toggleable-sm" id="navbarResponsive">
        <a class="navbar-brand" href="https://vjudge.net/">
            <img src="critcalpoint_files/logo.ico" height="30">
            Home
        </a>
        <ul class="nav navbar-nav">
            <li class="nav-item" id="nav-problem">
                <a class="nav-link" href="https://vjudge.net/problem">Problem</a>
            </li>
            <li class="nav-item" id="nav-status">
                <a class="nav-link" href="https://vjudge.net/status">Status</a>
            </li>
            <li class="nav-item active" id="nav-contest">
                <a class="nav-link" href="https://vjudge.net/contest">Contest</a>
            </li>
            <li class="nav-item" id="nav-user">
                <a class="nav-link" href="https://vjudge.net/user">User</a>
            </li>
            <li class="nav-item" id="nav-group">
                <a class="nav-link" href="https://vjudge.net/group">Group</a>
            </li>
            <li class="nav-item" id="nav-comment">
                <a class="nav-link" href="https://vjudge.net/comment">Forum</a>
            </li>
            <li class="nav-item" id="nav-article">
                <a class="nav-link" href="https://vjudge.net/article">Article</a>
            </li>
            
            
                
                
                    <li class="nav-item float-xs-right">
                        <a class="nav-link register" href="javascript:void(0)" data-toggle="modal" data-target="#registerModal">Register</a>
                    </li>
                    <li class="nav-item float-xs-right">
                        <a class="nav-link login" href="javascript:void(0)">Login</a>
                    </li>
                
            
        </ul>
    </div>
</nav>


    <div class="modal fade" id="loginModal" tabindex="-1" role="dialog">
        <div class="modal-dialog" role="document">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">
                        <span>×</span>
                    </button>
                    <h4 class="modal-title" id="loginModalLabel">Login</h4>
                </div>
                <div class="modal-body">
                    <form id="login-form">
                        <div class="form-group">
                            <label for="login-username" class="form-control-label">Username:</label>
                            <input class="form-control" id="login-username" type="text">
                        </div>
                        <div class="form-group">
                            <label for="login-password" class="form-control-label">Password:</label>
                            <input class="form-control" id="login-password" type="password">
                        </div>
                        <input style="display: none" type="submit">
                    </form>
                </div>
                <div class="modal-footer">
                    <div class="alert alert-danger" role="alert" id="login-alert"></div>
                    <button type="button" class="btn btn-secondary float-xs-left" id="btn-forget-password">Forget
                        Password
                    </button>
                    <button type="button" class="btn btn-secondary" data-dismiss="modal">Cancel</button>
                    <button type="button" class="btn btn-primary" id="btn-login">Login</button>
                </div>
            </div>
        </div>
    </div>

    <div class="modal fade" id="registerModal" tabindex="-1" role="dialog">
        <div class="modal-dialog modal-lg" role="document">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">
                        <span>×</span>
                    </button>
                    <h4 class="modal-title" id="registerModalLabel">Register</h4>
                </div>
                <div class="modal-body">
                    <form id="register-form">
                        <div class="row">
                            <div class="col-md-6">
                                <div class="form-group">
                                    <label for="register-username" class="form-control-label">* Username:</label>
                                    <input class="form-control" id="register-username" type="text">
                                </div>
                                <div class="form-group">
                                    <label for="register-password" class="form-control-label">* Password:</label>
                                    <input class="form-control" id="register-password" type="password">
                                </div>
                                <div class="form-group">
                                    <label for="register-repeat-password" class="form-control-label">* Repeat
                                        Password:</label>
                                    <input class="form-control" id="register-repeat-password" type="password">
                                </div>
                                <div class="form-group">
                                    <label for="register-nickname" class="form-control-label">Nickname:</label>
                                    <input class="form-control" id="register-nickname" type="text">
                                </div>
                                <div class="form-group">
                                    <label for="register-school" class="form-control-label">School:</label>
                                    <input class="form-control" id="register-school" type="text">
                                </div>
                                <div class="form-group">
                                    <label for="register-qq" class="form-control-label">QQ:</label>
                                    <input class="form-control" id="register-qq" type="text">
                                </div>
                                <div class="form-group">
                                    <label for="register-email" class="form-control-label">* Email:</label>
                                    <input class="form-control" id="register-email" type="text">
                                </div>
                                <div class="form-group">
                                    <label for="register-captcha" class="form-control-label">* Captcha:</label>
                                    <input class="form-control" id="register-captcha" type="text">
                                    <img src="critcalpoint_files/126862.html" id="register-captcha-img">
                                </div>
                            </div>
                            <div class="col-md-6">
                                <div class="form-group">
                                    <label for="register-introduction" class="form-control-label">Introduction:</label>
                                    <textarea class="form-control" id="register-introduction" rows="25" placeholder="in Markdown"></textarea>
                                </div>
                            </div>
                        </div>
                    </form>
                </div>
                <div class="modal-footer">
                    <div class="alert alert-danger" role="alert" id="register-alert"></div>
                    <button type="button" class="btn btn-secondary" data-dismiss="modal">Cancel</button>
                    <button type="button" class="btn btn-primary" id="btn-register">Register</button>
                </div>
            </div>
        </div>
    </div>



<div class="container" style="margin-top: 30px;">
    
        <div class="row alert alert-info" id="contest-announcement" style="display: none;"></div>
    

    <div class="row card" id="time-info">
        <div class="row">
            <div class="col-xs-3 text-xs-left">
                <b>Begin:</b>
                <span class="timestamp">2016-08-08 08:30 BST</span>
            </div>
            <div class="col-xs-6 text-xs-center">
                <h3>
                    
                    
                    Topic-wise Practice Contest (Articulation Point, Bridge, BCC, SCC)
                </h3>
            </div>
            <div class="col-xs-3 text-xs-right">
                <b>End:</b>
                <span class="timestamp">2016-08-15 08:30 BST</span>
            </div>
        </div>
        <div class="row" id="contest-time-slider-container">
            <div class="slider slider-horizontal" id="contest-time-slider"><div class="slider-track"><div class="slider-track-low" style="left: 0px; width: 0%;"></div><div class="slider-selection" style="left: 0%; width: 100%;"></div><div class="slider-track-high" style="right: 0px; width: 0%;"></div><div class="slider-rangeHighlight slider-selection" style="left: 0%; width: 100%;"></div></div><div class="tooltip tooltip-main top" role="presentation" style="left: 100%; margin-left: -40px;"><div class="tooltip-arrow"></div><div class="tooltip-inner">168:00:00</div></div><div class="tooltip tooltip-min top" role="presentation" style="display: none;"><div class="tooltip-arrow"></div><div class="tooltip-inner"></div></div><div class="tooltip tooltip-max top" role="presentation" style="display: none;"><div class="tooltip-arrow"></div><div class="tooltip-inner"></div></div><div class="slider-handle min-slider-handle round" role="slider" aria-valuemin="0" aria-valuemax="604800000" style="left: 100%;" aria-valuenow="604800000" aria-valuetext="168:00:00" tabindex="0"></div><div class="slider-handle max-slider-handle round hide" role="slider" aria-valuemin="0" aria-valuemax="604800000" style="left: 0%;" aria-valuenow="0" aria-valuetext="00:00:00" tabindex="0"></div></div><input id="contest-time" data-slider-id="contest-time-slider" style="display: none;" data-value="604800000" value="604800000" type="text">
        </div>
        <div class="row">
            <div class="col-xs-3 text-xs-left" id="info-elapsed"></div>
            <div class="col-xs-6 text-xs-center">
                <span id="info-running" style="color: green;">Ended</span>
            </div>
            <div class="col-xs-3 text-xs-right" id="info-remaining"></div>
        </div>
    </div>

    
        <div class="row">
            <!-- Nav tabs -->
            <ul class="nav nav-tabs" role="tablist" id="contest-tabs">
                <li class="nav-item">
                    <a class="nav-link" data-toggle="tab" href="#overview" section="overview" role="tab" aria-expanded="false">Overview</a>
                </li>

                
                    <li class="nav-item">
                        <a class="nav-link" data-toggle="tab" href="#problem" section="problem" role="tab" aria-expanded="false">Problem</a>
                    </li>
                

                
                    <li class="nav-item">
                        <a class="nav-link active" data-toggle="tab" href="#status" section="status" role="tab" aria-expanded="true">Status</a>
                    </li>
                

                
                    <li class="nav-item">
                        <a class="nav-link" data-toggle="tab" href="#rank" section="rank" role="tab" aria-expanded="false">Rank (168:00:00)</a>
                    </li>
                

                <li class="nav-item">
                    <a class="nav-link" data-toggle="tab" href="#discuss" section="discuss" role="tab" rel="#discuss" data-disqus-identifier="contest/126862">0 Comments</a>
                </li>

                <li class="text-xs-right">
                    <div class="btn-group" role="group">
                        
                            <button type="button" class="btn btn-secondary" id="btn-setting">Setting</button>
                        
                        <button type="button" class="btn btn-secondary" id="btn-favorite"><i class="fa fa-star-o"></i>Favorite</button>
                        
                            <button type="button" class="btn btn-secondary" id="btn-clone">Clone</button>
                        
                        
                    </div>
                </li>
            </ul>

            <!-- Tab panes -->
            <div class="tab-content">
                <div class="tab-pane" id="overview" role="tabpanel" aria-expanded="false">
                    



















<div id="contest_overview" class="container">

    
        <div class="row">
            <table id="contest-problems" class="table table-striped table-bordered table-responsive" cellspacing="0" width="100%">
                <thead>
                <tr>
                    <th class="my-stat"></th>
                    <th class="all-stat">Stat</th>
                    <th class="prob-num">#</th>
                    
                    
                        <th>Origin</th>
                    
                    <th class="prob-title text-xl-left">Title</th>
                </tr>
                </thead>
                <tbody>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//A/1/">5</a> / <a href="#status//A/0/">11</a></td>
                        <td class="prob-num text-xs-center">A</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/20837/origin" target="_blank">
                                        UVA 315
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/A">
                                Network
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//B/1/">9</a> / <a href="#status//B/0/">9</a></td>
                        <td class="prob-num text-xs-center">B</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/25903/origin" target="_blank">
                                        LightOJ 1026
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/B">
                                Critical Links
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//C/1/">6</a> / <a href="#status//C/0/">11</a></td>
                        <td class="prob-num text-xs-center">C</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/27010/origin" target="_blank">
                                        LightOJ 1300
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/C">
                                Odd Personality
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//D/1/">6</a> / <a href="#status//D/0/">7</a></td>
                        <td class="prob-num text-xs-center">D</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/27001/origin" target="_blank">
                                        LightOJ 1291
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/D">
                                Real Life Traffic
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//E/1/">2</a> / <a href="#status//E/0/">2</a></td>
                        <td class="prob-num text-xs-center">E</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/27016/origin" target="_blank">
                                        LightOJ 1308
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/E">
                                Ant Network
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//F/1/">4</a> / <a href="#status//F/0/">6</a></td>
                        <td class="prob-num text-xs-center">F</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/195715/origin" target="_blank">
                                        Gym 100712H
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/F">
                                Bridges
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//G/1/">2</a> / <a href="#status//G/0/">11</a></td>
                        <td class="prob-num text-xs-center">G</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/159338/origin" target="_blank">
                                        Gym 100676H
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/G">
                                H. Capital City
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//H/1/">7</a> / <a href="#status//H/0/">15</a></td>
                        <td class="prob-num text-xs-center">H</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/26882/origin" target="_blank">
                                        LightOJ 1168
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/H">
                                Wishing Snake
                            </a>
                        </td>
                    </tr>
                
                    <tr>
                        <td class="my-stat"></td>
                        <td class="all-stat"><a href="#status//I/1/">4</a> / <a href="#status//I/0/">4</a></td>
                        <td class="prob-num text-xs-center">I</td>
                        
                        
                            <td class="prob-origin text-xs-center">
                                <a href="https://vjudge.net/problem/49029/origin" target="_blank">
                                        SPOJ CAPCITY
                                </a>
                            </td>
                        
                        <td class="prob-title">
                            <a href="#problem/I">
                                Capital City
                            </a>
                        </td>
                    </tr>
                
                </tbody>
            </table>
        </div>
    

    <div class="row text-xs-right" id="contest-manager"><span style="color:blue">Public</span>. Prepared by <a href="https://vjudge.net/user/DU_CM" target="_blank">DU_CM</a>
        <div class="fb-like fb_iframe_widget" data-href="https://vjudge.net/contest/126862" data-layout="button_count" data-action="like" data-size="small" data-show-faces="true" data-share="true" fb-xfbml-state="rendered" fb-iframe-plugin-query="action=like&amp;app_id=&amp;container_width=0&amp;href=https%3A%2F%2Fvjudge.net%2Fcontest%2F126862&amp;layout=button_count&amp;locale=en_US&amp;sdk=joey&amp;share=true&amp;show_faces=true&amp;size=small"><span style="vertical-align: bottom; width: 0px; height: 0px;"><iframe name="f16f705e6b847" allowtransparency="true" allowfullscreen="true" scrolling="no" title="fb:like Facebook Social Plugin" style="border: medium none; visibility: visible; width: 0px; height: 0px;" src="critcalpoint_files/like.html" class="" width="1000px" height="1000px" frameborder="0"></iframe></span></div>
    </div>

    <div class="row card" id="contest-description" style="display: none"></div>

</div>

                </div>
                
                    <div class="tab-pane" id="problem" role="tabpanel" aria-expanded="false">
                        



















<div id="contest_problem" class="container">
    <div class="row">
        <div class="col-md-3 container" id="prob-left-panel">
            <ul class="nav nav-pills row" id="problem-nav">
                
                    <li class="nav-item">
                        <a num="A" class="nav-link" href="#problem/A">A</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="B" class="nav-link" href="#problem/B">B</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="C" class="nav-link" href="#problem/C">C</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="D" class="nav-link active" href="#problem/D">D</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="E" class="nav-link" href="#problem/E">E</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="F" class="nav-link" href="#problem/F">F</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="G" class="nav-link" href="#problem/G">G</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="H" class="nav-link" href="#problem/H">H</a>
                    </li>
                
                    <li class="nav-item">
                        <a num="I" class="nav-link" href="#problem/I">I</a>
                    </li>
                
            </ul>

            <div class="alert alert-danger row" role="alert" id="prob-alert" style="display: none"></div>

            <div id="prob-operation" class="row">
                <div class="container">
                    <div class="row">
                        <div class="col-xs-12">
                            <button type="button" class="btn btn-primary" id="problem-submit">Submit</button>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col-xs-6">
                            <a href="#status//D/0/" class="btn btn-secondary" id="btn-contest-status">Status</a>
                        </div>
                        <div class="col-xs-6">
                            <a href="#status/undefined/D/0/" class="btn btn-secondary" id="btn-contest-my-status">My
                                Status</a>
                        </div>
                    </div>
                </div>
            </div>

            <div id="prob-properties" class="row">
                <div class="container">
                    <dl class="card row"><dt class="col-sm-4">Time limit</dt><dd class="col-sm-8">2000 ms</dd><dt class="col-sm-4">Memory limit</dt><dd class="col-sm-8">32768 kB</dd><dt class="col-sm-4">OS</dt><dd class="col-sm-8">Linux</dd><dt class="col-sm-4">Source</dt><dd class="col-sm-8"><div id="problem_setter">
      Problem Setter: Jane Alam Jan 
    </div> 
   </dd></dl>
                </div>
            </div>

            <div id="prob-descriptions" class="row" style="display: none;">
                <span>Choose a description for participants:</span>
                <div class="list-group" id="prob-descs"></div>
            </div>
        </div>
        <div class="col-md-9 container" id="prob-right-panel">
            <div class="row">
                <div id="prob-title-contest">
                    <h2 id="problem-title"><a href="https://vjudge.net/problem/LightOJ-1291" target="_blank">D - Real Life Traffic</a></h2>
                    <span class="origin">
                        <a id="problem-origin" href="https://vjudge.net/problem/27001/origin" target="_blank">LightOJ - 1291 <i class="fa fa-external-link"></i></a>
                    </span>
                </div>
            </div>
            <div class="row" id="frame-description-container"><iframe src="critcalpoint_files/18281.html" scrolling="no" style="display: none;" width="100%" height="1082px" frameborder="0"></iframe><iframe src="critcalpoint_files/18400.html" scrolling="no" style="" width="100%" height="1274px" frameborder="0"></iframe><iframe src="critcalpoint_files/12759.html" scrolling="no" style="display: none;" width="100%" height="0px" frameborder="0"></iframe><iframe src="critcalpoint_files/17287.html" scrolling="no" style="display: none;" width="100%" height="1783px" frameborder="0"></iframe><iframe src="critcalpoint_files/18415.html" scrolling="no" style="display: none;" width="100%" height="1307px" frameborder="0"></iframe><iframe src="critcalpoint_files/52409.html" scrolling="no" style="display: none;" width="100%" height="106px" frameborder="0"></iframe><iframe src="critcalpoint_files/50266.html" scrolling="no" style="display: none;" width="100%" height="0px" frameborder="0"></iframe></div>
        </div>
    </div>

</div>

                    </div>
                
                
                    <div class="tab-pane active" id="status" role="tabpanel" aria-expanded="true">
                        



















<div id="contest_status" class="container">
    <div class="row" id="right-panel">
        <div id="listStatus_wrapper" class="dataTables_wrapper form-inline dt-bootstrap4 no-footer"><div class=""><div class="dataTables_paginate paging_simple_numbers" id="listStatus_paginate"><ul class="pagination"><li class="paginate_button page-item previous disabled" id="listStatus_previous"><a href="#" aria-controls="listStatus" data-dt-idx="0" tabindex="0" class="page-link">Previous</a></li><li class="paginate_button page-item active"><a href="#" aria-controls="listStatus" data-dt-idx="1" tabindex="0" class="page-link">1</a></li><li class="paginate_button page-item "><a href="#" aria-controls="listStatus" data-dt-idx="2" tabindex="0" class="page-link">2</a></li><li class="paginate_button page-item "><a href="#" aria-controls="listStatus" data-dt-idx="3" tabindex="0" class="page-link">3</a></li><li class="paginate_button page-item "><a href="#" aria-controls="listStatus" data-dt-idx="4" tabindex="0" class="page-link">4</a></li><li class="paginate_button page-item "><a href="#" aria-controls="listStatus" data-dt-idx="5" tabindex="0" class="page-link">5</a></li><li class="paginate_button page-item disabled" id="listStatus_ellipsis"><a href="#" aria-controls="listStatus" data-dt-idx="6" tabindex="0" class="page-link">…</a></li><li class="paginate_button page-item "><a href="#" aria-controls="listStatus" data-dt-idx="7" tabindex="0" class="page-link">500000</a></li><li class="paginate_button page-item next" id="listStatus_next"><a href="#" aria-controls="listStatus" data-dt-idx="8" tabindex="0" class="page-link">Next</a></li></ul></div><div id="listStatus_processing" class="dataTables_processing panel panel-default" style="display: none;">Processing...</div><div id="buttonContainer"><input class="btn btn-secondary btn-md" id="filter" value="Filter" style="" type="button"><input class="btn btn-secondary btn-md" id="reset" value="Reset" style="" type="button"><input class="btn btn-secondary btn-md" id="rejudge-all" value="Rejudge" style="display: none" type="button"></div></div><table id="listStatus" class="table table-striped table-bordered table-responsive dataTable no-footer" role="grid" cellspacing="0" width="100%">
            <thead>
            <tr role="row"><th class="run-id hidden-lg-down sorting_disabled" rowspan="1" colspan="1">Run ID</th><th class="username sorting_disabled" rowspan="1" colspan="1">
                    Username<br>
                    <input id="un" name="un" class="search_text" style="width:100%" type="text">
                </th><th class="num sorting_disabled" rowspan="1" colspan="1">
                    Prob<br>
                    <select id="contest-status-num" name="num" class="custom-select">
                        <option value="-">All</option>
                    <option value="A">A - Network</option><option value="B" selected="selected">B - Critical Links</option><option value="C">C - Odd Personality</option><option value="D">D - Real Life Traffic</option><option value="E">E - Ant Network</option><option value="F">F - Bridges</option><option value="G">G - H. Capital City</option><option value="H">H - Wishing Snake</option><option value="I">I - Capital City</option></select>
                </th><th class="status sorting_disabled" rowspan="1" colspan="1">
                    Result
                    <br>
                    <select id="res" name="res" class="custom-select">
                        <option value="0" selected="selected">All</option>
                        <option value="1">Accepted</option>
                        <option value="2">Presentation Error</option>
                        <option value="3">Wrong Answer</option>
                        <option value="4">Time Limit Exceed</option>
                        <option value="5">Memory Limit Exceed</option>
                        <option value="6">Output Limit Exceed</option>
                        <option value="7">Runtime Error</option>
                        <option value="8">Compile Error</option>
                        <option value="9">Unknown Error</option>
                        <option value="10">Submit Error</option>
                        <option value="11">Queuing &amp;&amp; Judging</option>
                    </select>
                </th><th class="runtime sorting_disabled" rowspan="1" colspan="1">Time<br>(ms)</th><th class="memory sorting_disabled" rowspan="1" colspan="1">Mem<br>(MB)</th><th class="length hidden-lg-down sorting_disabled" rowspan="1" colspan="1">Length</th><th class="language sorting_disabled" rowspan="1" colspan="1">
                    Lang
                    <br>
                    <select name="language" id="language" class="custom-select">
                        <option value="" selected="selected">All</option>
                        <option value="CPP">C++</option>
                        <option value="C">C</option>
                        <option value="JAVA">Java</option>
                        <option value="PASCAL">Pascal</option>
                        <option value="PYTHON">Python</option>
                        <option value="CSHARP">C#</option>
                        <option value="RUBY">Ruby</option>
                        <option value="OTHER">Other</option>
                    </select>
                </th><th class="date sorting_disabled" rowspan="1" colspan="1">Submit Time</th></tr>
            </thead>
            <tbody><tr id="10197296" class="accepted odd" role="row"><td class=" run-id hidden-lg-down">10197296</td><td class=" username"><div><a href="https://vjudge.net/user/Saif_M_Dhrubo" target="_blank">Saif_M_Dhrubo</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10197296" data-original-title=""> Accepted</div></td><td class=" runtime">668</td><td class=" memory">4.4</td><td class=" length hidden-lg-down">2070</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution shared" data-run-id="10197296" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1502033247000" rendered="true"><span class="relative">7 hr ago</span><span class="absolute">2017-08-06 21:27:27</span></div></td></tr><tr id="10196653" class="failed even" role="row"><td class=" run-id hidden-lg-down">10196653</td><td class=" username"><div><a href="https://vjudge.net/user/exceptional" target="_blank">exceptional</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10196653" data-original-title=""> Wrong Answer</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2112</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10196653" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1502028499000" rendered="true"><span class="relative">8 hr ago</span><span class="absolute">2017-08-06 20:08:19</span></div></td></tr><tr id="10196648" class="failed odd" role="row"><td class=" run-id hidden-lg-down">10196648</td><td class=" username"><div><a href="https://vjudge.net/user/exceptional" target="_blank">exceptional</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10196648" data-original-title=""> Wrong Answer</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2110</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10196648" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1502028461000" rendered="true"><span class="relative">8 hr ago</span><span class="absolute">2017-08-06 20:07:41</span></div></td></tr><tr id="10196633" class="failed even" role="row"><td class=" run-id hidden-lg-down">10196633</td><td class=" username"><div><a href="https://vjudge.net/user/exceptional" target="_blank">exceptional</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10196633" data-original-title=""> Wrong Answer</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2042</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10196633" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1502028337000" rendered="true"><span class="relative">8 hr ago</span><span class="absolute">2017-08-06 20:05:37</span></div></td></tr><tr id="10193968" class="accepted odd" role="row"><td class=" run-id hidden-lg-down">10193968</td><td class=" username"><div><a href="https://vjudge.net/user/024_palash_roy" target="_blank">024_palash_roy</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10193968" data-original-title=""> Accepted</div></td><td class=" runtime">260</td><td class=" memory">10.4</td><td class=" length hidden-lg-down">1828</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10193968" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1502016061000" rendered="true"><span class="relative">12 hr ago</span><span class="absolute">2017-08-06 16:41:01</span></div></td></tr><tr id="10193856" class="accepted even" role="row"><td class=" run-id hidden-lg-down">10193856</td><td class=" username"><div><a href="https://vjudge.net/user/racer" target="_blank">racer</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10193856" data-original-title=""> Accepted</div></td><td class=" runtime">288</td><td class=" memory">6</td><td class=" length hidden-lg-down">1811</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10193856" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1502015518000" rendered="true"><span class="relative">12 hr ago</span><span class="absolute">2017-08-06 16:31:58</span></div></td></tr><tr id="10035521" class="accepted odd" role="row"><td class=" run-id hidden-lg-down">10035521</td><td class=" username"><div><a href="https://vjudge.net/user/zaoad" target="_blank">zaoad</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10035521" data-original-title=""> Accepted</div></td><td class=" runtime">240</td><td class=" memory">4.4</td><td class=" length hidden-lg-down">2965</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution self" data-run-id="10035521" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501453507000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-31 04:25:07</span></div></td></tr><tr id="10035517" class="failed even" role="row"><td class=" run-id hidden-lg-down">10035517</td><td class=" username"><div><a href="https://vjudge.net/user/zaoad" target="_blank">zaoad</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10035517" data-original-title="Compilation Error"> Compilation Error</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2963</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution self" data-run-id="10035517" data-original-title="C">C</div></td><td class=" date"><div class="localizedTime" data-time="1501453163000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-31 04:19:23</span></div></td></tr><tr id="10035382" class="accepted odd" role="row"><td class=" run-id hidden-lg-down">10035382</td><td class=" username"><div><a href="https://vjudge.net/user/ssttaayy" target="_blank">ssttaayy</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10035382" data-original-title=""> Accepted</div></td><td class=" runtime">272</td><td class=" memory">6</td><td class=" length hidden-lg-down">1878</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10035382" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501443706000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-31 01:41:46</span></div></td></tr><tr id="10035302" class="accepted even" role="row"><td class=" run-id hidden-lg-down">10035302</td><td class=" username"><div><a href="https://vjudge.net/user/Imrakib" target="_blank">Imrakib</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10035302" data-original-title=""> Accepted</div></td><td class=" runtime">420</td><td class=" memory">6.8</td><td class=" length hidden-lg-down">2330</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10035302" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501441226000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-31 01:00:26</span></div></td></tr><tr id="10035298" class="failed odd" role="row"><td class=" run-id hidden-lg-down">10035298</td><td class=" username"><div><a href="https://vjudge.net/user/Imrakib" target="_blank">Imrakib</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10035298" data-original-title=""> Wrong Answer</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2259</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10035298" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501441094000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-31 00:58:14</span></div></td></tr><tr id="10035286" class="failed even" role="row"><td class=" run-id hidden-lg-down">10035286</td><td class=" username"><div><a href="https://vjudge.net/user/Imrakib" target="_blank">Imrakib</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10035286" data-original-title=""> Runtime Error</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2625</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10035286" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501440636000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-31 00:50:36</span></div></td></tr><tr id="10034398" class="failed odd" role="row"><td class=" run-id hidden-lg-down">10034398</td><td class=" username"><div><a href="https://vjudge.net/user/OldSparks" target="_blank">OldSparks</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10034398" data-original-title=""> Runtime Error</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2328</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10034398" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501426280000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-30 20:51:20</span></div></td></tr><tr id="10034396" class="failed even" role="row"><td class=" run-id hidden-lg-down">10034396</td><td class=" username"><div><a href="https://vjudge.net/user/OldSparks" target="_blank">OldSparks</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10034396" data-original-title="Compilation Error"> Compilation Error</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2329</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10034396" data-original-title="C">C</div></td><td class=" date"><div class="localizedTime" data-time="1501426250000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-30 20:50:50</span></div></td></tr><tr id="10031026" class="accepted odd" role="row"><td class=" run-id hidden-lg-down">10031026</td><td class=" username"><div><a href="https://vjudge.net/user/Musfiq_Shohan" target="_blank">Musfiq_Shohan</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10031026" data-original-title=""> Accepted</div></td><td class=" runtime">264</td><td class=" memory">4.5</td><td class=" length hidden-lg-down">2180</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution shared" data-run-id="10031026" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501413102000" rendered="true"><span class="relative">7 days ago</span><span class="absolute">2017-07-30 17:11:42</span></div></td></tr><tr id="10015395" class="accepted even" role="row"><td class=" run-id hidden-lg-down">10015395</td><td class=" username"><div><a href="https://vjudge.net/user/HHmoon" target="_blank">HHmoon</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10015395" data-original-title=""> Accepted</div></td><td class=" runtime">240</td><td class=" memory">4.4</td><td class=" length hidden-lg-down">2075</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution shared" data-run-id="10015395" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501330408000" rendered="true"><span class="relative">8 days ago</span><span class="absolute">2017-07-29 18:13:28</span></div></td></tr><tr id="10015381" class="failed odd" role="row"><td class=" run-id hidden-lg-down">10015381</td><td class=" username"><div><a href="https://vjudge.net/user/HHmoon" target="_blank">HHmoon</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10015381" data-original-title="Presentation Error"> Presentation Error</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">2075</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10015381" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501330355000" rendered="true"><span class="relative">8 days ago</span><span class="absolute">2017-07-29 18:12:35</span></div></td></tr><tr id="10015344" class="failed even" role="row"><td class=" run-id hidden-lg-down">10015344</td><td class=" username"><div><a href="https://vjudge.net/user/HHmoon" target="_blank">HHmoon</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="10015344" data-original-title=""> Wrong Answer</div></td><td class=" runtime"></td><td class=" memory"></td><td class=" length hidden-lg-down">1951</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution forbidden" data-run-id="10015344" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1501330234000" rendered="true"><span class="relative">8 days ago</span><span class="absolute">2017-07-29 18:10:34</span></div></td></tr><tr id="6845587" class="accepted odd" role="row"><td class=" run-id hidden-lg-down">6845587</td><td class=" username"><div><a href="https://vjudge.net/user/toha36" target="_blank">toha36</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="6845587" data-original-title=""> Accepted</div></td><td class=" runtime">232</td><td class=" memory">4.3</td><td class=" length hidden-lg-down">3433</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution shared" data-run-id="6845587" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1470951286000" rendered="true"><span class="relative">12 months ago</span><span class="absolute">2016-08-12 03:34:46</span></div></td></tr><tr id="6845079" class="accepted even" role="row"><td class=" run-id hidden-lg-down">6845079</td><td class=" username"><div><a href="https://vjudge.net/user/r2h" target="_blank">r2h</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" num"><div><a href="#problem/B">B</a><img src="critcalpoint_files/find_me.png"></div></td><td class=" status"><div class="view-solution" data-toggle="tooltip" title="" data-run-id="6845079" data-original-title=""> Accepted</div></td><td class=" runtime">0</td><td class=" memory"></td><td class=" length hidden-lg-down">1759</td><td class=" language"><div data-toggle="tooltip" data-html="true" title="" class="view-solution shared" data-run-id="6845079" data-original-title="C++">C++</div></td><td class=" date"><div class="localizedTime" data-time="1470932150000" rendered="true"><span class="relative">12 months ago</span><span class="absolute">2016-08-11 22:15:50</span></div></td></tr></tbody>
        </table><div class=""></div></div>
        
        
        
    </div>
</div>

                    </div>
                
                
                    <div class="tab-pane" id="rank" role="tabpanel" aria-expanded="false">
                        




















<div id="contest_rank">

    <table id="contest-rank-table" style="width: auto;" class="" cellspacing="1"><thead style="position: fixed; top: 0px; display: none; left: 0px; width: 0px;" id="rank-table-header"><tr>   <th class="rank" rowspan="2"><div>Rank</div></th>   <th class="team" rowspan="2"><div>Team</div></th>   <th class="solve" rowspan="2"><div>Score</div></th>   <th class="penalty" rowspan="2"><div>Penalty</div></th><th class="prob undefined"><div><a href="#problem/A">A</a></div></th><th class="prob undefined"><div><a href="#problem/B">B</a></div></th><th class="prob undefined"><div><a href="#problem/C">C</a></div></th><th class="prob undefined"><div><a href="#problem/D">D</a></div></th><th class="prob undefined"><div><a href="#problem/E">E</a></div></th><th class="prob undefined"><div><a href="#problem/F">F</a></div></th><th class="prob undefined"><div><a href="#problem/G">G</a></div></th><th class="prob undefined"><div><a href="#problem/H">H</a></div></th><th class="prob undefined"><div><a href="#problem/I">I</a></div></th></tr><tr><th class="prob undefined"><div>5 / 11</div></th><th class="prob undefined"><div>9 / 9</div></th><th class="prob undefined"><div>6 / 11</div></th><th class="prob undefined"><div>6 / 7</div></th><th class="prob undefined"><div>2 / 2</div></th><th class="prob undefined"><div>4 / 6</div></th><th class="prob undefined"><div>2 / 11</div></th><th class="prob undefined"><div>7 / 15</div></th><th class="prob undefined"><div>4 / 4</div></th></tr></thead><thead style=""><tr>   <th class="rank" rowspan="2"><div>Rank</div></th>   <th class="team" rowspan="2"><div>Team</div></th>   <th class="solve" rowspan="2"><div>Score</div></th>   <th class="penalty" rowspan="2"><div>Penalty</div></th><th class="prob undefined"><div><a href="#problem/A">A</a></div></th><th class="prob undefined"><div><a href="#problem/B">B</a></div></th><th class="prob undefined"><div><a href="#problem/C">C</a></div></th><th class="prob undefined"><div><a href="#problem/D">D</a></div></th><th class="prob undefined"><div><a href="#problem/E">E</a></div></th><th class="prob undefined"><div><a href="#problem/F">F</a></div></th><th class="prob undefined"><div><a href="#problem/G">G</a></div></th><th class="prob undefined"><div><a href="#problem/H">H</a></div></th><th class="prob undefined"><div><a href="#problem/I">I</a></div></th></tr><tr><th class="prob undefined"><div>5 / 11</div></th><th class="prob undefined"><div>9 / 9</div></th><th class="prob undefined"><div>6 / 11</div></th><th class="prob undefined"><div>6 / 7</div></th><th class="prob undefined"><div>2 / 2</div></th><th class="prob undefined"><div>4 / 6</div></th><th class="prob undefined"><div>2 / 11</div></th><th class="prob undefined"><div>7 / 15</div></th><th class="prob undefined"><div>4 / 4</div></th></tr></thead><tbody><tr c="126862" u="105175" class="this "><td class="rank meta">1</td><td class="team meta"><div><a href="https://vjudge.net/user/RandomVariables" target="_blank">RandomVariables <span style="color:gray">(...)</span></a></div></td><td class="solved meta"><a href="#status/RandomVariables/-/0/">7</a></td><td class="penalty meta" data-original-title="" title="">   <span class="minute">24587</span>   <span class="hms">409:47:47</span></td><td class="prob accepted">63:23:07<br>&nbsp;</td><td class="prob accepted">17:14:10<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">75:02:59<br> <span>(-1)</span></td><td class="prob ">&nbsp;</td><td class="prob accepted">83:34:40<br> <span>(-1)</span></td><td class="prob accepted">111:48:11<br> <span>(-7)</span></td><td class="prob accepted">37:28:03<br> <span>(-2)</span></td><td class="prob accepted fb">17:36:37<br>&nbsp;</td></tr><tr c="126862" u="79287" class="this "><td class="rank meta">2</td><td class="team meta"><div><a href="https://vjudge.net/user/r2h" target="_blank">r2h <span style="color:gray">(Riddho_21)</span></a></div></td><td class="solved meta"><a href="#status/r2h/-/0/">7</a></td><td class="penalty meta">   <span class="minute">46340</span>   <span class="hms">772:20:01</span></td><td class="prob accepted">76:06:19<br> <span>(-1)</span></td><td class="prob accepted">85:45:50<br>&nbsp;</td><td class="prob accepted">86:32:40<br> <span>(-1)</span></td><td class="prob accepted">114:52:37<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">123:45:14<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">158:45:32<br> <span>(-4)</span></td><td class="prob accepted">124:31:49<br>&nbsp;</td></tr><tr c="126862" u="64393" class="this "><td class="rank meta">3</td><td class="team meta"><div><a href="https://vjudge.net/user/s_h_shahin" target="_blank">s_h_shahin <span style="color:gray">(Shahin_21)</span></a></div></td><td class="solved meta"><a href="#status/s_h_shahin/-/0/">6</a></td><td class="penalty meta">   <span class="minute">15967</span>   <span class="hms">266:07:23</span></td><td class="prob ">&nbsp;</td><td class="prob accepted">14:33:06<br>&nbsp;</td><td class="prob accepted">101:31:37<br>&nbsp;</td><td class="prob accepted">106:38:27<br>&nbsp;</td><td class="prob accepted fb">14:32:36<br>&nbsp;</td><td class="prob accepted fb">13:39:58<br>&nbsp;</td><td class="prob accepted fb">14:31:39<br> <span>(-2)</span></td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td></tr><tr c="126862" u="91531" class="this "><td class="rank meta">4</td><td class="team meta"><div><a href="https://vjudge.net/user/Safayat" target="_blank">Safayat <span style="color:gray">(Safayat_21)</span></a></div></td><td class="solved meta"><a href="#status/Safayat/-/0/">6</a></td><td class="penalty meta">   <span class="minute">33901</span>   <span class="hms">565:01:12</span></td><td class="prob accepted fb">13:21:59<br> <span>(-1)</span></td><td class="prob ">&nbsp;</td><td class="prob accepted">129:52:45<br>&nbsp;</td><td class="prob accepted">133:53:02<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">136:26:10<br> <span>(-1)</span></td><td class="prob ">&nbsp;</td><td class="prob accepted fb">14:00:51<br>&nbsp;</td><td class="prob accepted">136:46:25<br>&nbsp;</td></tr><tr c="126862" u="77328" class="this "><td class="rank meta">5</td><td class="team meta"><div><a href="https://vjudge.net/user/morpheus" target="_blank">morpheus <span style="color:gray">(zadid_21)</span></a></div></td><td class="solved meta"><a href="#status/morpheus/-/0/">5</a></td><td class="penalty meta">   <span class="minute">20367</span>   <span class="hms">339:27:44</span></td><td class="prob ">&nbsp;</td><td class="prob accepted">62:57:35<br>&nbsp;</td><td class="prob accepted">86:49:40<br>&nbsp;</td><td class="prob accepted fb">62:58:50<br>&nbsp;</td><td class="prob accepted">62:56:19<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">63:45:20<br>&nbsp;</td><td class="prob ">&nbsp;</td></tr><tr c="126862" u="105180" class="this "><td class="rank meta">6</td><td class="team meta"><div><a href="https://vjudge.net/user/CUBE" target="_blank">CUBE <span style="color:gray">(RizDipNab)</span></a></div></td><td class="solved meta"><a href="#status/CUBE/-/0/">4</a></td><td class="penalty meta">   <span class="minute">6838</span>   <span class="hms">113:58:58</span></td><td class="prob accepted">37:18:14<br> <span>(-4)</span></td><td class="prob accepted">12:43:57<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">23:32:05<br>&nbsp;</td><td class="prob accepted">39:04:42<br>&nbsp;</td></tr><tr c="126862" u="64433" class="this "><td class="rank meta">7</td><td class="team meta"><div><a href="https://vjudge.net/user/rai_ash" target="_blank">rai_ash <span style="color:gray">(Raida_21)</span></a></div></td><td class="solved meta"><a href="#status/rai_ash/-/0/">4</a></td><td class="penalty meta">   <span class="minute">15721</span>   <span class="hms">262:01:35</span></td><td class="prob accepted">85:46:17<br>&nbsp;</td><td class="prob accepted">11:52:25<br>&nbsp;</td><td class="prob accepted">87:52:30<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">75:50:23<br> <span>(-2)</span></td><td class="prob ">&nbsp;</td></tr><tr c="126862" u="67643" class="this "><td class="rank meta">8</td><td class="team meta"><div><a href="https://vjudge.net/user/sajib_readd" target="_blank">sajib_readd <span style="color:gray">(sajib_readd)</span></a></div></td><td class="solved meta"><a href="#status/sajib_readd/-/0/">3</a></td><td class="penalty meta">   <span class="minute">12026</span>   <span class="hms">200:26:10</span></td><td class="prob ">&nbsp;</td><td class="prob accepted">73:33:58<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">63:42:59<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted">63:09:13<br>&nbsp;</td><td class="prob ">&nbsp;</td></tr><tr c="126862" u="60578" class="this "><td class="rank meta">9</td><td class="team meta"><div><a href="https://vjudge.net/user/Kitorp" target="_blank">Kitorp</a></div></td><td class="solved meta"><a href="#status/Kitorp/-/0/">1</a></td><td class="penalty meta">   <span class="minute">420</span>   <span class="hms">07:00:22</span></td><td class="prob ">&nbsp;</td><td class="prob accepted fb">07:00:22<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td></tr><tr c="126862" u="105176" class="this "><td class="rank meta">10</td><td class="team meta"><div><a href="https://vjudge.net/user/DU_Underdogs" target="_blank">DU_Underdogs</a></div></td><td class="solved meta"><a href="#status/DU_Underdogs/-/0/">1</a></td><td class="penalty meta">   <span class="minute">4965</span>   <span class="hms">82:45:41</span></td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob accepted fb">81:25:41<br> <span>(-4)</span></td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td></tr><tr c="126862" u="40374" class="this "><td class="rank meta">11</td><td class="team meta"><div><a href="https://vjudge.net/user/toha36" target="_blank">toha36 <span style="color:gray">(inzamam.toha)</span></a></div></td><td class="solved meta"><a href="#status/toha36/-/0/">1</a></td><td class="penalty meta">   <span class="minute">5464</span>   <span class="hms">91:04:46</span></td><td class="prob ">&nbsp;</td><td class="prob accepted">91:04:46<br>&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td><td class="prob ">&nbsp;</td></tr></tbody></table>
    <table id="contest-rank-table-export"></table>

    <div class="rank_tool">
        <img src="critcalpoint_files/find_me.png" id="img_find_me" title="Find me" style="visibility: hidden;" height="55">
    </div>

</div>

                    </div>
                
                <div class="tab-pane" id="discuss" role="tabpanel">
                    



















<div id="contest_discuss"><div class="comment-posts-container"><div class="comment-edit">
        <textarea class="form-control edit" name="content" rows="6" placeholder="Comment in Markdown"></textarea>
        <div class="comment-error alert-danger" style="display: none; padding: 20px"></div>
        <div class="preview">
            <span>Preview:</span><br>
            <div class="preview-content" style="display: none;"></div>
            <div class="buttons">
                <button class="btn btn-primary save" style="display: none">Save</button>
                <button class="btn btn-primary post broadcast">Post &amp; Broadcast</button>
                <button class="btn btn-secondary post">Post</button>
                <button class="btn btn-secondary cancel">Clear</button>
            </div>
            <div style="clear: both"></div>
        </div>
    </div>

    

    <div class="comment-posts"></div>

    

</div></div>

                </div>
            </div>

            <div class="rank_tool">
                <span id="img_go_top" title="Go to top"></span>
            </div>
        </div>
    
    

</div>

<textarea style="display: none" name="dataJson">{"id":126862,"title":"Topic-wise
 Practice Contest (Articulation Point, Bridge, BCC, 
SCC)","type":0,"openness":0,"authStatus":1,"begin":1470623400000,"end":1471228200000,"createTime":0,"started":true,"ended":true,"managerId":99444,"managerName":"DU_CM","fav":false,"description":{"format":"HTML","content":""},"announcement":"","problems":[{"pid":20837,"title":"Network","oj":"UVA","probNum":"315","num":"A","publicDescId":12759,"publicDescVersion":1501585858000,"properties":{"Time
 limit":"3000 
ms","OS":"Linux"},"weight":1},{"pid":25903,"title":"Critical 
Links","oj":"LightOJ","probNum":"1026","num":"B","publicDescId":17287,"publicDescVersion":1502008766000,"properties":{"Time
 limit":"2000 ms","Memory limit":"32768 
kB","OS":"Linux","Source":"\u003cdiv id\u003d\"problem_setter\"\u003e\n 
     Special Thanks: Jane Alam Jan (Modified Description, Dataset) \n   
 \u003c/div\u003e \n   "},"weight":1},{"pid":27010,"title":"Odd 
Personality","oj":"LightOJ","probNum":"1300","num":"C","publicDescId":18409,"publicDescVersion":1501180598000,"properties":{"Time
 limit":"2000 ms","Memory limit":"32768 
kB","OS":"Linux","Source":"\u003cdiv id\u003d\"problem_setter\"\u003e\n 
     Problem Setter: Jane Alam Jan \n    \u003c/div\u003e \n   
"},"weight":1},{"pid":27001,"title":"Real Life 
Traffic","oj":"LightOJ","probNum":"1291","num":"D","publicDescId":18400,"publicDescVersion":1501757207000,"properties":{"Time
 limit":"2000 ms","Memory limit":"32768 
kB","OS":"Linux","Source":"\u003cdiv id\u003d\"problem_setter\"\u003e\n 
     Problem Setter: Jane Alam Jan \n    \u003c/div\u003e \n   
"},"weight":1},{"pid":27016,"title":"Ant 
Network","oj":"LightOJ","probNum":"1308","num":"E","publicDescId":18415,"publicDescVersion":1501706915000,"properties":{"Time
 limit":"2000 ms","Memory limit":"32768 
kB","OS":"Linux","Source":"\u003cdiv id\u003d\"problem_setter\"\u003e\n 
     Special Thanks: Jane Alam Jan (Description, Solution, Dataset) \n  
  \u003c/div\u003e \n   
"},"weight":1},{"pid":195715,"title":"Bridges","oj":"Gym","probNum":"100712H","num":"F","publicDescId":52409,"publicDescVersion":1502028651000,"properties":{"Time
 limit":"3000 ms","Memory limit":"262144 
kB","OS":"Windows","Source":"2015 ACM Amman Collegiate Programming 
Contest"},"weight":1},{"pid":159338,"title":"H. Capital 
City","oj":"Gym","probNum":"100676H","num":"G","publicDescId":50266,"publicDescVersion":1501180600000,"properties":{"Time
 limit":"3000 ms","Memory limit":"262144 
kB","OS":"Windows","Source":"2015 ACM Arabella Collegiate Programming 
Contest"},"weight":1},{"pid":26882,"title":"Wishing 
Snake","oj":"LightOJ","probNum":"1168","num":"H","publicDescId":18281,"publicDescVersion":1501515630000,"properties":{"Time
 limit":"2000 ms","Memory limit":"32768 
kB","OS":"Linux","Source":"\u003cdiv id\u003d\"problem_setter\"\u003e\n 
     Problem Setter: Jane Alam Jan \n    \u003c/div\u003e \n    
\u003cdiv id\u003d\"problem_setter\"\u003e\n      Special Thanks: Md. 
Mahbubul Hasan \n    \u003c/div\u003e \n   
"},"weight":1},{"pid":49029,"title":"Capital 
City","oj":"SPOJ","probNum":"CAPCITY","num":"I","publicDescId":41321,"publicDescVersion":1501180608000,"properties":{"Time
 limit":"210 ms","Memory limit":"1572864 kB","Code length Limit":"50000 
B","OS":"Linux","Language limit":"All except: NODEJS OBJC PERL6 SQLITE 
VB.NET","Source":"Armenian TST 2010, Round 2","Author":"Narek 
Saribekyan"},"weight":1}],"problemsHash":"7982dd6231b38384d24c25533b7cd4b6","privatePeerContestIds":[],"enableTimeMachine":true,"sumTime":true,"penalty":1200,"partialScore":false,"customizedWeight":false,"showPeers":true}</textarea>
<script id="facebook-jssdk" src="critcalpoint_files/sdk.js"></script><script async="" src="critcalpoint_files/analytics.js"></script><script type="text/javascript">moduleName = "./contest/view/view";</script>




















<div class="body-footer">
    <br>All Copyright Reserved ©2010-2017 <a href="mailto:is.un@qq.com">Xu Han</a>
    <br>Server Time: <span class="currentTimeTZ">2017-08-07 04:32:34 BST</span>
</div>

<input name="version" value="1502040272869" type="hidden">


<span id="img-support" title="Feedback" style="display: none;"></span>
<script type="text/javascript">basePath = "";</script>
<script type="text/javascript">imagesRoot = "/static/images";</script>
<script src="critcalpoint_files/loader.js"></script>
<script src="critcalpoint_files/vendor.js"></script>
<script src="critcalpoint_files/app.js"></script>
<script>
    (function (i, s, o, g, r, a, m) {
        i['GoogleAnalyticsObject'] = r;
        i[r] = i[r] || function () {
                (i[r].q = i[r].q || []).push(arguments)
            }, i[r].l = 1 * new Date();
        a = s.createElement(o),
            m = s.getElementsByTagName(o)[0];
        a.async = 1;
        a.src = g;
        m.parentNode.insertBefore(a, m)
    })(window, document, 'script', 'https://www.google-analytics.com/analytics.js', 'ga');
    ga('create', 'UA-13231844-2', 'auto');
    
    ga('send', 'pageview');
</script>


<div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; height: 0px; width: 0px;"><div><iframe name="fb_xdm_frame_https" allowtransparency="true" allowfullscreen="true" scrolling="no" id="fb_xdm_frame_https" aria-hidden="true" title="Facebook Cross Domain Communication Frame" tabindex="-1" style="border: medium none;" src="critcalpoint_files/XBwzv5Yrm_1.html" frameborder="0"></iframe></div></div><div style="position: absolute; top: -10000px; height: 0px; width: 0px;"><div></div></div></div>
<script>(function(d, s, id) {
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) return;
    js = d.createElement(s); js.id = id;
    js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.8";
    fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>



<div class="modal fade in" id="solutionModal" tabindex="-1" role="dialog" style="display: block;">
    <div class="modal-dialog modal-lg" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal">
                    <a href="javascript:void(0)">
                        <i class="fa fa-close"></i>
                    </a>
                </button>
                <h5 class="modal-title" id="solutionModalLabel"><a href="https://vjudge.net/solution/10035521" target="_blank">#10035521</a> | <a href="https://vjudge.net/user/zaoad" target="_blank">zaoad</a>'s solution for <a href="https://vjudge.net/problem/LightOJ-1026" target="_blank">[LightOJ-1026]</a> <a href="https://vjudge.net/contest/126862#problem/B" target="_blank">[Problem B]</a></h5>
            </div>
            <div class="modal-body">
                <div id="info-panel">
                    <table class="table table-reflow">
                        <tbody><tr class="accepted"><th class="table-active" scope="row">Status</th><td class="Status">Accepted</td></tr><tr class="accepted"><th class="table-active" scope="row">Time</th><td class="Time">240ms</td></tr><tr class="accepted"><th class="table-active" scope="row">Memory</th><td class="Memory">4404kB</td></tr><tr class="accepted"><th class="table-active" scope="row">Length</th><td class="Length">2965</td></tr><tr class="accepted"><th class="table-active" scope="row">Lang</th><td class="Lang">C++</td></tr><tr class="accepted"><th class="table-active" scope="row">Submitted</th><td class="Submitted">2017-07-31 04:25:07</td></tr><tr class="accepted"><th class="table-active" scope="row">RemoteRunId</th><td class="RemoteRunId">1018756</td></tr></tbody>
                    </table>
                </div>
                <div class="alert alert-warning" role="alert" id="ce-info" style="display: none"></div>
                <div id="code-panel"><span id="btn-select-all">Select Code</span><pre><code id="code-content" class="CPP hljs"><span class="hljs-meta">#<span class="hljs-meta-keyword">include</span><span class="hljs-meta-string">&lt;bits/stdc++.h&gt;</span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> <span class="hljs-built_in">std</span>;
<span class="hljs-meta">#<span class="hljs-meta-keyword">define</span> mx 10007</span>
<span class="hljs-keyword">int</span> vis[mx],bt[mx],low[mx],parent[mx];
<span class="hljs-built_in">vector</span>&lt;<span class="hljs-keyword">int</span>&gt;adj[mx];
<span class="hljs-keyword">int</span> t=<span class="hljs-number">0</span>,root,ans=<span class="hljs-number">0</span>;
pair&lt;<span class="hljs-keyword">int</span> ,<span class="hljs-keyword">int</span> &gt;node;
<span class="hljs-built_in">vector</span>&lt;pair&lt;<span class="hljs-keyword">int</span> ,<span class="hljs-keyword">int</span> &gt; &gt; pair_;
<span class="hljs-function"><span class="hljs-keyword">void</span> <span class="hljs-title">arti</span><span class="hljs-params">(<span class="hljs-keyword">int</span> source)</span>
</span>{
    <span class="hljs-keyword">int</span> i;
    bt[source]=low[source]=t++;
    <span class="hljs-keyword">int</span> numberofchild=<span class="hljs-number">0</span>;
    <span class="hljs-keyword">for</span>(i=<span class="hljs-number">0</span>; i&lt;adj[source].size(); i++)
    {
        <span class="hljs-keyword">int</span> newe=adj[source][i];
        <span class="hljs-comment">//printf("source %d newe %d bt %d low %d \n",source,newe,bt[source],low[source]);</span>
        <span class="hljs-keyword">if</span>(parent[source]==newe)<span class="hljs-keyword">continue</span>;
        <span class="hljs-keyword">if</span>(vis[newe])
        {
            <span class="hljs-comment">//cout&lt;&lt;"vis[newe]te dokce"&lt;&lt;endl;</span>
            low[source]=min(low[source],low[newe]);
        }
        <span class="hljs-keyword">if</span>(!vis[newe])
        {
            <span class="hljs-comment">//cout&lt;&lt;"else e dokce"&lt;&lt;endl;</span>
            vis[newe]=<span class="hljs-number">1</span>;
            parent[newe]=source;
            arti(newe);
            <span class="hljs-keyword">if</span>(low[source]&gt;low[newe])
            {
                low[source]=low[newe];
                <span class="hljs-comment">//  printf("sorce %d low %d\n",source,low[source]);</span>
            }
            <span class="hljs-keyword">if</span>(bt[source]&lt;low[newe])
            {
                ans++;
                <span class="hljs-keyword">if</span>(source&lt;newe)
                pair_.push_back(make_pair(source,newe));
                <span class="hljs-keyword">else</span>
                pair_.push_back(make_pair(newe,source));
                <span class="hljs-comment">//printf("ans %d\n\n",source);</span>
            }
            <span class="hljs-comment">/*numberofchild+=1;
            if(numberofchild&gt;1&amp;&amp;source==root)
            {
            	printf("source ans %d\n",source);
            }*/</span>
        }
    }
}
<span class="hljs-function"><span class="hljs-keyword">bool</span> <span class="hljs-title">compareByLength</span><span class="hljs-params">(pair&lt;<span class="hljs-keyword">int</span> ,<span class="hljs-keyword">int</span> &gt; a, pair &lt; <span class="hljs-keyword">int</span> , <span class="hljs-keyword">int</span> &gt; b)</span>
</span>{
    <span class="hljs-keyword">if</span>(a.first&gt;b.first)
    {
        <span class="hljs-keyword">return</span> <span class="hljs-literal">false</span>;
    }
    <span class="hljs-keyword">else</span> <span class="hljs-keyword">if</span>(a.first==b.first)
    {
        <span class="hljs-keyword">if</span>(a.second&gt;b.second)
        {
            <span class="hljs-keyword">return</span> <span class="hljs-literal">false</span>;
        }
        <span class="hljs-keyword">return</span> <span class="hljs-literal">true</span>;
    }
    <span class="hljs-keyword">return</span> <span class="hljs-literal">true</span>;
}
<span class="hljs-function"><span class="hljs-keyword">void</span> <span class="hljs-title">clear_</span><span class="hljs-params">()</span>
</span>{
    <span class="hljs-keyword">int</span> i=<span class="hljs-number">0</span>;
    <span class="hljs-built_in">memset</span>(vis,<span class="hljs-number">0</span>,<span class="hljs-keyword">sizeof</span>(vis));
    <span class="hljs-built_in">memset</span>(bt,<span class="hljs-number">0</span>,<span class="hljs-keyword">sizeof</span>(bt));
    <span class="hljs-built_in">memset</span>(low,<span class="hljs-number">0</span>,<span class="hljs-keyword">sizeof</span>(low));
    <span class="hljs-built_in">memset</span>(parent,<span class="hljs-number">0</span>,<span class="hljs-keyword">sizeof</span>(parent));
    <span class="hljs-keyword">for</span>(i=<span class="hljs-number">0</span>; i&lt;mx; i++)
    {
        adj[i].clear();

    }
    pair_.clear();
    t=<span class="hljs-number">0</span>;
    ans=<span class="hljs-number">0</span>;
}
<span class="hljs-function"><span class="hljs-keyword">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span>
</span>{
    <span class="hljs-keyword">int</span> n,m,u,v,i,j,k,nn,test;
    <span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%d"</span>,&amp;test);
    <span class="hljs-keyword">for</span>(k=<span class="hljs-number">1</span>; k&lt;=test; k++)
    {
        <span class="hljs-comment">//</span>
        <span class="hljs-comment">//cout&lt;&lt;"ekhono loop ache"&lt;&lt;endl;</span>
        clear_();
        <span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%d"</span>,&amp;n);
        <span class="hljs-keyword">for</span>(i=<span class="hljs-number">0</span>; i&lt;n; i++)
        {
            <span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%d (%d)"</span>,&amp;u,&amp;nn);
         <span class="hljs-comment">//   cout&lt;&lt;u&lt;&lt;" "&lt;&lt;nn&lt;&lt;endl;</span>
            <span class="hljs-keyword">for</span>(j=<span class="hljs-number">0</span>; j&lt;nn; j++)
            {
                <span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%d"</span>,&amp;v);
                adj[u].push_back(v);
            }
        }
        <span class="hljs-keyword">for</span>(i=<span class="hljs-number">0</span>; i&lt;n; i++)
        {

            <span class="hljs-keyword">if</span>(!vis[i])
            {
                root =i;
                arti(i);
            }

        }
        <span class="hljs-comment">/*for(i=0; i&lt;n; i++)
        {
            printf("node %d bt %d low %d\n",i,bt[i],low[i]);
        }*/</span>
        <span class="hljs-comment">//printf("%d %d",k,ans);</span>
        <span class="hljs-built_in">printf</span>(<span class="hljs-string">"Case %d:\n%d critical links\n"</span>,k,ans);
        sort(pair_.begin(),pair_.end(),compareByLength);
        <span class="hljs-keyword">for</span>(i=<span class="hljs-number">0</span>;i&lt;pair_.size();i++)
        {
            <span class="hljs-built_in">printf</span>(<span class="hljs-string">"%d - %d\n"</span>,pair_[i].first,pair_[i].second);
        }
    }

}
</code></pre></div>
                <div id="source_discuss"><div class="comment-posts-container"><div class="comment-edit">
        <textarea class="form-control edit" name="content" rows="6" placeholder="Comment in Markdown"></textarea>
        <div class="comment-error alert-danger" style="display: none; padding: 20px"></div>
        <div class="preview">
            <span>Preview:</span><br>
            <div class="preview-content" style="display: none;"></div>
            <div class="buttons">
                <button class="btn btn-primary save" style="display: none">Save</button>
                
                <button class="btn btn-secondary post">Post</button>
                <button class="btn btn-secondary cancel">Clear</button>
            </div>
            <div style="clear: both"></div>
        </div>
    </div>

    

    <div class="comment-posts"></div>

    

</div></div>
            </div>
        </div>
    </div>
</div><div class="modal-backdrop fade in"></div></body></html>