%Left endpoint
xl1 = 0:0.2:1.8;
xl2 = 0:0.1:1.9;
yl1 = 0.2*exp(-xl1.*xl1);
yl2 = 0.1*exp(-xl2.*xl2);
disp(sum(yl1));
disp(sum(yl2));

%Right endpoint
xr1 = 2:-0.2:0.2;
xr2 = 2:-0.1:0.1;
yr1 = 0.2*exp(-xr1.*xr1);
yr2 = 0.1*exp(-xr2.*xr2);
disp(sum(yr1));
disp(sum(yr2));

%Midpoint
xm1 = 0:0.2:1.8;
xm2 = 0:0.1:1.9;
ym1 = 0.2*exp(-(xm1+0.1).^2);
ym2 = 0.1*exp(-(xm2+0.05).^2);
disp(sum(ym1));
disp(sum(ym2));