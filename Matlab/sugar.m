year2021 = [];
% from 0522-
date_05 = [22 23 24];

t = datetime(2021,05,22) + caldays(0:length(date_05)-1);
tstart = datetime(2021,05,21);
tend = datetime(2021,05,24);


month05 = [149 0; 125 137; 114 181; 144];

figure(1),
subplot(2,1,1),
sugardata=bar(date_05,month05,0.5,'hist');
sugardata(1).FaceColor = 'b';
sugardata(2).FaceColor = 'r';
lgd = legend('before','affter');
title(lgd,'Dinner')
title('2021 May Grandma sugar');
xlabel('date');
ylabel('mg/dl');




subplot(2,1,2),

data_length = length(month05(:));


for i= 1:data_length/2
    y1(i)=month05(i);
    y2(i)=month05(data_length/2+i);
end

plot(t,y1,'b-o',t,y2,'r-*');

% hold on
% stem(t,y2);
% hold off

lgd = legend('before','affter');
title(lgd,'Dinner')
title('2021 May Grandma sugar');
xlabel('date');
ylabel('mg/dl');
xlim([tstart tend])
xtickformat('yyyy-MMM-dd')
axis tight