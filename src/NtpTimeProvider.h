#pragma once
#include "OpenKNX.h"
#include "knxprod.h"

#ifdef NET_ServiceNTP_1
class NtpTimeProvider : public OpenKNX::Time::TimeProvider
{
        static NtpTimeProvider* currentInstance;
    protected:
        const std::string logPrefix() override;
        void setup() override;
        void logInformation() override;
        ~NtpTimeProvider() override;
};
#endif