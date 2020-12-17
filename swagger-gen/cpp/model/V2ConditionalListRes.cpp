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



#include "V2ConditionalListRes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

V2ConditionalListRes::V2ConditionalListRes()
{
    m_User_id = 0.0;
    m_User_idIsSet = false;
    m_Stop_order_status = utility::conversions::to_string_t("");
    m_Stop_order_statusIsSet = false;
    m_Symbol = utility::conversions::to_string_t("");
    m_SymbolIsSet = false;
    m_Side = utility::conversions::to_string_t("");
    m_SideIsSet = false;
    m_Order_type = utility::conversions::to_string_t("");
    m_Order_typeIsSet = false;
    m_Price = utility::conversions::to_string_t("");
    m_PriceIsSet = false;
    m_Qty = utility::conversions::to_string_t("");
    m_QtyIsSet = false;
    m_Time_in_force = utility::conversions::to_string_t("");
    m_Time_in_forceIsSet = false;
    m_Stop_order_type = utility::conversions::to_string_t("");
    m_Stop_order_typeIsSet = false;
    m_Trigger_by = utility::conversions::to_string_t("");
    m_Trigger_byIsSet = false;
    m_Base_price = utility::conversions::to_string_t("");
    m_Base_priceIsSet = false;
    m_Order_link_id = utility::conversions::to_string_t("");
    m_Order_link_idIsSet = false;
    m_Stop_px = utility::conversions::to_string_t("");
    m_Stop_pxIsSet = false;
    m_Stop_order_id = utility::conversions::to_string_t("");
    m_Stop_order_idIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Updated_at = utility::conversions::to_string_t("");
    m_Updated_atIsSet = false;
}

V2ConditionalListRes::~V2ConditionalListRes()
{
}

void V2ConditionalListRes::validate()
{
    // TODO: implement validation
}

web::json::value V2ConditionalListRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_User_idIsSet)
    {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_Stop_order_statusIsSet)
    {
        val[utility::conversions::to_string_t("stop_order_status")] = ModelBase::toJson(m_Stop_order_status);
    }
    if(m_SymbolIsSet)
    {
        val[utility::conversions::to_string_t("symbol")] = ModelBase::toJson(m_Symbol);
    }
    if(m_SideIsSet)
    {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(m_Side);
    }
    if(m_Order_typeIsSet)
    {
        val[utility::conversions::to_string_t("order_type")] = ModelBase::toJson(m_Order_type);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    }
    if(m_QtyIsSet)
    {
        val[utility::conversions::to_string_t("qty")] = ModelBase::toJson(m_Qty);
    }
    if(m_Time_in_forceIsSet)
    {
        val[utility::conversions::to_string_t("time_in_force")] = ModelBase::toJson(m_Time_in_force);
    }
    if(m_Stop_order_typeIsSet)
    {
        val[utility::conversions::to_string_t("stop_order_type")] = ModelBase::toJson(m_Stop_order_type);
    }
    if(m_Trigger_byIsSet)
    {
        val[utility::conversions::to_string_t("trigger_by")] = ModelBase::toJson(m_Trigger_by);
    }
    if(m_Base_priceIsSet)
    {
        val[utility::conversions::to_string_t("base_price")] = ModelBase::toJson(m_Base_price);
    }
    if(m_Order_link_idIsSet)
    {
        val[utility::conversions::to_string_t("order_link_id")] = ModelBase::toJson(m_Order_link_id);
    }
    if(m_Stop_pxIsSet)
    {
        val[utility::conversions::to_string_t("stop_px")] = ModelBase::toJson(m_Stop_px);
    }
    if(m_Stop_order_idIsSet)
    {
        val[utility::conversions::to_string_t("stop_order_id")] = ModelBase::toJson(m_Stop_order_id);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(m_Updated_at);
    }

    return val;
}

