set term postscript enhanced color 'Helvetica-Bold,16'
set output 'halfWave.ps'
unset border
set dummy t, y
set raxis
set polar
set samples 160, 160
set style data lines
set xzeroaxis
set yzeroaxis
set zzeroaxis
set xtics axis in scale 1,0.5 nomirror norotate  autojustify
set ytics axis in scale 1,0.5 nomirror norotate  autojustify
unset rtics
set trange [ 0.00000 : 6.28319 ] noreverse nowriteback


kd=pi

Z0=1.0
I0=1.0
f1(t)=(cos(0.5*kd*cos(t))-cos(0.5*kd))/sin(t)
f2(t)=f1(t)*f1(t)
plot f2(t) w l lt 1 lw 2 noti
set output
! ps2pdf halfWave.ps halfWave.pdf
! rm halfWave.ps

