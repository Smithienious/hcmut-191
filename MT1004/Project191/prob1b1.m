syms x;
y=sin(7*x);
fplot(y);
xlim([2.99 3.01]);
ylim([0.797 0.872]);
hold on;
plot(3, sin(21), '*r');
text(2.9998, 0.834, 'A');
plot (2.994, sin(7*2.994), '*r');
text (2.994, 0.865, 'X: 2.994');
text (2.994, 0.862, 'Y: 0.859');
plot (3.006, sin(7*3.006), '*r');
text (3.006, 0.819, 'X: 3.006');
text (3.006, 0.816, 'Y: 0.813');
hold off;