/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model


case class LinearRecentTradingRecordResp (
  id: Option[String] = None,
  price: Option[Double] = None,
  qty: Option[Double] = None,
  side: Option[String] = None,
  symbol: Option[String] = None,
  time: Option[String] = None,
  tradeTimeMs: Option[Long] = None
)

