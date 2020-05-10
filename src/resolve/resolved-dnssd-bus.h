#pragma once

#include "sd-bus.h"

#include "bus-util.h"

extern const BusObjectImplementation* const dnssd_object;

int bus_dnssd_method_unregister(sd_bus_message *message, void *userdata, sd_bus_error *error);
