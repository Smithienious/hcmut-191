f = @(y) 0.1*y*(1- y/25000);
x0 = 0;
y0 = 2000;
xn = 200;
h = 0.1;

hold on;
while x0 <= xn
    y1 = y0 + h * f(y0);
    x1 = x0 + h;
    x0 = x1;
    y0 = y1;
    fprintf('\n%4.3f %4.3f', x0, y0);
    plot(x0, y0, '.r');
end

x0 = 0;
y0 = 40000;
xn = 200;
while x0 <= xn
    y1 = y0 + h * f(y0);
    x1 = x0 + h;
    x0 = x1;
    y0 = y1;
    fprintf('\n%4.3f %4.3f', x0, y0);
    plot(x0, y0, '.c');
end
hold off;