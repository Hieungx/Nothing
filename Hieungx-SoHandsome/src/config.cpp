cl_crosshairalpha 255;
cl_crosshair_drawoutline 0;
cl_crosshaircolor 1;
cl_crosshairdot 0;
cl_crosshairsize 3;
cl_crosshairgap -2.5
cl_crosshairstyle 4;
cl_crosshairthickness 0;

cl_radar_always_centered 0; cl_radar_scale 0.3; net_graph 1;net_graphpos 2;net_graphproportionalfont 0.5;+cl_show_team_equipment ;
bind n -attack;bind space;bind n -attack;bind space; speaker_config 2;



cl_crosshairstyle 4;
cl_crosshairusealpha 1;
cl_crosshairthickness 1;


cl_crosshairalpha 800; cl_crosshaircolor 2; cl_crosshairdot 0; cl_crosshairgap -2; cl_crosshairsize 2; cl_crosshairstyle 4; 


cl_radar_always_centered 0; cl_radar_scale 0.3; net_graph 1;net_graphpos 2;net_graphproportionalfont 0.5;+cl_show_team_equipment ;
bind n -attack;bind space;bind n -attack;bind space; speaker_config 2;


bind "w" "+forward;cl_clanid 10752186"; 
bind "a" "+moveleft;cl_clanid 10752145"; 
bind "d" "+moveright;cl_clanid 10752137"; 
bind "s" "+back;cl_clanid 10752151"; 


-novid -tickrate 128 -freq 144 -nojoy +cl_forcepreload 1 +mat_queue_mode 2 -high +fps_max 0
  
-novid -tickrate 128 -high -threads 6 +fps_max 0 +cl_interp 0 +cl_interp_ratio 1 +rate 128000 +cl_updaterate 128 +cl_cmdrate 128 +mat_queue_mode 2 -freq 144 -refresh 144  -d3d9ex -nojoy

cl_crosshair_drawoutline 0;cl_crosshairdot 0;;cl_crosshairdot 0;cl_crosshairgap -2.5;cl_crosshairsize 4;cl_crosshairstyle 4;cl_crosshairthickness 0

bind n -attack;bind space;

Bind c "incrementvar cl_radar_scale 0.45 0.8 0.35"

bindtoggle "v" "cl_righthand"; 

Setting : 
10 lệnh hữu ích trong CS:GO
1. mat_monitorgamma 1.6 (tăng độ gamma giúp nhìn địch dễ hơn trong bóng tối)
2. cl_use_opens_buy_menu 0 (có thể nhặt được vũ khí mà không bị bật buy menu khi đứng ở base)
3. bind shift "+speed; r_cleardecals" (vệt máu sẽ biến mất ngay lập tức khi bấm Shift giúp nhìn địch dễ hơn)
4. bindtoggle g gameinstructor_enable (smoke defuse ez như một trò đùa)
5. cl_radar_always_centered 0 (chỉnh radar ở trung tâm)
5,5. cl_radar_scale 0.3 (tăng tỉ lệ bản đồ)
6. bind j +jumpthrow; alias +jumpthrow "+jump; -attack"; alias -jumpthrow -jump (jump throw blind)
7. bind f3 "buy flashbang; buy smokegrenade; buy hegrenade; buy flashbang" (mua flash, he, smoke nhanh hơn)
8. snd_headphone_pan_exponent 2 (nghe rõ được hiệu ứng âm thanh hơn, đặc biệt khi ở tầm xa)
9. bindtoggle t cl_righthand (chuyển đổi khung nhìn sang tay tay trái)
10. cl_disablefreezecam 1 (vô hiệu hóa tính năng freezecam)
11.alias "+jumpthrow" "+jump;-attack"; alias "-jumpthrow" "-jump"; bind n "+jumpthrow"

Custom map trainning:
sv_cheats 9; bind alt noclip; mp_roundtime_defuse 60; impulse 101; mp_restartgame 1;sv_grenade_trajectory 1;sv_infinite_ammo 1;mp_buy_anywhere 1;mp_buytime 9999;sv_showimpacts 1;god

bot_kick
mp_roundtime 60
mp_freezetime 0
mp_round_restart_delay 3
mp_overtime_enable 1
mp_warmup_end
mp_restartgame 1;
