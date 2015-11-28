/*
  ESP8266WifiList.h - Library for show a great layout to witi list.
  Created by Douglas R Camargo, November 27, 2015.
  Released into the public domain.
*/

#ifndef ESP8266WifiList_h
#define ESP8266WifiList_h

#include "arduino.h"

class ESP8266WifiList
{
  public:
    ESP8266WifiList();
    String resetCss();
    String baseCss();
    String tableCss();
    String modalCss();
    String buttonCss();
    String inputCss();
    String baseJs();
    String modalJs();
    String pageRootHtml();
  private:
};

#endif

