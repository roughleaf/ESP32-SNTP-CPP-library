#include "wifi.h"
#include "sntp.h"

class Main final
{
private:
public:
    void run(void);
    void setup(void);

    WIFI::Wifi::state_e wifiState { WIFI::Wifi::state_e::NOT_INITIALIZED };
    WIFI::Wifi Wifi;
    SNTP::Sntp Sntp;
};