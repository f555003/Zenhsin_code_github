clear
close all
clc
% % ????
% date_05 = [22 23 24 25 26 27 28 29 30 31];
% month05 = [125 137; 114 181; 144 143; 130 140; 113 159; 144 168; 119 159; 180 145; 135 180; 105 130];
% date_06 = [01 02 03];
% month06 = [226 109; 109 119; 119 154;119 138];
sugar.total     =   [ 125 137; 114 181; 144 143; 130 140; 113 159; 144 168; 119 159; 180 145; 135 180; 105 130;
                      226 109; 109 119; 119 154;119 138;139 151;109 138;182 114; 128 125;];
sugar.bfe_17    =   sugar.total(:,1);
sugar.atf_20    =   sugar.total(:,2);

% date time from tstart to tend
% total time in sugar.date
tstart = datetime(2021,05,22);
tend = datetime(2021,06,7);
sugar.date = tstart:tend;

figure(1),
sugardata=bar(sugar.date,sugar.total);

sugardata(1).FaceColor = 'b';
sugardata(2).FaceColor = 'r';
lgd = legend('before(17:00)','affter(20:00)');
title(lgd,'Dinner(18:00)')
title('2021 Grandma sugar');
ylim([75 250])
% xlabel('date');
ylabel('mg/dl');
grid on

% ylim([75 250])
xtickformat('yyyy-MMM-dd')
%%
figure(2)
plot(sugar.date,sugar.bfe_17,'b-o',sugar.date,sugar.atf_20,'r-*');


lgd = legend('before','affter');
title(lgd,'Dinner(18:00)')
title('2021 Grandma sugar');
% xlabel('date');
ylabel('mg/dl');
xlim([tstart tend])
ylim([75 250])
xtickformat('yyyy-MMM-dd')
grid on
