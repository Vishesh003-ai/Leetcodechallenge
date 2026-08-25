class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickG=0;
        int travelG=0;
        int pickM=0;
        int travelM=0;
        int pickP=0;
        int travelP=0;
        for(int i=0;i<garbage.size();i++){
        string currenthouse=garbage[i];
        for(int j=0;j<currenthouse.length();j++){
            char currentgarbagetype=currenthouse[j];
            if(currentgarbagetype=='P'){
                pickP++;
                travelP=i;
            }
            if(currentgarbagetype=='M'){
                pickM++;
                travelM=i;
            }
            if(currentgarbagetype=='G'){
                pickG++;
                travelG=i;
            }
        }
        }
     int tG=0;
     int tP=0;
     int tM=0;
     for(int i=0;i<travelP;i++){
        tP+=travel[i];
     }
     for(int i=0;i<travelG;i++){
        tG+=travel[i];
     }
     for(int i=0;i<travelM;i++){
        tM+=travel[i];
     }
     int totaltime=0;
       totaltime+=(tP+tG+tM)+(pickG+pickM+pickP);
     return totaltime;
    }
};