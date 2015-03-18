%Simple file to plot data drom 2 files in octave (2dim plot) 

%addpath(genpath("/home/gomez/workspace/Plot1")); %or replace with needed
%savepath;
%path %this is a test


datax=load("x");
datay=load("y");

myPlot=plot(datax, datay);

% figure; %To create a new window 
% hold on; %To not overwrite the existing plot

pause();
