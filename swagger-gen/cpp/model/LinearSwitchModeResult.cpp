/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "LinearSwitchModeResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

LinearSwitchModeResult::LinearSwitchModeResult()
{
    m_Tp_sl_mode = 0.0;
    m_Tp_sl_modeIsSet = false;
}

LinearSwitchModeResult::~LinearSwitchModeResult()
{
}

void LinearSwitchModeResult::validate()
{
    // TODO: implement validation
}

web::json::value LinearSwitchModeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Tp_sl_modeIsSet)
    {
        val[utility::conversions::to_string_t("tp_sl_mode")] = ModelBase::toJson(m_Tp_sl_mode);
    }

    return val;
}

void LinearSwitchModeResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("tp_sl_mode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("tp_sl_mode")];
        if(!fieldValue.is_null())
        {
            setTpSlMode(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void LinearSwitchModeResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Tp_sl_modeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tp_sl_mode"), m_Tp_sl_mode));
    }
}

void LinearSwitchModeResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("tp_sl_mode")))
    {
        setTpSlMode(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tp_sl_mode"))));
    }
}

double LinearSwitchModeResult::getTpSlMode() const
{
    return m_Tp_sl_mode;
}


void LinearSwitchModeResult::setTpSlMode(double value)
{
    m_Tp_sl_mode = value;
    m_Tp_sl_modeIsSet = true;
}
bool LinearSwitchModeResult::tpSlModeIsSet() const
{
    return m_Tp_sl_modeIsSet;
}

void LinearSwitchModeResult::unsetTp_sl_mode()
{
    m_Tp_sl_modeIsSet = false;
}

}
}
}
}
