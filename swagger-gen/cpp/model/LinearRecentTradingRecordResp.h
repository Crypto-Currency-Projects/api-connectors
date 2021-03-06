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

/*
 * LinearRecentTradingRecordResp.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LinearRecentTradingRecordResp_H_
#define IO_SWAGGER_CLIENT_MODEL_LinearRecentTradingRecordResp_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LinearRecentTradingRecordResp
    : public ModelBase
{
public:
    LinearRecentTradingRecordResp();
    virtual ~LinearRecentTradingRecordResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LinearRecentTradingRecordResp members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getQty() const;
    bool qtyIsSet() const;
    void unsetQty();
    void setQty(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTime() const;
    bool timeIsSet() const;
    void unsetTime();
    void setTime(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getTradeTimeMs() const;
    bool tradeTimeMsIsSet() const;
    void unsetTrade_time_ms();
    void setTradeTimeMs(int64_t value);

protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    double m_Price;
    bool m_PriceIsSet;
    double m_Qty;
    bool m_QtyIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Time;
    bool m_TimeIsSet;
    int64_t m_Trade_time_ms;
    bool m_Trade_time_msIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LinearRecentTradingRecordResp_H_ */
