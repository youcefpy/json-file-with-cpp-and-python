#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>

using json = nlohmann::json;

using namespace std;

float randomFloat()
{
    return (float)(rand()) / (float)(rand());
}

int main() {
    float a,b,c,frequence,time_count ; 
    frequence =1;
    time_count = frequence;
    vector<float> va,vb,vc,t;
    // t[0] = 0;
    // json jsonArray = json::array();
    json j ;
    int count = 0 ;
    while (count<5) {
        
        srand(time(0));
        a = randomFloat();
        b = randomFloat();
        c = randomFloat();
        va.push_back(a);
        vb.push_back(b);
        vc.push_back(c);
        t.push_back(time_count);
       
        sleep(frequence);
        time_count +=1;
        count++;
        
    }
    j["a"] = va;
    j["b"] = vb;
    j["c"] = vc;
    j["time"] = t;
    cout << j.dump(4) << std::endl;

    

    std::ofstream outFile("data.json");
    if (outFile.is_open()) {
        outFile << j.dump(4); 
        outFile.close();
        std::cout << "JSON object saved to data.json" << std::endl;
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1; 
    }


}