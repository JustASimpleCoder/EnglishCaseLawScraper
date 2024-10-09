
#include <iostream>
#include "cpr/cpr.h"
#include "libxml/HTMLparser.h"
#include "libxml/xpath.h"


int main(){


    // define the user agent for the GET request
    cpr::Header headers = {{"User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36"}};
    // make the HTTP request to retrieve the target page
    cpr::Response response = cpr::Get(cpr::Url{"https://www.bailii.org/ew/cases/EWHC/Costs/2024/"}, headers);

    std::cout << response.text.c_str() << std::endl;

    // scraping logic...



    return 0;
}