//
// Created by jonathon on 8/26/18.
//
#include <iostream>
#include <vector>
#ifndef USPSMAILREPORT_REPORT_H
#define USPSMAILREPORT_REPORT_H



class Report {
public:
    std::vector<std::string> getImages();
    int getAmountOfMail();
    int getAmountOfPackages();

};


#endif //USPSMAILREPORT_REPORT_H
