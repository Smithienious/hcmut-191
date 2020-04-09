%Left endpoint
xl1 = 1:0.1:1.9;
xl2 = 1:0.05:1.95;
yl1 = 0.1./xl1;
yl2 = 0.05./xl2;
disp(sum(yl1));
disp(sum(yl2));

%Right endpoint
xr1 = 2:-0.1:1.1;
xr2 = 2:-0.05:1.05;
yr1 = 0.1./xr1;
yr2 = 0.05./xr2;
disp(sum(yr1));
disp(sum(yr2));

%Midpoint
xm1 = 1:0.1:1.9;
xm2 = 1:0.05:1.95;
ym1 = 0.1./(xm1+0.1/2);
ym2 = 0.05./(xm2+0.05/2);
disp(sum(ym1));
disp(sum(ym2));