void V2ConditionalListRes::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("user_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user_id")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stop_order_status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stop_order_status")];
        if(!fieldValue.is_null())
        {
            setStopOrderStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("symbol")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("symbol")];
        if(!fieldValue.is_null())
        {
            setSymbol(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("side")];
        if(!fieldValue.is_null())
        {
            setSide(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_type")];
        if(!fieldValue.is_null())
        {
            setOrderType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price")];
        if(!fieldValue.is_null())
        {
            setPrice(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qty")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("qty")];
        if(!fieldValue.is_null())
        {
            setQty(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_in_force")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("time_in_force")];
        if(!fieldValue.is_null())
        {
            setTimeInForce(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stop_order_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stop_order_type")];
        if(!fieldValue.is_null())
        {
            setStopOrderType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_by")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("trigger_by")];
        if(!fieldValue.is_null())
        {
            setTriggerBy(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("base_price")];
        if(!fieldValue.is_null())
        {
            setBasePrice(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_link_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("order_link_id")];
        if(!fieldValue.is_null())
        {
            setOrderLinkId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stop_px")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stop_px")];
        if(!fieldValue.is_null())
        {
            setStopPx(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stop_order_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stop_order_id")];
        if(!fieldValue.is_null())
        {
            setStopOrderId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created_at")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("updated_at")];
        if(!fieldValue.is_null())
        {
            setUpdatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void V2ConditionalListRes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user_id"), m_User_id));
    }
    if(m_Stop_order_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stop_order_status"), m_Stop_order_status));
        
    }
    if(m_SymbolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbol"), m_Symbol));
        
    }
    if(m_SideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("side"), m_Side));
        
    }
    if(m_Order_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_type"), m_Order_type));
        
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
        
    }
    if(m_QtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("qty"), m_Qty));
        
    }
    if(m_Time_in_forceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time_in_force"), m_Time_in_force));
        
    }
    if(m_Stop_order_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stop_order_type"), m_Stop_order_type));
        
    }
    if(m_Trigger_byIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trigger_by"), m_Trigger_by));
        
    }
    if(m_Base_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("base_price"), m_Base_price));
        
    }
    if(m_Order_link_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order_link_id"), m_Order_link_id));
        
    }
    if(m_Stop_pxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stop_px"), m_Stop_px));
        
    }
    if(m_Stop_order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stop_order_id"), m_Stop_order_id));
        
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated_at"), m_Updated_at));
        
    }
}

void V2ConditionalListRes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("user_id")))
    {
        setUserId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stop_order_status")))
    {
        setStopOrderStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stop_order_status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbol")))
    {
        setSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbol"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("side")))
    {
        setSide(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("side"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_type")))
    {
        setOrderType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price")))
    {
        setPrice(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("qty")))
    {
        setQty(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("qty"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("time_in_force")))
    {
        setTimeInForce(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("time_in_force"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stop_order_type")))
    {
        setStopOrderType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stop_order_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trigger_by")))
    {
        setTriggerBy(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("trigger_by"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("base_price")))
    {
        setBasePrice(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("base_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order_link_id")))
    {
        setOrderLinkId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("order_link_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stop_px")))
    {
        setStopPx(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stop_px"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stop_order_id")))
    {
        setStopOrderId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stop_order_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
}

double V2ConditionalListRes::getUserId() const
{
    return m_User_id;
}


void V2ConditionalListRes::setUserId(double value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool V2ConditionalListRes::userIdIsSet() const
{
    return m_User_idIsSet;
}

void V2ConditionalListRes::unsetUser_id()
{
    m_User_idIsSet = false;
}

utility::string_t V2ConditionalListRes::getStopOrderStatus() const
{
    return m_Stop_order_status;
}


void V2ConditionalListRes::setStopOrderStatus(utility::string_t value)
{
    m_Stop_order_status = value;
    m_Stop_order_statusIsSet = true;
}
bool V2ConditionalListRes::stopOrderStatusIsSet() const
{
    return m_Stop_order_statusIsSet;
}

void V2ConditionalListRes::unsetStop_order_status()
{
    m_Stop_order_statusIsSet = false;
}

utility::string_t V2ConditionalListRes::getSymbol() const
{
    return m_Symbol;
}


void V2ConditionalListRes::setSymbol(utility::string_t value)
{
    m_Symbol = value;
    m_SymbolIsSet = true;
}
bool V2ConditionalListRes::symbolIsSet() const
{
    return m_SymbolIsSet;
}

void V2ConditionalListRes::unsetSymbol()
{
    m_SymbolIsSet = false;
}

utility::string_t V2ConditionalListRes::getSide() const
{
    return m_Side;
}


void V2ConditionalListRes::setSide(utility::string_t value)
{
    m_Side = value;
    m_SideIsSet = true;
}
bool V2ConditionalListRes::sideIsSet() const
{
    return m_SideIsSet;
}

void V2ConditionalListRes::unsetSide()
{
    m_SideIsSet = false;
}

utility::string_t V2ConditionalListRes::getOrderType() const
{
    return m_Order_type;
}


void V2ConditionalListRes::setOrderType(utility::string_t value)
{
    m_Order_type = value;
    m_Order_typeIsSet = true;
}
bool V2ConditionalListRes::orderTypeIsSet() const
{
    return m_Order_typeIsSet;
}

void V2ConditionalListRes::unsetOrder_type()
{
    m_Order_typeIsSet = false;
}

utility::string_t V2ConditionalListRes::getPrice() const
{
    return m_Price;
}


void V2ConditionalListRes::setPrice(utility::string_t value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool V2ConditionalListRes::priceIsSet() const
{
    return m_PriceIsSet;
}

void V2ConditionalListRes::unsetPrice()
{
    m_PriceIsSet = false;
}

utility::string_t V2ConditionalListRes::getQty() const
{
    return m_Qty;
}


void V2ConditionalListRes::setQty(utility::string_t value)
{
    m_Qty = value;
    m_QtyIsSet = true;
}
bool V2ConditionalListRes::qtyIsSet() const
{
    return m_QtyIsSet;
}

void V2ConditionalListRes::unsetQty()
{
    m_QtyIsSet = false;
}

utility::string_t V2ConditionalListRes::getTimeInForce() const
{
    return m_Time_in_force;
}


void V2ConditionalListRes::setTimeInForce(utility::string_t value)
{
    m_Time_in_force = value;
    m_Time_in_forceIsSet = true;
}
bool V2ConditionalListRes::timeInForceIsSet() const
{
    return m_Time_in_forceIsSet;
}

void V2ConditionalListRes::unsetTime_in_force()
{
    m_Time_in_forceIsSet = false;
}

utility::string_t V2ConditionalListRes::getStopOrderType() const
{
    return m_Stop_order_type;
}


void V2ConditionalListRes::setStopOrderType(utility::string_t value)
{
    m_Stop_order_type = value;
    m_Stop_order_typeIsSet = true;
}
bool V2ConditionalListRes::stopOrderTypeIsSet() const
{
    return m_Stop_order_typeIsSet;
}

void V2ConditionalListRes::unsetStop_order_type()
{
    m_Stop_order_typeIsSet = false;
}

utility::string_t V2ConditionalListRes::getTriggerBy() const
{
    return m_Trigger_by;
}


void V2ConditionalListRes::setTriggerBy(utility::string_t value)
{
    m_Trigger_by = value;
    m_Trigger_byIsSet = true;
}
bool V2ConditionalListRes::triggerByIsSet() const
{
    return m_Trigger_byIsSet;
}

void V2ConditionalListRes::unsetTrigger_by()
{
    m_Trigger_byIsSet = false;
}

utility::string_t V2ConditionalListRes::getBasePrice() const
{
    return m_Base_price;
}


void V2ConditionalListRes::setBasePrice(utility::string_t value)
{
    m_Base_price = value;
    m_Base_priceIsSet = true;
}
bool V2ConditionalListRes::basePriceIsSet() const
{
    return m_Base_priceIsSet;
}

void V2ConditionalListRes::unsetBase_price()
{
    m_Base_priceIsSet = false;
}

utility::string_t V2ConditionalListRes::getOrderLinkId() const
{
    return m_Order_link_id;
}


void V2ConditionalListRes::setOrderLinkId(utility::string_t value)
{
    m_Order_link_id = value;
    m_Order_link_idIsSet = true;
}
bool V2ConditionalListRes::orderLinkIdIsSet() const
{
    return m_Order_link_idIsSet;
}

void V2ConditionalListRes::unsetOrder_link_id()
{
    m_Order_link_idIsSet = false;
}

utility::string_t V2ConditionalListRes::getStopPx() const
{
    return m_Stop_px;
}


void V2ConditionalListRes::setStopPx(utility::string_t value)
{
    m_Stop_px = value;
    m_Stop_pxIsSet = true;
}
bool V2ConditionalListRes::stopPxIsSet() const
{
    return m_Stop_pxIsSet;
}

void V2ConditionalListRes::unsetStop_px()
{
    m_Stop_pxIsSet = false;
}

utility::string_t V2ConditionalListRes::getStopOrderId() const
{
    return m_Stop_order_id;
}


void V2ConditionalListRes::setStopOrderId(utility::string_t value)
{
    m_Stop_order_id = value;
    m_Stop_order_idIsSet = true;
}
bool V2ConditionalListRes::stopOrderIdIsSet() const
{
    return m_Stop_order_idIsSet;
}

void V2ConditionalListRes::unsetStop_order_id()
{
    m_Stop_order_idIsSet = false;
}

utility::string_t V2ConditionalListRes::getCreatedAt() const
{
    return m_Created_at;
}


void V2ConditionalListRes::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool V2ConditionalListRes::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void V2ConditionalListRes::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t V2ConditionalListRes::getUpdatedAt() const
{
    return m_Updated_at;
}


void V2ConditionalListRes::setUpdatedAt(utility::string_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool V2ConditionalListRes::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void V2ConditionalListRes::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

}
}
}
}
