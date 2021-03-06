// dronecan_packets.c was generated by ProtoGen version 2.19.a

/**

Copyright (c) 2020 DroneCAN

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

**/

#include "dronecan_packets.h"

/*!
 * \brief Lookup label for 'DroneCAN_System_Packets' enum entry
 * 
 * \param value is the integer value of the enum entry
 * \return string label of the given entry
 */
const char* DroneCAN_System_Packets_EnumLabel(int value)
{
    switch (value)
    {
    default:
        return "";
    case PKT_DC_PARAM_REQUEST:
        return "PKT_DC_PARAM_REQUEST";
    case PKT_DC_PARAM_INFO:
        return "PKT_DC_PARAM_INFO";
    case PKT_DC_PARAM_VALUE:
        return "PKT_DC_PARAM_VALUE";
    case PKT_DC_SYS_STATUS:
        return "PKT_DC_SYS_STATUS";
    case PKT_DC_SYS_UID:
        return "PKT_DC_SYS_UID";
    case PKT_DC_SYS_MANF_STRING:
        return "PKT_DC_SYS_MANF_STRING";
    case PKT_DC_SYS_USER_STRING:
        return "PKT_DC_SYS_USER_STRING";
    case PKT_DC_SYS_FW_VERSION:
        return "PKT_DC_SYS_FW_VERSION";
    case PKT_DC_SYS_FW_DATE:
        return "PKT_DC_SYS_FW_DATE";
    case PKT_DC_SYS_FW_SETTINGS:
        return "PKT_DC_SYS_FW_SETTINGS";
    case PKT_DC_SYS_HW_INFO:
        return "PKT_DC_SYS_HW_INFO";
    }
}

/*!
 * \brief Lookup title for 'DroneCAN_System_Packets' enum entry
 * 
 * \param value is the integer value of the enum entry
 * \return string title of the given entry (label name if no title given)
 */
const char* DroneCAN_System_Packets_EnumTitle(int value)
{
    switch (value)
    {
    default:
        return "";
    case PKT_DC_PARAM_REQUEST:
        return "Request device parameter";
    case PKT_DC_PARAM_INFO:
        return "Parameter description";
    case PKT_DC_PARAM_VALUE:
        return "Parameter value";
    case PKT_DC_SYS_STATUS:
        return "Device status information";
    case PKT_DC_SYS_UID:
        return "Unique Identifer for DroneCAN node";
    case PKT_DC_SYS_MANF_STRING:
        return "Manufacturer device identifier string";
    case PKT_DC_SYS_USER_STRING:
        return "User device identifier string";
    case PKT_DC_SYS_FW_VERSION:
        return "Firmware version information";
    case PKT_DC_SYS_FW_DATE:
        return "Firmware date information";
    case PKT_DC_SYS_FW_SETTINGS:
        return "User-configurable settings information";
    case PKT_DC_SYS_HW_INFO:
        return "Hardware information";
    }
}

// end of dronecan_packets.c
