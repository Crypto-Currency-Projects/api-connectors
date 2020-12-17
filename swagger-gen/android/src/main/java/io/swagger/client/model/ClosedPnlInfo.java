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

package io.swagger.client.model;

import java.math.BigDecimal;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Get the closed-pnl/list response
 **/
@ApiModel(description = "Get the closed-pnl/list response")
public class ClosedPnlInfo {
  
  @SerializedName("id")
  private Integer id = null;
  @SerializedName("user_id")
  private Integer userId = null;
  @SerializedName("symbol")
  private String symbol = null;
  @SerializedName("order_id")
  private String orderId = null;
  @SerializedName("side")
  private String side = null;
  @SerializedName("qty")
  private Integer qty = null;
  @SerializedName("order_price")
  private Integer orderPrice = null;
  @SerializedName("order_type")
  private String orderType = null;
  @SerializedName("exec_type")
  private String execType = null;
  @SerializedName("closed_size")
  private Integer closedSize = null;
  @SerializedName("cum_entry_value")
  private BigDecimal cumEntryValue = null;
  @SerializedName("avg_entry_price")
  private Integer avgEntryPrice = null;
  @SerializedName("cum_exit_value")
  private BigDecimal cumExitValue = null;
  @SerializedName("avg_exit_price")
  private Integer avgExitPrice = null;
  @SerializedName("closed_pnl")
  private BigDecimal closedPnl = null;
  @SerializedName("fill_count")
  private Integer fillCount = null;
  @SerializedName("leverage")
  private Integer leverage = null;
  @SerializedName("created_at")
  private Integer createdAt = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getUserId() {
    return userId;
  }
  public void setUserId(Integer userId) {
    this.userId = userId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getSymbol() {
    return symbol;
  }
  public void setSymbol(String symbol) {
    this.symbol = symbol;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOrderId() {
    return orderId;
  }
  public void setOrderId(String orderId) {
    this.orderId = orderId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getSide() {
    return side;
  }
  public void setSide(String side) {
    this.side = side;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getQty() {
    return qty;
  }
  public void setQty(Integer qty) {
    this.qty = qty;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getOrderPrice() {
    return orderPrice;
  }
  public void setOrderPrice(Integer orderPrice) {
    this.orderPrice = orderPrice;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOrderType() {
    return orderType;
  }
  public void setOrderType(String orderType) {
    this.orderType = orderType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getExecType() {
    return execType;
  }
  public void setExecType(String execType) {
    this.execType = execType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getClosedSize() {
    return closedSize;
  }
  public void setClosedSize(Integer closedSize) {
    this.closedSize = closedSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getCumEntryValue() {
    return cumEntryValue;
  }
  public void setCumEntryValue(BigDecimal cumEntryValue) {
    this.cumEntryValue = cumEntryValue;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getAvgEntryPrice() {
    return avgEntryPrice;
  }
  public void setAvgEntryPrice(Integer avgEntryPrice) {
    this.avgEntryPrice = avgEntryPrice;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getCumExitValue() {
    return cumExitValue;
  }
  public void setCumExitValue(BigDecimal cumExitValue) {
    this.cumExitValue = cumExitValue;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getAvgExitPrice() {
    return avgExitPrice;
  }
  public void setAvgExitPrice(Integer avgExitPrice) {
    this.avgExitPrice = avgExitPrice;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getClosedPnl() {
    return closedPnl;
  }
  public void setClosedPnl(BigDecimal closedPnl) {
    this.closedPnl = closedPnl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getFillCount() {
    return fillCount;
  }
  public void setFillCount(Integer fillCount) {
    this.fillCount = fillCount;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLeverage() {
    return leverage;
  }
  public void setLeverage(Integer leverage) {
    this.leverage = leverage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(Integer createdAt) {
    this.createdAt = createdAt;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ClosedPnlInfo closedPnlInfo = (ClosedPnlInfo) o;
    return (this.id == null ? closedPnlInfo.id == null : this.id.equals(closedPnlInfo.id)) &&
        (this.userId == null ? closedPnlInfo.userId == null : this.userId.equals(closedPnlInfo.userId)) &&
        (this.symbol == null ? closedPnlInfo.symbol == null : this.symbol.equals(closedPnlInfo.symbol)) &&
        (this.orderId == null ? closedPnlInfo.orderId == null : this.orderId.equals(closedPnlInfo.orderId)) &&
        (this.side == null ? closedPnlInfo.side == null : this.side.equals(closedPnlInfo.side)) &&
        (this.qty == null ? closedPnlInfo.qty == null : this.qty.equals(closedPnlInfo.qty)) &&
        (this.orderPrice == null ? closedPnlInfo.orderPrice == null : this.orderPrice.equals(closedPnlInfo.orderPrice)) &&
        (this.orderType == null ? closedPnlInfo.orderType == null : this.orderType.equals(closedPnlInfo.orderType)) &&
        (this.execType == null ? closedPnlInfo.execType == null : this.execType.equals(closedPnlInfo.execType)) &&
        (this.closedSize == null ? closedPnlInfo.closedSize == null : this.closedSize.equals(closedPnlInfo.closedSize)) &&
        (this.cumEntryValue == null ? closedPnlInfo.cumEntryValue == null : this.cumEntryValue.equals(closedPnlInfo.cumEntryValue)) &&
        (this.avgEntryPrice == null ? closedPnlInfo.avgEntryPrice == null : this.avgEntryPrice.equals(closedPnlInfo.avgEntryPrice)) &&
        (this.cumExitValue == null ? closedPnlInfo.cumExitValue == null : this.cumExitValue.equals(closedPnlInfo.cumExitValue)) &&
        (this.avgExitPrice == null ? closedPnlInfo.avgExitPrice == null : this.avgExitPrice.equals(closedPnlInfo.avgExitPrice)) &&
        (this.closedPnl == null ? closedPnlInfo.closedPnl == null : this.closedPnl.equals(closedPnlInfo.closedPnl)) &&
        (this.fillCount == null ? closedPnlInfo.fillCount == null : this.fillCount.equals(closedPnlInfo.fillCount)) &&
        (this.leverage == null ? closedPnlInfo.leverage == null : this.leverage.equals(closedPnlInfo.leverage)) &&
        (this.createdAt == null ? closedPnlInfo.createdAt == null : this.createdAt.equals(closedPnlInfo.createdAt));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.userId == null ? 0: this.userId.hashCode());
    result = 31 * result + (this.symbol == null ? 0: this.symbol.hashCode());
    result = 31 * result + (this.orderId == null ? 0: this.orderId.hashCode());
    result = 31 * result + (this.side == null ? 0: this.side.hashCode());
    result = 31 * result + (this.qty == null ? 0: this.qty.hashCode());
    result = 31 * result + (this.orderPrice == null ? 0: this.orderPrice.hashCode());
    result = 31 * result + (this.orderType == null ? 0: this.orderType.hashCode());
    result = 31 * result + (this.execType == null ? 0: this.execType.hashCode());
    result = 31 * result + (this.closedSize == null ? 0: this.closedSize.hashCode());
    result = 31 * result + (this.cumEntryValue == null ? 0: this.cumEntryValue.hashCode());
    result = 31 * result + (this.avgEntryPrice == null ? 0: this.avgEntryPrice.hashCode());
    result = 31 * result + (this.cumExitValue == null ? 0: this.cumExitValue.hashCode());
    result = 31 * result + (this.avgExitPrice == null ? 0: this.avgExitPrice.hashCode());
    result = 31 * result + (this.closedPnl == null ? 0: this.closedPnl.hashCode());
    result = 31 * result + (this.fillCount == null ? 0: this.fillCount.hashCode());
    result = 31 * result + (this.leverage == null ? 0: this.leverage.hashCode());
    result = 31 * result + (this.createdAt == null ? 0: this.createdAt.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ClosedPnlInfo {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  userId: ").append(userId).append("\n");
    sb.append("  symbol: ").append(symbol).append("\n");
    sb.append("  orderId: ").append(orderId).append("\n");
    sb.append("  side: ").append(side).append("\n");
    sb.append("  qty: ").append(qty).append("\n");
    sb.append("  orderPrice: ").append(orderPrice).append("\n");
    sb.append("  orderType: ").append(orderType).append("\n");
    sb.append("  execType: ").append(execType).append("\n");
    sb.append("  closedSize: ").append(closedSize).append("\n");
    sb.append("  cumEntryValue: ").append(cumEntryValue).append("\n");
    sb.append("  avgEntryPrice: ").append(avgEntryPrice).append("\n");
    sb.append("  cumExitValue: ").append(cumExitValue).append("\n");
    sb.append("  avgExitPrice: ").append(avgExitPrice).append("\n");
    sb.append("  closedPnl: ").append(closedPnl).append("\n");
    sb.append("  fillCount: ").append(fillCount).append("\n");
    sb.append("  leverage: ").append(leverage).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}