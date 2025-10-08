//该文件定义了TapTradeAPI 使用的数据类型和数据结构
#ifndef ITAP_TRADE_API_DATA_TYPE_H
#define ITAP_TRADE_API_DATA_TYPE_H
#include "iTapAPICommDef.h"


namespace ITapTrade
{
#pragma pack(push, 1)


    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIACCOUNTTYPE	账号类型
     *	@{
     */
    //=============================================================================
    //! 账号类型
    typedef TAPICHAR			TAPIAccountType;
    //! 个人客户
    const TAPIAccountType		TAPI_ACCOUNT_TYPE_PERSON				= 'P';
    //! 机构客户
    const TAPIAccountType		TAPI_ACCOUNT_TYPE_ORGANIZATION		    = 'O';
    //! 代理人
    const TAPIAccountType		TAPI_ACCOUNT_TYPE_AGENT					= 'A';
    //!Margin
    const TAPIAccountType		TAPI_ACCOUNT_TYPE_MARGIN				= 'M';
    //! Internal
    const TAPIAccountType		TAPI_ACCOUNT_TYPE_HOUSE					= 'H';
    //! 股票账户
    const TAPIAccountType		TAPI_ACCOUNT_TYPE_STOCK					= 'S';
    /** @}*/

    //=============================================================================
    /**
    *	\addtogroup G_DATATYPE_T_TAPIRIGHTIDTYPE	权限编码类型
    *	@{
    */
    //=============================================================================
    //! 权限编码类型
    typedef TAPIINT32			TAPIRightIDType;
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIUSERTYPETYPE	登录用户身份类型
     *	@{
     */
    //=============================================================================
    //! 登录用户身份类型
    typedef TAPIINT32			TAPIUserTypeType;
    //! 投资者用户
    const TAPIUserTypeType		TAPI_USERTYPE_CLIENT					=10000;
    //! 经纪人
    const TAPIUserTypeType		TAPI_USERTYPE_BROKER					=20000;
    //! 交易员
    const TAPIUserTypeType		TAPI_USERTYPE_TRADER					=30000;
    //! 风控
    const TAPIUserTypeType		TAPI_USERTYPE_RISK						=40000;
    //! 管理员
    const TAPIUserTypeType		TAPI_USERTYPE_MANAGER					=50000;
    //! 行情
    const TAPIUserTypeType		TAPI_USERTYPE_QUOTE						=60000;
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIACCOUNTSTATE	账号状态
     *	@{
     */
    //=============================================================================
    //! 账号状态
    typedef TAPICHAR			TAPIAccountState;
    //! 正常
    const TAPIAccountState		TAPI_ACCOUNT_STATE_NORMAL				= 'N';
    //! 销户
    const TAPIAccountState		TAPI_ACCOUNT_STATE_CANCEL				= 'C';
    //! 休眠
    const TAPIAccountState		TAPI_ACCOUNT_STATE_SLEEP				= 'S';
	//！冻结
	const TAPIAccountState		TAPI_ACCOUNT_STATE_FROZEN				= 'F';
    /** @}*/



    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIACCOUNTRIGHTTYPE	账户交易状态
     *	@{
     */
    //=============================================================================
    //! 客户交易状态类型
    typedef TAPICHAR			TAPIAccountRightType;
    //! 正常交易
    const	TAPIAccountRightType	TAPI_ACCOUNT_TRADING_RIGHT_NORMAL	= '0';
    //! 禁止交易	
    const	TAPIAccountRightType	TAPI_ACCOUNT_TRADING_RIGHT_NOTRADE	= '1';
    //! 只可平仓
    const	TAPIAccountRightType	TAPI_ACCOUNT_TRADING_RIGHT_CLOSE	= '2';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIORDERTYPETYPE	委托类型
     *	@{
     */
    //=============================================================================
    //! 委托类型
    typedef TAPICHAR				TAPIOrderTypeType;
    //! 市价
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_MARKET				= '1';
    //! 限价
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_LIMIT				= '2';
    //! 市价止损
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_STOP_MARKET			= '3';
    //! 限价止损
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_STOP_LIMIT			= '4';
    //! 期权行权
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_OPT_EXEC			= '5';
    //! 期权弃权
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_OPT_ABANDON			= '6';
    //! 询价
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_REQQUOT				= '7';
    //! 应价
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_RSPQUOT				= '8';
    //! 冰山单
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_ICEBERG				= '9';
	//! 影子单
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_GHOST				= 'A';
	//! 港交所竞价单
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_HKEX_AUCTION		= 'B';
	//! 互换
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_SWAP				= 'C';
	//! 证券锁定
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_LOCK				= 'D';
	//! 证券解锁
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_UNLOCK				= 'E';
	//! 增强限价单
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_ENHANCE				= 'F';
	//! 特别限价单
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_SPECIAL				= 'G';
	//! 竞价限价单
	const TAPIOrderTypeType			TAPI_ORDER_TYPE_LIMITAUCTION		= 'H';
    //期权自对冲
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_OPT_PRE_AUTOCLOSE   = 'I';
    //履约期货自对冲
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_OPT_FUTURE_AUTOCLOSE    = 'J';
    //期权行权后期货自对冲
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_OPT_EXEC_FUT_AUTOCLOSE  = 'K';
    //期权行权后期货不对冲
    const TAPIOrderTypeType			TAPI_ORDER_TYPE_OPT_EXEC_FUT_NOCLOSE    = 'L';

    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIORDERSOURCETYPE	委托来源
     *	@{
     */
    //=============================================================================
    //! 委托来源
    typedef TAPICHAR				TAPIOrderSourceType;
    //! 自助电子单
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_SELF_ETRADER			= '1';
    //! 代理电子单
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_PROXY_ETRADER			= '2';
    //! 外部电子单(外部电子系统下单，本系统录入)
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_JTRADER				= '3';
    //! 人工录入单(外部其他方式下单，本系统录入)
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_MANUAL				= '4';
    //! carry单
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_CARRY					= '5';
    //! 程式化报单
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_PROGRAM				= '6';
    //! 交割行权
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_DELIVERY				= '7';
    //! 期权放弃
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_ABANDON				= '8';
    //! 通道费
    const TAPIOrderSourceType		TAPI_ORDER_SOURCE_CHANNEL				= '9';
	//! 临时成交
	const TAPIOrderSourceType		TAPI_ORDER_SOURCE_TEMPORARY				= 'J';
	//! 程序化手工单
	const TAPIOrderSourceType		TAPI_ORDER_SOURCE_PROGRAMMANUAL			= 'K';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPITIMEINFORCETYPE	委托有效类型
     *	@{
     */
    //=============================================================================
    //! 委托有效类型
    typedef TAPICHAR				TAPITimeInForceType;
    //! 当日有效
    const TAPITimeInForceType		TAPI_ORDER_TIMEINFORCE_GFD					= '0';
    //! 取消前有效
    const TAPITimeInForceType		TAPI_ORDER_TIMEINFORCE_GTC					= '1';
    //! 指定日期前有效
    const TAPITimeInForceType		TAPI_ORDER_TIMEINFORCE_GTD					= '2';
    //! FAK或IOC
    const TAPITimeInForceType		TAPI_ORDER_TIMEINFORCE_FAK					= '3';
    //! FOK
    const TAPITimeInForceType		TAPI_ORDER_TIMEINFORCE_FOK					= '4';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPISIDETYPE	买卖类型
     *	@{
     */
    //=============================================================================
    //! 买卖类型
    typedef TAPICHAR				TAPISideType;
    //! 无
    const TAPISideType				TAPI_SIDE_NONE							= 'N';
    //! 买入
    const TAPISideType				TAPI_SIDE_BUY							= 'B';
    //! 卖出
    const TAPISideType				TAPI_SIDE_SELL							= 'S';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIPOSITIONEFFECTTYPE	开平类型
     *	@{
     */
    //=============================================================================
    //! 开平类型
    typedef TAPICHAR				TAPIPositionEffectType;
    //! 不分开平
    const TAPIPositionEffectType	TAPI_PositionEffect_NONE				= 'N';
    //! 开仓
    const TAPIPositionEffectType	TAPI_PositionEffect_OPEN				= 'O';
    //! 平仓
    const TAPIPositionEffectType	TAPI_PositionEffect_COVER			= 'C';
    //! 平当日
    const TAPIPositionEffectType	TAPI_PositionEffect_COVER_TODAY		= 'T';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIHEDGEFLAGTYPE	投机保值类型
     *	@{
     */
    //=============================================================================
    //! 投机保值类型
    typedef TAPICHAR				TAPIHedgeFlagType;
    //! 无
    const TAPIHedgeFlagType			TAPI_HEDGEFLAG_NONE					= 'N';
    //! 投机
    const TAPIHedgeFlagType			TAPI_HEDGEFLAG_T					= 'T';
    //! 保值
    const TAPIHedgeFlagType			TAPI_HEDGEFLAG_B					= 'B';
	//! 备兑
	const TAPIHedgeFlagType			TAPI_HEDGEFLAG_R					= 'R';


    /** @}*/
    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIORDERSTATETYPE	委托状态类型
     *	@{
     */
    //=============================================================================
    //! 委托状态类型
	//！未结束的委托类型：01234578D
    typedef TAPICHAR				TAPIOrderStateType;
    //! 终端提交
    const TAPIOrderStateType		TAPI_ORDER_STATE_SUBMIT				= '0';
    //! 已受理
    const TAPIOrderStateType		TAPI_ORDER_STATE_ACCEPT				= '1';
    //! 策略待触发
    const TAPIOrderStateType		TAPI_ORDER_STATE_TRIGGERING			= '2';
    //! 交易所待触发
    const TAPIOrderStateType		TAPI_ORDER_STATE_EXCTRIGGERING		= '3';
    //! 已排队
    const TAPIOrderStateType		TAPI_ORDER_STATE_QUEUED				= '4';
    //! 部分成交
    const TAPIOrderStateType		TAPI_ORDER_STATE_PARTFINISHED		= '5';
    //! 完全成交
    const TAPIOrderStateType		TAPI_ORDER_STATE_FINISHED			= '6';
    //! 待撤消(排队临时状态)
    const TAPIOrderStateType		TAPI_ORDER_STATE_CANCELING			= '7';
    //! 待修改(排队临时状态)
    const TAPIOrderStateType		TAPI_ORDER_STATE_MODIFYING			= '8';
    //! 完全撤单
    const TAPIOrderStateType		TAPI_ORDER_STATE_CANCELED			= '9';
    //! 已撤余单
    const TAPIOrderStateType		TAPI_ORDER_STATE_LEFTDELETED		= 'A';
    //! 指令失败
    const TAPIOrderStateType		TAPI_ORDER_STATE_FAIL				= 'B';
    //! 策略删除
    const TAPIOrderStateType		TAPI_ORDER_STATE_DELETED			= 'C';
    //! 已挂起
    const TAPIOrderStateType		TAPI_ORDER_STATE_SUPPENDED			= 'D';
    //! 到期删除
    const TAPIOrderStateType		TAPI_ORDER_STATE_DELETEDFOREXPIRE	= 'E';
    //! 已生效——询价成功
    const TAPIOrderStateType		TAPI_ORDER_STATE_EFFECT				= 'F';
    //! 已申请——行权、弃权、套利等申请成功
    const TAPIOrderStateType		TAPI_ORDER_STATE_APPLY				= 'G';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPICALCULATEMODETYPE	计算方式
     *	@{
     */
    //=============================================================================
    //! 计算方式
    typedef TAPICHAR               TAPICalculateModeType;
    
	//!比例+定额（仅限手续费）大于0.01部分为定额，小于0.01部分为比例，如：0.001为比例收取0.1%。
	const TAPICalculateModeType		TAPI_CALULATE_MODE_COMBINE				= '0';
	//! 比例
    const TAPICalculateModeType		TAPI_CALCULATE_MODE_PERCENTAGE          = '1';
    //! 定额
    const TAPICalculateModeType		TAPI_CALCULATE_MODE_QUOTA               = '2';
    //! 差值比例	
    const TAPICalculateModeType		TAPI_CALCULATE_MODE_CHAPERCENTAGE		= '3';
    //! 差值定额
    const TAPICalculateModeType		TAPI_CALCULATE_MODE_CHAQUOTA			= '4';
    //! 折扣
    const TAPICalculateModeType		TAPI_CALCULATE_MODE_DISCOUNT			= '5';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIMATCHSOURCETYPE	成交来源
     *	@{
     */
    //=============================================================================
    //! 成交来源
    typedef TAPICHAR				TAPIMatchSourceType;
    //! 全部
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_ALL                   = '0';
    //! 自助电子单
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_SELF_ETRADER          = '1';
    //! 代理电子单
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_PROXY_ETRADER         = '2';
    //! 外部电子单
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_JTRADER				= '3';
    //! 人工录入单
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_MANUAL				= '4';
    //! carry单
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_CARRY					= '5';
    //! 程式化单
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_PROGRAM				= '6';
    //! 交割行权
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_DELIVERY				= '7';
    //! 期权放弃
    const TAPIMatchSourceType		TAPI_MATCH_SOURCE_ABANDON				= '8';
	//! 通道费
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_CHANNEL				= '9';
	//!Bloomberg下单
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_BLOOMBERG				= 'B';
	//!自助手机单
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_AUTOPHONE				= 'A';
	//!GiveUp成交
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_GIVEUP				= 'C';
	//!行权成交
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_EXERCISE				= 'E';
	//!TakeUp成交
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_TAKEUP				= 'D';
	//!订单转移的成交删除
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_INPUT_DELETE			= '#';
	//!错单调整
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_ERRORADJUST			= 'F';
	//!经纪电子单
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_BROKER_ETRADER		= 'G';
	//! 临时成交
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_TEMPORARY				= 'J';
	//! 程序化手工单
	const TAPIMatchSourceType		TAPI_MATCH_SOURCE_PROGRAMMANUAL			= 'K';

    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIOPENCLOSEMODETYPE	开平方式
     *	@{
     */
    //=============================================================================
    //! 开平方式
    typedef TAPICHAR				TAPIOpenCloseModeType;
    //! 不区分开平
    const TAPIOpenCloseModeType		TAPI_CLOSE_MODE_NONE				= 'N';
    //! 平仓未了结
    const TAPIOpenCloseModeType		TAPI_CLOSE_MODE_UNFINISHED			= 'U';
    //! 区分开仓和平仓
    const TAPIOpenCloseModeType		TAPI_CLOSE_MODE_OPENCOVER			= 'C';
    //! 区分开仓、平仓和平今
    const TAPIOpenCloseModeType		TAPI_CLOSE_MODE_CLOSETODAY			= 'T';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIFUTUREALGTYPE	币种组资金是否共享
     *	@{
     */
    //=============================================================================
    //! 币种组资金是否共享
    typedef TAPICHAR				TAPIFutureAlgType;
    //! 独立
    const TAPIFutureAlgType			TAPI_FUTURES_ALG_ZHUBI					= 'Y';
    //! 不独立
    const TAPIFutureAlgType			TAPI_FUTURES_ALG_DINGSHI				= 'N';

    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIOPTIONALGTYPE	是否是基币
     *	@{
     */
    //=============================================================================
    //! 是否是基币
    typedef TAPICHAR				TAPIOptionAlgType;
    //! 是基币
    const TAPIOptionAlgType         TAPI_OPTION_ALG_FUTURES                 = '1';
    //! 不是基币
    const TAPIOptionAlgType         TAPI_OPTION_ALG_OPTION                  = '2';
    /** @}*/



    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIBANKACCOUNTLWFLAGTYPE	本外币标识
     *	@{
     */
    //=============================================================================
    //! 本外币标识
    typedef TAPICHAR				TAPIBankAccountLWFlagType;
    //! 境内人民币账户
    const TAPIBankAccountLWFlagType	TAPI_LWFlag_L					= 'L';
    //! 客户境内外币账户
    const TAPIBankAccountLWFlagType	TAPI_LWFlag_W					= 'W';
    /** @}*/


    //=============================================================================
    /**
    *	\addtogroup G_DATATYPE_T_TAPICASHADJUSTTYPETYPE	资金调整类型
    *	@{
    */
    //=============================================================================
    //! 资金调整类型
    typedef TAPICHAR						TAPICashAdjustTypeType;
    //! 手续费调整
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_FEEADJUST = '0';
    //! 盈亏调整
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_YKADJUST = '1';
    //! 质押资金
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_PLEDGE = '2';
    //! 利息收入
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_INTERESTREVENUE = '3';
    //! 代扣费用
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_COLLECTIONCOST = '4';
    //! 其它
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_OTHER = '5';
    //! 公司间拨账
    const TAPICashAdjustTypeType			TAPI_CASHINOUT_MODE_COMPANY = '6';
    /** @}*/



    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIMARGINCALCULATEMODETYPE	期货保证金方式
     *	@{
     */
    //=============================================================================
    //! 期货保证金方式
    typedef TAPICHAR				TAPIMarginCalculateModeType;
    //! 分笔
    const TAPIMarginCalculateModeType TAPI_DEPOSITCALCULATE_MODE_FEN     = '1';
    //! 锁仓
    const TAPIMarginCalculateModeType TAPI_DEPOSITCALCULATE_MODE_SUO     = '2';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIOPTIONMARGINCALCULATEMODETYPE	期权保证金公式
     *	@{
     */
    //=============================================================================
    //! 期权保证金公式,据此判断该品种期权采用何种内置计算公式计算保证金
    typedef TAPICHAR				TAPIOptionMarginCalculateModeType;
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPICMBDIRECTTYPE	组合方向
     *	@{
     */
    //=============================================================================
    //! 组合方向,品种两腿组合合约的买卖方向和第几腿相同
    typedef TAPICHAR				TAPICmbDirectType;
    //! 和第一腿一致
    const TAPICmbDirectType         TAPI_CMB_DIRECT_FIRST                    = '1';
    //! 和第二腿一致
    const TAPICmbDirectType         TAPI_CMB_DIRECT_SECOND                   = '2';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIDELIVERYMODETYPE	交割行权方式
     *	@{
     */
    //=============================================================================
    //! 交割行权方式,期货和期权了结的方式
    typedef TAPICHAR				TAPIDeliveryModeType;
    //! 实物交割
    const TAPIDeliveryModeType		TAPI_DELIVERY_MODE_GOODS			= 'G';
    //! 现金交割
    const TAPIDeliveryModeType		TAPI_DELIVERY_MODE_CASH				= 'C';
    //! 期权行权
    const TAPIDeliveryModeType		TAPI_DELIVERY_MODE_EXECUTE			= 'E';
    //! 期权放弃
    const TAPIDeliveryModeType		TAPI_DELIVERY_MODE_ABANDON			= 'A';
    //! 港交所行权
    const TAPIDeliveryModeType		TAPI_DELIVERY_MODE_HKF				= 'H';
    /** @}*/


    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPICONTRACTTYPETYPE	合约类型
     *	@{
     */
    //=============================================================================
    //! 合约类型
    typedef TAPICHAR				TAPIContractTypeType;
    //! 交易行情合约
    const TAPIContractTypeType		TAPI_CONTRACT_TYPE_TRADEQUOTE		='1';
    //! 行情合约
    const TAPIContractTypeType		TAPI_CONTRACT_TYPE_QUOTE			='2';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPITACTICSTYPETYPE	策略单类型
     *	@{
     */
    //=============================================================================
    //! 策略单类型
    typedef TAPICHAR					TAPITacticsTypeType;
    //! 无
    const TAPITacticsTypeType			TAPI_TACTICS_TYPE_NONE				= 'N';
    //! 预备单(埋单)
    const TAPITacticsTypeType			TAPI_TACTICS_TYPE_READY				= 'M';
    //! 自动单
    const TAPITacticsTypeType			TAPI_TACTICS_TYPE_ATUO				= 'A';
    //! 条件单
    const TAPITacticsTypeType			TAPI_TACTICS_TYPE_CONDITION			= 'C';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIORDERACT	订单操作类型
     *	@{
     */
    //=============================================================================
    //! 订单操作类型
    typedef TAPICHAR		TAPIORDERACT;
    //! 报单
    const TAPIORDERACT APIORDER_INSERT			= '1';
    //! 改单
    const TAPIORDERACT APIORDER_MODIFY			= '2';
    //! 撤单
    const TAPIORDERACT APIORDER_DELETE			= '3';
    //! 挂起
    const TAPIORDERACT APIORDER_SUSPEND			= '4';
    //! 激活
    const TAPIORDERACT APIORDER_ACTIVATE		= '5';
    //! 删除
    const TAPIORDERACT APIORDER_SYSTEM_DELETE	= '6';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPITRIGGERCONDITIONTYPE	触发条件类型
     *	@{
     */
    //=============================================================================
    //! 触发条件类型
    typedef TAPICHAR				TAPITriggerConditionType;
    //! 无
    const TAPITriggerConditionType	TAPI_TRIGGER_CONDITION_NONE			= 'N';
    //! 大于等于
    const TAPITriggerConditionType	TAPI_TRIGGER_CONDITION_GREAT		= 'G';
    //! 小于等于
    const TAPITriggerConditionType	TAPI_TRIGGER_CONDITION_LITTLE		= 'L';
    /** @}*/

    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPITRIGGERPRICETYPETYPE	触发价格类型
     *	@{
     */
    //=============================================================================
    //! 触发价格类型
    typedef TAPICHAR				TAPITriggerPriceTypeType;
    //! 无
    const TAPITriggerPriceTypeType	TAPI_TRIGGER_PRICE_NONE				= 'N';
    //! 买价
    const TAPITriggerPriceTypeType	TAPI_TRIGGER_PRICE_BUY				= 'B';
    //! 卖价
    const TAPITriggerPriceTypeType	TAPI_TRIGGER_PRICE_SELL				= 'S';
    //! 最新价
    const TAPITriggerPriceTypeType	TAPI_TRIGGER_PRICE_LAST				= 'L';
    /** @}*/


    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPITRADINGSTATETYPE	交易状态
     *	@{
     */
    //=============================================================================
    //! 交易状态
    typedef TAPICHAR               TAPITradingStateType;
    //! 集合竞价
    const TAPITradingStateType      TAPI_TRADE_STATE_BID                = '1';
    //! 集合竞价撮合
    const TAPITradingStateType      TAPI_TRADE_STATE_MATCH              = '2';
    //! 连续交易
    const TAPITradingStateType      TAPI_TRADE_STATE_CONTINUOUS         = '3';
    //! 交易暂停
    const TAPITradingStateType      TAPI_TRADE_STATE_PAUSED             = '4';
    //! 闭市
    const TAPITradingStateType      TAPI_TRADE_STATE_CLOSE              = '5';
    //! 闭市处理时间
    const TAPITradingStateType      TAPI_TRADE_STATE_DEALLAST           = '6';
    //! 网关未连
    const TAPITradingStateType		TAPI_TRADE_STATE_GWDISCONNECT		= '0';
    //! 未知状态
    const TAPITradingStateType		TAPI_TRADE_STATE_UNKNOWN			= 'N';
    //! 正初始化
    const TAPITradingStateType		TAPI_TRADE_STATE_INITIALIZE			= 'I';
    //! 准备就绪
    const TAPITradingStateType		TAPI_TRADE_STATE_READY				= 'R';
    /** @}*/



    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPINOTICEIGNOREFLAGTYPE	忽略后台推送通知标记
     *	@{
     */
    //=============================================================================
    //! 忽略后台推送通知标记
    typedef TAPIUINT32              TAPINoticeIgnoreFlagType;
    //! 推送所有信息
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_NONE				= 0x00000000;
    //! 忽略所有推送
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_ALL				= 0xFFFFFFFF;
    //! 忽略资金推送:OnRtnFund
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_FUND				= 0x00000001;
    //! 忽略委托推送:OnRtnOrder
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_ORDER				= 0x00000002;
    //! 忽略成交推送:OnRtnFill
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_FILL				= 0x00000004;
    //! 忽略持仓推送:OnRtnPosition
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_POSITION			= 0x00000008;
    //! 忽略平仓推送:OnRtnClose
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_CLOSE				= 0x00000010;
    //! 忽略持仓盈亏推送:OnRtnPositionProfit
    const TAPINoticeIgnoreFlagType TAPI_NOTICE_IGNORE_POSITIONPROFIT	= 0x00000020;
    /** @}*/


    //=============================================================================
    /**
     *	\addtogroup G_DATATYPE_T_TAPIORDERQRYTYPETYPE	委托查询类型
     *	@{
     */
    //=============================================================================
    //! 委托查询类型
    typedef TAPICHAR              TAPIOrderQryTypeType;
    //! 返回所有委托
    const TAPIOrderQryTypeType TAPI_ORDER_QRY_TYPE_ALL				= 'A';
    //! 只返回未结束的委托
    const TAPIOrderQryTypeType TAPI_ORDER_QRY_TYPE_UNENDED			= 'U';
    /** @}*/

	//=============================================================================
	/**
	 *	\addtogroup G_DATATYPE_T_CONTACTINFO	二次认证登录类型
	 *	@{
	 */
	 //=============================================================================
	//! 二次认证登录类型
	typedef TAPICHAR					TAPILoginTypeType;
	//! 正常登录（信任该设备）
	const TAPILoginTypeType				TAPI_LOGINTYPE_NORMAL		= 'N';
	//! 临时登录
	const TAPILoginTypeType				TAPI_LOGINTYPE_TEMPORARY	= 'T';
	/** @}*/
    //! ------------------------------------------------------------------------------------------

    //! 登录认证信息
    struct TapAPITradeLoginAuth
    {
            TAPISTR_20					UserNo;					///< 用户名
            TAPIYNFLAG					ISModifyPassword;		///< 是否修改密码	
            TAPISTR_20					Password;				///< 密码
            TAPISTR_20					NewPassword;			///< 新密码
			TAPISTR_40					LoginIP;				///< 登录IP（使用此字段需易盛授权）
			TAPISTR_50					LoginMac;				///< 登录MAC,格式12-34-56-78-90-11（使用此字段需易盛授权）
			TAPISTR_50					DeviceName;				///< 登录设备名称（使用此字段需易盛授权）
    };

    //! 登录反馈信息
    struct TapAPITradeLoginRspInfo
    {
            TAPISTR_20					UserNo;							///< 用户编号
            TAPIUserTypeType			UserType;						///< 用户类型
            TAPISTR_20					UserName;						///< 用户名
            TAPISTR_50					ReservedInfo;					///< 交易中心和后台版本号
            TAPISTR_40					LastLoginIP;					///< 上次登录IP
            TAPIUINT32					LastLoginProt;					///< 上次登录端口
            TAPIDATETIME				LastLoginTime;					///< 上次登录时间
            TAPIDATETIME				LastLogoutTime;					///< 上次退出时间
            TAPIDATE					TradeDate;						///< 当前交易日期
            TAPIDATETIME				LastSettleTime;					///< 上次结算时间
            TAPIDATETIME				StartTime;						///< 系统启动时间
            TAPIDATETIME				NextSecondDate;					///< 下次二次认证日期
			TAPISTR_300					LastLoginInfo;					///< 登录附加信息
    };
	//!请求二次认证授权码应答
	struct  TapAPIRequestVertificateCodeRsp
	{
		TAPISecondSerialIDType SecondSerialID;							///< 二次认证授权码序号
		TAPIINT32 Effective;											///< 二次认证授权码有效期（分）。
	};

	//!验证二次认证码请求结构
	struct TapAPISecondCertificationReq
	{
		TAPISTR_10							VertificateCode;		///<二次认证码
		TAPILoginTypeType					LoginType;				///<二次认证登录类型
        TAPIYNFLAG					        IsTOTPCode;				///<是否TOTP认证码
	};

    //! 账号相关信息查询请求
    struct TapAPIAccQryReq
    {
    };

    //! 资金账号信息
    struct TapAPIAccountInfo
    {
            TAPISTR_20              AccountNo;                              ///< 资金账号
            TAPIAccountType			AccountType;                            ///< 账号类型
            TAPIAccountState		AccountState;                           ///< 账号状态
            TAPIAccountRightType		AccountTradeRight;					///<交易状态
            TAPISTR_10				CommodityGroupNo;						///<可交易品种组.
            TAPISTR_20				AccountShortName;                       ///< 账号简称
            TAPISTR_20				AccountEnShortName;						///<账号英文简称
    };

    //! 客户下单请求结构
    struct TapAPINewOrder
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号，必填

            TAPISTR_10					ExchangeNo;						///< 交易所编号，必填
            TAPICommodityType			CommodityType;					///< 品种类型，必填
            TAPISTR_10					CommodityNo;					///< 品种编码类型，必填
            TAPISTR_10					ContractNo;						///< 合约1，必填
            TAPISTR_10					StrikePrice;					///< 执行价格1，期权填写
            TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌1 默认N
            TAPISTR_10					ContractNo2;					///< 合约2，默认空
            TAPISTR_10					StrikePrice2;					///< 执行价格2，默认空
            TAPICallOrPutFlagType		CallOrPutFlag2;					///< 看张看跌2 默认N

            TAPIOrderTypeType			OrderType;						///< 委托类型 必填
            TAPIOrderSourceType			OrderSource;					///< 委托来源，默认程序单。
            TAPITimeInForceType			TimeInForce;					///< 委托有效类型,默认当日有效
            TAPIDATETIME				ExpireTime;						///< 有效日期(GTD情况下使用)

            TAPIYNFLAG					IsRiskOrder;					///< 是否风险报单，默认非风险保单
            TAPISideType				OrderSide;						///< 买入卖出
            TAPIPositionEffectType		PositionEffect;					///< 开平标志1,默认N
            TAPIPositionEffectType		PositionEffect2;				///< 开平标志2，默认N
            TAPISTR_50					InquiryNo;						///< 询价号
            TAPIHedgeFlagType			HedgeFlag;						///< 投机保值，默认N
            TAPIREAL64					OrderPrice;						///< 委托价格1
            TAPIREAL64					OrderPrice2;					///< 委托价格2，做市商应价使用
            TAPIREAL64					StopPrice;						///< 触发价格
            TAPIUINT32					OrderQty;						///< 委托数量，必填
            TAPIUINT32					OrderMinQty;					///< 最小成交量，默认1

            TAPIUINT32					MinClipSize;					///< 冰山单最小随机量
            TAPIUINT32					MaxClipSize;					///< 冰山单最大随机量

            TAPIINT32					RefInt;							///< 整型参考值
            TAPIREAL64					RefDouble;						///< 浮点参考值
            TAPISTR_50					RefString;						///< 字符串参考值

			TAPIClientIDType			ClientID;						///< 客户子账号，如果存在子账号，则自行上报子账号
            TAPITacticsTypeType			TacticsType;					///< 策略单类型，默认N
            TAPITriggerConditionType	TriggerCondition;				///< 触发条件，默认N
            TAPITriggerPriceTypeType	TriggerPriceType;				///< 触发价格类型，默认N
            TAPIYNFLAG					AddOneIsValid;					///< 是否T+1有效,默认T+1有效。
            
            /*
             * 填报ClientID时需要额外填报ClientLocationID字段。
             * 如果下单人位于美国或加拿大，地址信息需填写到省份，共5个字节，省份信息如下：ftp://ftp.cmegroup.com/fix/coo/country_state.rtf
             * 如果下单人位于其他地区，地址信息需填写到国家，共2个字节，国家信息如下：ftp://ftp.cmegroup.com/fix/coo/country_codes.rtf
             */
            TAPIClientLocationIDType	ClientLocationID;				///< 下单人区域
	public:
		TapAPINewOrder()
		{
			memset(this, 0, sizeof(TapAPINewOrder));
			CallOrPutFlag = TAPI_CALLPUT_FLAG_NONE;
			CallOrPutFlag2 = TAPI_CALLPUT_FLAG_NONE;
			OrderSource = TAPI_ORDER_SOURCE_PROGRAM;
			TimeInForce=TAPI_ORDER_TIMEINFORCE_GFD;
			IsRiskOrder = APIYNFLAG_NO;
			PositionEffect = TAPI_PositionEffect_NONE;
			PositionEffect2 = TAPI_PositionEffect_NONE;
			HedgeFlag = TAPI_HEDGEFLAG_NONE;
			OrderMinQty = 1;
			TacticsType = TAPI_TACTICS_TYPE_NONE;
			TriggerCondition = TAPI_TRIGGER_CONDITION_NONE;
			TriggerPriceType = TAPI_TRIGGER_PRICE_NONE;
			AddOneIsValid = APIYNFLAG_YES;
		}
    };


    //! 委托完整信息
    struct TapAPIOrderInfo
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号

            TAPISTR_10					ExchangeNo;						///< 交易所编号
            TAPICommodityType			CommodityType;					///< 品种类型
            TAPISTR_10					CommodityNo;					///< 品种编码类型
            TAPISTR_10					ContractNo;						///< 合约1
            TAPISTR_10					StrikePrice;					///< 执行价格1
            TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌1
            TAPISTR_10					ContractNo2;					///< 合约2
            TAPISTR_10					StrikePrice2;					///< 执行价格2
            TAPICallOrPutFlagType		CallOrPutFlag2;					///< 看张看跌2

            TAPIOrderTypeType			OrderType;						///< 委托类型
            TAPIOrderSourceType			OrderSource;					///< 委托来源
            TAPITimeInForceType			TimeInForce;					///< 委托有效类型
            TAPIDATETIME				ExpireTime;						///< 有效日期(GTD情况下使用)

            TAPIYNFLAG					IsRiskOrder;					///< 是否风险报单
            TAPISideType				OrderSide;						///< 买入卖出
            TAPIPositionEffectType		PositionEffect;					///< 开平标志1
            TAPIPositionEffectType		PositionEffect2;				///< 开平标志2
            TAPISTR_50					InquiryNo;						///< 询价号
            TAPIHedgeFlagType			HedgeFlag;						///< 投机保值
            TAPIREAL64					OrderPrice;						///< 委托价格1
            TAPIREAL64					OrderPrice2;					///< 委托价格2，做市商应价使用
            TAPIREAL64					StopPrice;						///< 触发价格
            TAPIUINT32					OrderQty;						///< 委托数量
            TAPIUINT32					OrderMinQty;					///< 最小成交量

            TAPIINT32					RefInt;							///< 整型参考值
            TAPIREAL64					RefDouble;						///< 浮点参考值
            TAPISTR_50					RefString;						///< 字符串参考值

            TAPIUINT32					MinClipSize;					///< 冰山单最小随机量
            TAPIUINT32					MaxClipSize;					///< 冰山单最大随机量
            TAPISTR_50					LicenseNo;						///< 软件授权号

            TAPICHAR					ServerFlag;						///< 服务器标识
            TAPISTR_20					OrderNo;						///< 委托编码
            TAPISTR_50                  ClientOrderNo;					///< 客户端本地委托编号
			TAPIClientIDType            ClientID;						///< 客户子账号
            TAPITacticsTypeType			TacticsType;					///< 策略单类型
            TAPITriggerConditionType	TriggerCondition;				///< 触发条件
            TAPITriggerPriceTypeType	TriggerPriceType;				///< 触发价格类型
            TAPIYNFLAG					AddOneIsValid;					///< 是否T+1有效

            TAPISTR_40					ClientLocalIP;					///< 终端本地IP
            TAPIMACTYPE					ClientMac;						///< 终端本地Mac地址
            TAPISTR_40					ClientIP;						///< 终端网络地址.

            TAPIUINT32					OrderStreamID;					///< 委托流水号
            TAPISTR_10					UpperNo;						///< 上手号
            TAPISTR_10					UpperChannelNo;					///< 上手通道号

            TAPISTR_20					OrderLocalNo;					///< 本地号
            TAPIUINT32					UpperStreamID;					///< 上手流号

            TAPISTR_50					OrderSystemNo;					///< 系统号
            TAPISTR_50					OrderExchangeSystemNo;			///< 交易所系统号 
            TAPISTR_50					OrderParentSystemNo;			///< 父单系统号

            TAPISTR_20					OrderInsertUserNo;				///< 下单人
            TAPIDATETIME				OrderInsertTime;				///< 下单时间
            TAPISTR_20					OrderCommandUserNo;				///< 录单操作人
            TAPISTR_20					OrderUpdateUserNo;				///< 委托更新人
            TAPIDATETIME				OrderUpdateTime;				///< 委托更新时间

            TAPIOrderStateType			OrderState;						///< 委托状态

            TAPIREAL64					OrderMatchPrice;				///< 成交价1
            TAPIREAL64					OrderMatchPrice2;				///< 成交价2
            TAPIUINT32					OrderMatchQty;					///< 成交量1
            TAPIUINT32					OrderMatchQty2;					///< 成交量2

            TAPIUINT32					ErrorCode;						///< 最后一次操作错误信息码
            TAPISTR_50					ErrorText;						///< 错误信息

            TAPIYNFLAG					IsBackInput;					///< 是否为录入委托单
            TAPIYNFLAG					IsDeleted;						///< 委托成交删除标
            TAPIYNFLAG					IsAddOne;						///< 是否为T+1单
			TAPIClientLocationIDType	ClientLocationID;				///< 下单人区域

    };

    //! 报单通知结构
    struct TapAPIOrderInfoNotice
    {
            TAPIUINT32					SessionID;						///< 会话ID
            TAPIUINT32					ErrorCode; 						///< 错误码
            TapAPIOrderInfo*			OrderInfo;						///< 委托完整信息
    };

    //! 报单操作应答结构
    struct TapAPIOrderActionRsp
    {
            TAPIORDERACT				ActionType;						///< 操作类型
            TapAPIOrderInfo*			OrderInfo;						///< 委托信息
    };


    //! 客户改单请求
	//!必填项有OrderNo,以及委托价和委托量，止损价。其他字段暂没有用。
    struct TapAPIAmendOrder
    {
        TapAPINewOrder              ReqData;                        ///< 报单请求数据
        TAPICHAR					ServerFlag;						///< 服务器标识
        TAPISTR_20                  OrderNo;                        ///< 委托编号
	public:
		TapAPIAmendOrder()
		{
			memset(this, 0, sizeof(TapAPIAmendOrder));
		}
    };

    //! 客户撤单请求结构
	//!必填项是OrderNo.
    struct TapAPIOrderCancelReq
    {
            TAPIINT32					RefInt;							///< 整型参考值
            TAPIREAL64					RefDouble;						///< 浮点参考值
            TAPISTR_50					RefString;						///< 字符串参考值
            TAPICHAR					ServerFlag;						///< 服务器标识
            TAPISTR_20					OrderNo;						///< 委托编码
    };

    //! 挂起委托请求结构
    typedef TapAPIOrderCancelReq TapAPIOrderDeactivateReq;

    //! 激活委托请求结构
    typedef TapAPIOrderCancelReq TapAPIOrderActivateReq;

    //! 删除委托请求结构
    typedef TapAPIOrderCancelReq TapAPIOrderDeleteReq;

    //! 委托查询请求结构
    struct TapAPIOrderQryReq
    {
            TAPISTR_20					AccountNo;						///< 资金账号

            TAPISTR_10					ExchangeNo;						///< 交易所编号
            TAPICommodityType			CommodityType;					///< 品种类型
            TAPISTR_10					CommodityNo;					///< 品种编码类型
            TAPIOrderTypeType			OrderType;						///< 委托类型
            TAPIOrderSourceType			OrderSource;					///< 委托来源
            TAPITimeInForceType			TimeInForce;					///< 委托有效类型
            TAPIDATETIME				ExpireTime;						///< 有效日期(GTD情况下使用)

            TAPIYNFLAG					IsRiskOrder;					///< 是否风险报单

            TAPICHAR					ServerFlag;						///< 服务器标识
            TAPISTR_20                  OrderNo;                        ///< 委托编号

            TAPIYNFLAG					IsBackInput;					///< 是否为录入委托单
            TAPIYNFLAG					IsDeleted;						///< 委托成交删除标
            TAPIYNFLAG					IsAddOne;						///< 是否为T+1单
			TAPIOrderQryTypeType		OrderQryType;					///< 是否只查询未完成委托
    };

    //! 委托流程查询
    struct TapAPIOrderProcessQryReq
    {
            TAPICHAR					ServerFlag;						///< 服务器标识
            TAPISTR_20					OrderNo;						///< 委托编码
    };

    //! 成交查询请求结构
	struct TapAPIFillQryReq
	{
		TAPISTR_20					AccountNo;						///< 客户资金帐号

		TAPISTR_10					ExchangeNo;						///< 交易所编号
		TAPICommodityType			CommodityType;					///< 品种类型
		TAPISTR_10					CommodityNo;					///< 品种编码类型
		TAPISTR_10					ContractNo;						///< 合约1
		TAPISTR_10					StrikePrice;					///< 执行价格
		TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌

		TAPIMatchSourceType			MatchSource;					///< 委托来源
		TAPISideType				MatchSide;						///< 买入卖出
		TAPIPositionEffectType      PositionEffect;					///< 开平标志1

		TAPICHAR					ServerFlag;						///< 服务器标识
		TAPISTR_20					OrderNo;						///< 委托编码
		TAPISTR_10					UpperNo;						///< 上手号
		TAPIYNFLAG					IsDeleted;						///< 委托成交删除标
		TAPIYNFLAG					IsAddOne;						///< 是否为T+1单
	};

    //! 成交信息
    struct TapAPIFillInfo
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号

            TAPISTR_10					ExchangeNo;						///< 交易所编号
            TAPICommodityType			CommodityType;					///< 品种类型
            TAPISTR_10					CommodityNo;					///< 品种编码类型
            TAPISTR_10					ContractNo;						///< 合约1
            TAPISTR_10					StrikePrice;					///< 执行价格
            TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌

            TAPIMatchSourceType			MatchSource;					///< 委托来源
            TAPISideType				MatchSide;						///< 买入卖出
            TAPIPositionEffectType      PositionEffect;					///< 开平标志1

            TAPICHAR					ServerFlag;						///< 服务器标识
            TAPISTR_20					OrderNo;						///< 委托编码
            TAPISTR_50					OrderSystemNo;					///< 系统号

            TAPISTR_20					MatchNo;						///< 本地成交号
            TAPISTR_70					UpperMatchNo;					///< 上手成交号
            TAPISTR_70					ExchangeMatchNo;				///< 交易所成交号

            TAPIDATETIME				MatchDateTime;					///< 成交时间
            TAPIDATETIME				UpperMatchDateTime;				///< 上手成交时间

            TAPISTR_10					UpperNo;						///< 上手号

            TAPIREAL64					MatchPrice;						///< 成交价
            TAPIUINT32					MatchQty;						///< 成交量

            TAPIYNFLAG					IsDeleted;						///< 委托成交删除标
            TAPIYNFLAG					IsAddOne;						///< 是否为T+1单

            TAPISTR_10					FeeCurrencyGroup;				///< 客户手续费币种组
            TAPISTR_10					FeeCurrency;					///< 客户手续费币种
            TAPIREAL64					FeeValue;						///< 手续费
            TAPIYNFLAG					IsManualFee;					///< 人工客户手续费标记

            TAPIREAL64					ClosePrositionPrice;			///< 指定价格平仓
			TAPIREAL64					CloseProfit;					///< 平仓盈亏
    };

    //! 平仓查询请求结构
    struct TapAPICloseQryReq
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号

            TAPISTR_10					ExchangeNo;						///< 交易所编号
            TAPICommodityType			CommodityType;					///< 品种类型
            TAPISTR_10					CommodityNo;					///< 品种编码类型
    };

    //! 平仓信息
    struct TapAPICloseInfo
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号

            TAPISTR_10					ExchangeNo;						///< 交易所编号
            TAPICommodityType			CommodityType;					///< 品种类型
            TAPISTR_10					CommodityNo;					///< 品种编码类型
            TAPISTR_10					ContractNo;						///< 合约
            TAPISTR_10					StrikePrice;					///< 执行价格
            TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌

            TAPISideType				CloseSide;						///< 平仓一边的买入卖出
            TAPIUINT32					CloseQty;						///< 平仓成交量
            TAPIREAL64					OpenPrice;						///< 开仓成交价
            TAPIREAL64					ClosePrice;						///< 平仓成交价

            TAPISTR_20					OpenMatchNo;					///< 本地成交号
            TAPIDATETIME				OpenMatchDateTime;				///< 成交时间
            TAPISTR_20					CloseMatchNo;					///< 本地成交号
            TAPIDATETIME				CloseMatchDateTime;				///< 成交时间

            TAPIUINT32                  CloseStreamId;					///< 平仓流号

            TAPISTR_10					CommodityCurrencyGroup;			///< 品种币种组
            TAPISTR_10					CommodityCurrency;				///< 品种币种

            TAPIREAL64					CloseProfit;					///< 平仓盈亏
    };

    //! 持仓查询请求结构
    struct TapAPIPositionQryReq
    {
            TAPISTR_20 AccountNo;
    };



    //! 持仓信息
    struct TapAPIPositionInfo
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号

            TAPISTR_10					ExchangeNo;						///< 交易所编号
            TAPICommodityType			CommodityType;					///< 品种类型
            TAPISTR_10					CommodityNo;					///< 品种编码类型
            TAPISTR_10					ContractNo;						///< 合约1
            TAPISTR_10					StrikePrice;					///< 执行价格
            TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌

            TAPISideType				MatchSide;						///< 买入卖出
            TAPIHedgeFlagType			HedgeFlag;						///< 投机保值

            TAPISTR_70					PositionNo;						///< 本地持仓号，服务器编写

            TAPICHAR					ServerFlag;						///< 服务器标识
            TAPISTR_20					OrderNo;						///< 委托编码
            TAPISTR_20					MatchNo;						///< 本地成交号
            TAPISTR_10					UpperNo;						///< 上手号


            TAPIREAL64					PositionPrice;					///< 持仓价
            TAPIUINT32					PositionQty;					///< 持仓量

			TAPIUINT32                  PositionStreamId;				///< 持仓流号

            TAPISTR_10					CommodityCurrencyGroup;			///< 品种币种组
            TAPISTR_10					CommodityCurrency;				///< 品种币种

            TAPIREAL64					CalculatePrice;					///< 当前计算价格

            TAPIREAL64					AccountInitialMargin;			///< 客户初始保证金
            TAPIREAL64					AccountMaintenanceMargin;		///< 客户维持保证金
            TAPIREAL64					UpperInitialMargin;				///< 上手初始保证金
            TAPIREAL64					UpperMaintenanceMargin;			///< 上手维持保证金

            TAPIREAL64					PositionProfit;					///< 持仓盈亏
            TAPIREAL64					LMEPositionProfit;				///< LME持仓盈亏
            TAPIREAL64					OptionMarketValue;				///< 期权市值
			TAPIYNFLAG					IsHistory;						///< 是否为昨仓。
    };

    //! 客户持仓盈亏
    struct TapAPIPositionProfit
    {
            TAPISTR_70					PositionNo;						///< 本地持仓号，服务器编写
            TAPIUINT32					PositionStreamId;				///< 持仓流号
            TAPIREAL64					PositionProfit;					///< 持仓盈亏
            TAPIREAL64					LMEPositionProfit;				///< LME持仓盈亏
            TAPIREAL64					OptionMarketValue;				///< 期权市值
            TAPIREAL64					CalculatePrice;					///< 计算价格
    };

    //! 客户持仓盈亏通知
    struct TapAPIPositionProfitNotice
    {
            TAPIYNFLAG					IsLast;							///< 是否最后一包
            TapAPIPositionProfit*		Data;							///< 客户持仓盈亏信息
    };

	struct TapAPIPositionSummary
	{
		TAPISTR_20					AccountNo;						///< 客户资金帐号

		TAPISTR_10					ExchangeNo;						///< 交易所编号
		TAPICommodityType			CommodityType;					///< 品种类型
		TAPISTR_10					CommodityNo;					///< 品种编码类型
		TAPISTR_10					ContractNo;						///< 合约1
		TAPISTR_10					StrikePrice;					///< 执行价格
		TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌

		TAPISideType				MatchSide;						///< 买入卖出
		TAPIREAL64					PositionPrice;					///< 持仓均价。
		TAPIUINT32					PositionQty;					///< 持仓量
		TAPIUINT32					HisPositionQty;					///< 历史持仓量

        TAPIREAL64					CalculatePrice;					///< 当前计算价格
        TAPIREAL64					PositionProfit;					///< 持仓盈亏
	};



    //! 资金查询请求
    struct TapAPIFundReq
    {
            TAPISTR_20					AccountNo;						///< 客户资金帐号
    };
    //! 资金账号资金信息
    struct TapAPIFundData
    {
            TAPISTR_20					AccountNo;						///< 客户资金账号

            TAPISTR_10					CurrencyGroupNo;				///< 币种组号
            TAPISTR_10					CurrencyNo;						///< 币种号(为空表示币种组基币资金)
            TAPIREAL64					TradeRate;						///< 交易汇率
            TAPIFutureAlgType			FutureAlg;                      ///< 期货算法
            TAPIOptionAlgType			OptionAlg;                      ///< 期权算法

            TAPIREAL64					PreBalance;						///< 上日结存
            TAPIREAL64					PreUnExpProfit;					///< 上日未到期平盈
            TAPIREAL64					PreLMEPositionProfit;			///< 上日LME持仓平盈
            TAPIREAL64					PreEquity;						///< 上日权益
            TAPIREAL64					PreAvailable1;					///< 上日可用
            TAPIREAL64					PreMarketEquity;				///< 上日市值权益

            TAPIREAL64					CashInValue;					///< 入金
            TAPIREAL64					CashOutValue;					///< 出金
            TAPIREAL64					CashAdjustValue;				///< 资金调整
            TAPIREAL64					CashPledged;					///< 质押资金
            TAPIREAL64					FrozenFee;						///< 冻结手续费
            TAPIREAL64					FrozenDeposit;					///< 冻结保证金
            TAPIREAL64					AccountFee;						///< 客户手续费包含交割手续费
            TAPIREAL64					SwapInValue;					///< 汇入资金
            TAPIREAL64					SwapOutValue;					///< 汇出资金
            TAPIREAL64					PremiumIncome;					///< 权利金收取
            TAPIREAL64					PremiumPay;						///< 权利金支付
            TAPIREAL64					CloseProfit;					///< 平仓盈亏
            TAPIREAL64					FrozenFund;						///< 冻结资金
            TAPIREAL64					UnExpProfit;					///< 未到期平盈
            TAPIREAL64					ExpProfit;						///< 到期平仓盈亏
            TAPIREAL64					PositionProfit;					///< 不含LME持仓盈亏
            TAPIREAL64					LmePositionProfit;				///< LME持仓盈亏
            TAPIREAL64					OptionMarketValue;				///< 期权市值
            TAPIREAL64					AccountIntialMargin;			///< 客户初始保证金
            TAPIREAL64					AccountMaintenanceMargin;		///< 客户维持保证金
            TAPIREAL64					UpperInitalMargin;				///< 上手初始保证金
            TAPIREAL64					UpperMaintenanceMargin;			///< 上手维持保证金
            TAPIREAL64					Discount;						///< LME贴现

            TAPIREAL64					Balance;						///< 当日结存
            TAPIREAL64					Equity;							///< 当日权益
            TAPIREAL64					Available;						///< 当日可用
            TAPIREAL64					CanDraw;						///< 可提取
            TAPIREAL64					MarketEquity;					///< 账户市值
            TAPIREAL64					AuthMoney;                      ///< 授信资金
    };

    //! 交易品种信息
    struct TapAPICommodityInfo
    {
			TAPISTR_10							ExchangeNo;						//交易所编码
			TAPICommodityType					CommodityType;					//品种类型
			TAPISTR_10							CommodityNo;					//品种编号

			TAPISTR_20							CommodityName;					//品种名称
			TAPISTR_30							CommodityEngName;				//品种英文名称

			TAPISTR_10							RelateExchangeNo;
			TAPICommodityType					RelateCommodityType;
			TAPISTR_10							RelateCommodityNo;

			TAPISTR_10							RelateExchangeNo2;
			TAPICommodityType					RelateCommodityType2;
			TAPISTR_10							RelateCommodityNo2;

			TAPISTR_10							CurrencyGroupNo;
			TAPISTR_10							TradeCurrency;					//交易币种
			TAPIREAL64							ContractSize;					//每手乘数
			TAPIOpenCloseModeType				OpenCloseMode;					//开平方式
			TAPIREAL64							StrikePriceTimes;				//执行价格倍数

			TAPIREAL64							CommodityTickSize;				//最小变动价位
			TAPIINT32							CommodityDenominator;			//报价分母
			TAPICmbDirectType					CmbDirect;						//组合方向
			TAPIDeliveryModeType				DeliveryMode;					//交割行权方式
			TAPIINT32							DeliveryDays;					//交割日偏移
			TAPITIME							AddOneTime;						//T+1分割时间
			TAPIINT32							CommodityTimeZone;				//品种时区
			TAPIYNFLAG							IsAddOne;						//是否处于T+1时段。
			TAPIOptionType						OptionType;						//期权类型


    };

    //! 交易合约信息
    struct TapAPITradeContractInfo
    {
            TAPISTR_10              ExchangeNo;                             ///< 交易所编码
            TAPICommodityType		CommodityType;                          ///< 品种类型
            TAPISTR_10              CommodityNo;                            ///< 品种编号
            TAPISTR_10              ContractNo1;                            ///< 合约代码1
            TAPISTR_10              StrikePrice1;                           ///< 执行价1
            TAPICallOrPutFlagType	CallOrPutFlag1;                         ///< 看涨看跌标示1
            TAPISTR_10              ContractNo2;                            ///< 合约代码2
            TAPISTR_10              StrikePrice2;                           ///< 执行价2
            TAPICallOrPutFlagType	CallOrPutFlag2;                         ///< 看涨看跌标示2
            TAPIContractTypeType	ContractType;                           ///< 合约类型
            TAPISTR_10				QuoteUnderlyingContract;				///< 行情真实合约
            TAPISTR_70              ContractName;                           ///< 合约名称
            TAPIDATE                ContractExpDate;                        ///< 合约到期日	
            TAPIDATE                LastTradeDate;                          ///< 最后交易日
            TAPIDATE                FirstNoticeDate;                        ///< 首次通知日
			TAPIREAL64				ContractSize;							///< 特殊合约层每手乘数
    };


    //! 交易币种信息
    struct TapAPICurrencyInfo
    {
            TAPISTR_10					CurrencyNo;						///< 币种编号
            TAPISTR_10					CurrencyGroupNo;				///< 币种组编号
            TAPIREAL64					TradeRate;						///< 交易汇率
            TAPIREAL64					TradeRate2;						///< 交易汇率2

            TAPIFutureAlgType			FutureAlg;						///< 币种组独立标志
            TAPIOptionAlgType			OptionAlg;						///< 是否是基币
    
	};
    //=============================================================================
    /**
    *	 G_DATATYPE_T_TAPIMSGRECEIVERTYPE	消息接收者类型
    *	
    */
    //=============================================================================
    //! 消息接收者类型
    typedef TAPICHAR				TAPIMsgReceiverType;
    //! 单资金账号客户
    const TAPIMsgReceiverType		TAPI_MSG_RECEIVER_ACCOUNTNO = '1';
    //! 资金账号分组
    const TAPIMsgReceiverType		TAPI_MSG_RECEIVER_ACCOUNTGROUPNO = '2';
    //! 符合属性的资金账号
    const TAPIMsgReceiverType		TAPI_MSG_RECEIVER_ATTRIBUTE = '3';
    //! 指定登录用户
    const TAPIMsgReceiverType		TAPI_MSG_RECEIVER_USERNO = '4';
    

    //=============================================================================
    /**
    *	 G_DATATYPE_T_TAPIMSGLEVELTYPE	消息级别
    *	
    */
    //=============================================================================
    //! 消息级别
    typedef TAPICHAR				TAPIMsgLevelType;
    //! 普通
    const TAPIMsgLevelType			TAPI_MSG_LEVEL_NORMAL = '1';
    //! 重要
    const TAPIMsgLevelType			TAPI_MSG_LEVEL_IMPORTANT = '2';
    //! 紧急
    const TAPIMsgLevelType			TAPI_MSG_LEVEL_IMERGENCY = '3';
    


    //=============================================================================
    /**
    *	 G_DATATYPE_T_TAPIMSGTYPETYPE	消息类型
    *	
    */
    //=============================================================================
    //! 消息类型
    typedef TAPICHAR				TAPIMsgTypeType;
    //! 管理
    const TAPIMsgTypeType			TAPI_Msg_TYPE_MANAGER = '1';
    //! 风险
    const TAPIMsgTypeType			TAPI_Msg_TYPE_RISKCONTROL = '2';
    


    //=============================================================================
    /**
    *	 G_DATATYPE_T_TAPIBILLTYPETYPE	账单类型
    *	
    */
    //=============================================================================
    //! 账单类型
    typedef TAPICHAR						TAPIBillTypeType;
    //! 日账单
    const TAPIBillTypeType					TAPI_BILL_DATE = 'D';
    //! 月账单
    const TAPIBillTypeType					TAPI_BILL_MONTH = 'M';
    

    //=============================================================================
    /**
    *	 G_DATATYPE_T_TAPIBILLFILETYPETYPE	帐单文件类型
    *	
    */
    //=============================================================================
    //! 帐单文件类型
    typedef TAPICHAR						TAPIBillFileTypeType;
    //! txt格式文件
    const TAPIBillFileTypeType				TAPI_BILL_FILE_TXT = 'T';
    //! pdf格式文件
    const TAPIBillFileTypeType				TAPI_BILL_FILE_PDF = 'F';
    



    //! 交易或风控消息查询请求结构
    struct TapAPITradeMessageReq
    {
            TAPISTR_20					AccountNo;
            TAPIDATETIME				BenginSendDateTime;
            TAPIDATETIME				EndSendDateTime;
    };





    //! 交易消息发送应答结构
    struct TapAPITradeMessage
    {
            TAPIUINT32				SerialID;						///< 流号

            TAPISTR_20				AccountNo;						///< 客户资金账号

            TAPIDATETIME			TMsgValidDateTime;				///< 消息有效时间
            TAPISTR_50				TMsgTitle;						///< 消息标题
            TAPISTR_500				TMsgContent;					///< 消息内容
            TAPIMsgTypeType			TMsgType;						///< 消息类型
            TAPIMsgLevelType		TMsgLevel;						///< 消息级别

            TAPIYNFLAG				IsSendBySMS;					///< 是否发送短信
            TAPIYNFLAG				IsSendByEMail;					///< 是否发送邮件
            TAPISTR_20				Sender;							///< 发送者
            TAPIDATETIME			SendDateTime;					///< 发送时间
    };

    //! 客户账单查询请求结构
    struct TapAPIBillQryReq
    {
            TAPISTR_20				UserNo;
            TAPIBillTypeType		BillType;
            TAPIDATE				BillDate;
            TAPIBillFileTypeType	BillFileType;
    };

    //! 客户账单查询应答结构
    struct TapAPIBillQryRsp
    {
            TapAPIBillQryReq		Reqdata;
            TAPIINT32				BillLen;
            TAPICHAR				BillText[1];	///< 变长账单内容，长度由BillLen指定
    };

    //! 历史委托查询请求结构
    struct TapAPIHisOrderQryReq
    {
            TAPISTR_20			AccountNo;							///< 客户资金账号
            TAPIDATE			BeginDate;							///< 开始时间 (必填)
            TAPIDATE			EndDate;							///< 结束时间 (必填)
    };

    struct TapAPIHisOrderQryRsp
    {
            TAPIDATE					Date;								///< 日期
            TAPISTR_20					AccountNo;							///< 客户资金账号

            TAPISTR_10					ExchangeNo;							///< 交易所编号
            TAPICommodityType			CommodityType;						///< 品种类型
            TAPISTR_10					CommodityNo;						///< 品种编码类型
            TAPISTR_10					ContractNo;							///< 合约
            TAPISTR_10					StrikePrice;						///< 执行价格
            TAPICallOrPutFlagType		CallOrPutFlag;						///< 看张看跌
            TAPISTR_10					ContractNo2;						///< 合约2
            TAPISTR_10					StrikePrice2;						///< 执行价格2
            TAPICallOrPutFlagType		CallOrPutFlag2;						///< 看张看跌2

            TAPIOrderTypeType			OrderType;							///< 委托类型
            TAPIOrderSourceType			OrderSource;						///< 委托来源
            TAPITimeInForceType			TimeInForce;						///< 委托有效类型
            TAPIDATETIME				ExpireTime;							///< 有效日期(GTD情况下使用)
            TAPIYNFLAG					IsRiskOrder;						///< 是否风险报单
            TAPISideType				OrderSide;							///< 买入卖出
            TAPIPositionEffectType		PositionEffect;						///< 开平标志
            TAPIPositionEffectType		PositionEffect2;					///< 开平标志2
            TAPISTR_50					InquiryNo;							///< 询价号
            TAPIHedgeFlagType			HedgeFlag;							///< 投机保值
            TAPIREAL64					OrderPrice;							///< 委托价格
            TAPIREAL64					OrderPrice2;						///< 委托价格2，做市商应价使用
            TAPIREAL64					StopPrice;							///< 触发价格
            TAPIUINT32					OrderQty;							///< 委托数量
            TAPIUINT32					OrderMinQty;						///< 最小成交量
            TAPIUINT32					OrderCanceledQty;					///< 撤单数量

            TAPIINT32					RefInt;								///< 整型参考值
            TAPIREAL64					RefDouble;							///<浮点参考型。
            TAPISTR_50					RefString;							///< 字符串参考值

            TAPICHAR					ServerFlag;							///< 服务器标识
            TAPISTR_20					OrderNo;                                            ///< 委托编码
            TAPIUINT32					OrderStreamID;						///< 委托流水号

            TAPISTR_10					UpperNo;							///< 上手号
            TAPISTR_10					UpperChannelNo;						///< 上手通道编号
            TAPISTR_20					OrderLocalNo;						///< 本地号
            TAPIUINT32					UpperStreamID;						///< 上手流号

            TAPISTR_50					OrderSystemNo;						///< 系统号
            TAPISTR_50					OrderExchangeSystemNo;				///< 交易所系统号
            TAPISTR_50					OrderParentSystemNo;				///< 父单系统号 

            TAPISTR_20					OrderInsertUserNo;					///< 下单人
            TAPIDATETIME				OrderInsertTime;					///< 下单时间
            TAPISTR_20					OrderCommandUserNo;					///< 指令下达人
            TAPISTR_20					OrderUpdateUserNo;					///< 委托更新人
            TAPIDATETIME				OrderUpdateTime;					///< 委托更新时间

            TAPIOrderStateType			OrderState;							///< 委托状态

            TAPIREAL64					OrderMatchPrice;					///< 成交价
            TAPIREAL64					OrderMatchPrice2;					///< 成交价2
            TAPIUINT32					OrderMatchQty;						///< 成交量
            TAPIUINT32					OrderMatchQty2;						///< 成交量2

            TAPIUINT32					ErrorCode;							///< 最后一次操作错误信息码
            TAPISTR_50					ErrorText;							///< 错误信息

            TAPIYNFLAG					IsBackInput;						///< 是否为录入委托单
            TAPIYNFLAG					IsDeleted;							///< 委托成交删除标记
            TAPIYNFLAG					IsAddOne;							///< 是否为T+1单
            TAPIYNFLAG					AddOneIsValid;						///< 是否T+1有效

            TAPIUINT32					MinClipSize;						///< 冰山单最小随机量
            TAPIUINT32					MaxClipSize;						///< 冰山单最大随机量
            TAPISTR_50					LicenseNo;							///< 软件授权号

            TAPITacticsTypeType			TacticsType;						///< 策略单类型	
            TAPITriggerConditionType	TriggerCondition;					///< 触发条件
            TAPITriggerPriceTypeType	TriggerPriceType;					///< 触发价格类型

    };
	  //! 历史成交查询请求结构
    struct TapAPIHisMatchQryReq
    {
            TAPISTR_20				AccountNo;							///< 客户资金账号
            TAPIDATE				BeginDate;							///< 开始日期，必填
            TAPIDATE				EndDate;							///< 结束日期，必填
    };

    //! 历史成交查询应答结构
    //! key1=SerialID
    //! key2=ExchangeNo+MatchCmbNo+MatchNo+MatchSide
    struct TapAPIHisMatchQryRsp
    {

            TAPIDATE				SettleDate;							///< 结算日期
            TAPIDATE				TradeDate;							///<交易日期
            TAPISTR_20				AccountNo;							///< 客户资金账号

            TAPISTR_10				ExchangeNo;							///< 市场或者交易所代码
            TAPICommodityType		CommodityType;						///< 品种类型
            TAPISTR_10				CommodityNo;						///< 品种号
            TAPISTR_10				ContractNo;							///< 合约号
            TAPISTR_10				StrikePrice;						///< 执行价
            TAPICallOrPutFlagType	CallOrPutFlag;						///< 看涨看跌标志

            TAPIMatchSourceType		MatchSource;						///< 成交来源	
            TAPISideType			MatchSide;							///< 买卖方向
            TAPIPositionEffectType	PositionEffect;						///< 开平标志
            TAPIHedgeFlagType		HedgeFlag;							///< 投机保值
            TAPIREAL64				MatchPrice;							///< 成交价
            TAPIUINT32				MatchQty;							///< 成交量

            TAPISTR_20				OrderNo;							///< 委托号
            TAPISTR_20				MatchNo;							///< 成交序号
            TAPIUINT32				MatchStreamID;						///< 成交流水号

            TAPISTR_10				UpperNo;							///< 上手号
            TAPISTR_20				MatchCmbNo;							///< 组合号
            TAPISTR_70				ExchangeMatchNo;					///< 成交编号(交易所成交号)
            TAPIUINT32				MatchUpperStreamID;					///< 上手流水号

            TAPISTR_10				CommodityCurrencyGroup;
            TAPISTR_10				CommodityCurrency;					//品种币种		

            TAPIREAL64				Turnover;							///< 成交金额
            TAPIREAL64				PremiumIncome;						///< 权利金收入
            TAPIREAL64				PremiumPay;							///< 权利金支出

            TAPIREAL64				AccountFee;							///< 客户手续费
            TAPISTR_10				AccountFeeCurrencyGroup;
            TAPISTR_10				AccountFeeCurrency;					///< 客户手续费币种
            TAPIYNFLAG				IsManualFee;						///< 人工客户手续费标记
            TAPIREAL64				AccountOtherFee;					//客户其他费用

            TAPIREAL64				UpperFee;							///< 上手手续费
            TAPISTR_10				UpperFeeCurrencyGroup;
            TAPISTR_10				UpperFeeCurrency;					///< 上手手续费币种
            TAPIYNFLAG				IsUpperManualFee;					///< 人工上手手续费标记
            TAPIREAL64				UpperOtherFee;						//上手其他费用

            TAPIDATETIME			MatchDateTime;						///< 成交时间
            TAPIDATETIME			UpperMatchDateTime;					///< 上手成交时间

            TAPIREAL64				CloseProfit;						///< 平仓盈亏
            TAPIREAL64				ClosePrice;							///< 指定平仓价格；

            TAPIUINT32				CloseQty;							///< 平仓量

            TAPISTR_10				SettleGroupNo;						///<结算分组
            TAPISTR_20				OperatorNo;							///< 操作员
            TAPIDATETIME			OperateTime;						///< 操作时间


    };

    //! 历史委托流程查询请求结构
    struct TapAPIHisOrderProcessQryReq
    {
            TAPIDATE				Date;
            TAPISTR_20				OrderNo;
    };

    //! 历史委托流程查询应答数据结构
    typedef TapAPIHisOrderQryRsp		TapAPIHisOrderProcessQryRsp;

 
    //=============================================================================
    /**
    *	 G_DATATYPE_SETTLEFLAG	结算类型
    *	
    */
    //=============================================================================
    //! 结算类型
    typedef TAPICHAR						TAPISettleFlagType;
    //! 自动结算
    const TAPISettleFlagType					SettleFlag_AutoSettle = '0';
    //! 人工结算
    const TAPISettleFlagType					SettleFlagh_Manual= '2';
       
    
    //! 历史持仓查询请求结构
    struct TapAPIHisPositionQryReq
    {
            TAPISTR_20				AccountNo;						///< 客户资金账号
            TAPIDATE				Date;							///< 日期
            TAPISettleFlagType                  SettleFlag;                                             ///<数据类型
    };

    //! 历史持仓查询数据应答结构
    //! key1=SerialID
    //! key2=结算日期+交易所+组号编号+持仓编号+买卖方向
    struct TapAPIHisPositionQryRsp
    {
            TAPIDATE				SettleDate;							///< 结算日期
            TAPIDATE				OpenDate;							///< 开仓日期

            TAPISTR_20				AccountNo;							///< 客户资金账号

            TAPISTR_10				ExchangeNo;							///< 市场或者交易所代码
            TAPICommodityType		CommodityType;						///< 品种类型
            TAPISTR_10				CommodityNo;						///< 品种编码
            TAPISTR_10				ContractNo;							///< 合约号
            TAPISTR_10				StrikePrice;						///< 执行价
            TAPICallOrPutFlagType	CallOrPutFlag;						///< 看涨看跌标志

            TAPISideType			MatchSide;							///< 买卖方向
            TAPIHedgeFlagType		HedgeFlag;							///< 投机保值
            TAPIREAL64				PositionPrice;						///< 持仓价格
            TAPIUINT32				PositionQty;						///< 持仓量

            TAPISTR_20				OrderNo;							///< 
            TAPISTR_20				PositionNo;							///< 持仓编号

            TAPISTR_10				UpperNo;							///< 上手号	

            TAPISTR_10				CurrencyGroup;						///< 品种币种组
            TAPISTR_10				Currency;							///< 品种币种

            TAPIREAL64				PreSettlePrice;						///< 上日结算价格
            TAPIREAL64				SettlePrice;						///< 结算价格
            TAPIREAL64				PositionDProfit;					///< 持仓盈亏(盯市)
            TAPIREAL64				LMEPositionProfit;					///< LME持仓盈亏
            TAPIREAL64				OptionMarketValue;					///< 期权市值

            TAPIREAL64				AccountInitialMargin;				///< 客户初始保证金
            TAPIREAL64				AccountMaintenanceMargin;			///< 客户维持保证金
            TAPIREAL64				UpperInitialMargin;					///< 上手初始保证金
            TAPIREAL64				UpperMaintenanceMargin;				///< 上手维持保证金

            TAPISTR_10				SettleGroupNo;						///< 结算分组
			TAPICHAR				ServerFlag;							///< 服务器标识
			TAPISTR_20				SuperiorAccount;					///< 上级账号
    };

    //! 交割查询请求结构
    struct TapAPIHisDeliveryQryReq
    {
            TAPISTR_20				AccountNo;							///< 客户资金账号
            TAPIDATE				BeginDate;							///< 开始日期（必填）
            TAPIDATE				EndDate;							///< 结束日期（必填）
            TAPISettleFlagType      SettleFlag;                         ///< 结算类型
    };

    //! 交割查询应答数据结构
    //! key1=SerialID
    struct TapAPIHisDeliveryQryRsp
    {
            TAPIDATE				DeliveryDate;						///< 交割日期
            TAPIDATE				OpenDate;							///< 开仓日期
            TAPISTR_20				AccountNo;							///< 客户资金账号

            TAPISTR_10				ExchangeNo;							///< 市场号或交易所代码
            TAPICommodityType       CommodityType;						///< 品种类型
            TAPISTR_10				CommodityNo;						///< 品种编码
            TAPISTR_10				ContractNo;							///< 合约编码
            TAPISTR_10				StrikePrice;						///< 执行价
            TAPICallOrPutFlagType	CallOrPutFlag;						///< 看涨看跌标志

            TAPIMatchSourceType		MatchSource;						///< 成交来源
            TAPISideType			OpenSide;							///< 开仓方向
            TAPIREAL64				OpenPrice;							///< 开仓价格
            TAPIREAL64				DeliveryPrice;						///< 交割价格
            TAPIUINT32				DeliveryQty;						///< 交割量
            TAPIUINT32				FrozenQty;							///< 冻结量

            TAPISTR_20				OpenNo;								///< 开仓成交号
            TAPISTR_10				UpperNo;							///< 上手编号

            TAPISTR_10				CommodityCurrencyGroupy;			///< 品种币种
            TAPISTR_10				CommodityCurrency;					///< 品种币种
            TAPIREAL64				PreSettlePrice;						///< 上日结算价
            TAPIREAL64				DeliveryProfit;						///< 交割盈亏

            TAPIREAL64				AccountFrozenInitialMargin;			///< 客户初始冻结保证金
            TAPIREAL64				AccountFrozenMaintenanceMargin;		///< 客户维持冻结保证金
            TAPIREAL64				UpperFrozenInitialMargin;			///< 上手初始冻结保证金
            TAPIREAL64				UpperFrozenMaintenanceMargin;		///< 上手维持冻结保证金

            TAPISTR_10				AccountFeeCurrencyGroup;
            TAPISTR_10				AccountFeeCurrency;					///< 客户手续费币种
            TAPIREAL64				AccountDeliveryFee;					///< 客户交割手续费 
            TAPISTR_10				UpperFeeCurrencyGroup;
            TAPISTR_10				UpperFeeCurrency;					///< 上手手续费币种
            TAPIREAL64				UpperDeliveryFee;					///< 上手交割手续费

            TAPIDeliveryModeType	DeliveryMode;						///< 交割行权方式
            TAPISTR_20				OperatorNo;							///< 操作员
            TAPIDATETIME			OperateTime;						///< 操作时间
            TAPISTR_20				SettleGourpNo;						///< 结算分组
			TAPISTR_10              FutureContractNo;                   ///< 特殊期权标的合约
			TAPISTR_10              OptionStrikePrice;                  ///< 期权真实执行价
			TAPISTR_20				SuperiorAccount;					///< 上级账号
    };

    //客户历史资金查询请求结构
    struct TapAPIHisFundQryReq
    {
        TAPIDATE						BeginDate;                      ///< 开始日期（必填）
        TAPIDATE						EndDate;                        ///< 结束日期（必填）
        TAPISettleFlagType				SettleFlag;                     ///< 结算类型
    };
    //客户历史资金查询数据应答结构
    struct TapAPIHisFundQryRsp
    {
        TAPIDATE						Date;								//日期
        TAPISTR_20						AccountNo;							//客户资金账号

        TAPISTR_10						CurrencyGroupNo;					//币种组号
        TAPISTR_10						CurrencyNo;							//币种号
        TAPIREAL64						PreBalance;							//上日结存						股票系统-期初现金结余
        TAPIREAL64						PreUnExpProfit;						//上日未到期平盈					股票系统-期初未交收金额
        TAPIREAL64						PreLMEPositionProfit;				//应扣质押利息
        TAPIREAL64						PreEquity;							//上日权益
        TAPIREAL64						PreAvailable1;						//上日可用1
        TAPIREAL64						PreAvailable2;						//上日可用2
        TAPIREAL64						PreMarketEquity;					//上日市值权益

        TAPIUINT32						FutureMatchQty;						//期货成交量
        TAPIUINT32						OptionMatchQty;						//期权成交量
        TAPIUINT32						FuturePositionQty;					//期货持仓量
        TAPIUINT32						OptionPositionQty;					//期权持仓量
        TAPIREAL64						FutureTurnover;						//期货成交金额
        TAPIREAL64						CashInValue;						//入金
        TAPIREAL64						CashOutValue;						//出金
        TAPIREAL64						AdjustValue;						//资金调整
        TAPIREAL64						CashPledged;						//质押资金
        TAPIREAL64						CashSwapIn;							//汇入资金
        TAPIREAL64						CashSwapOut;						//汇出资金
        TAPIREAL64						AccountFee;							//客户手续费包含交割手续费
        TAPIREAL64						ExchangeFee;						//当日利息
        TAPIREAL64						AccountDeliveryFee;					//客户交割手续费
        TAPIREAL64						UpperFee;							//上手手续费
        TAPIREAL64						UpperDeliveryFee;					//上手交割手续费
        TAPIREAL64						NetFee;								//净手续费
        TAPIREAL64						PremiumIncome;						//权利金收取						股票系统-收取贷款
        TAPIREAL64						PremiumPay;							//权利金支付						股票系统-支付贷款

        TAPIREAL64						CloseProfit;						//平仓盈亏
        TAPIREAL64						DeliveryProfit;						//交割盈亏
        TAPIREAL64						UnExpProfit;						//未到期平盈						股票系统-未交收金额
        TAPIREAL64						ExpProfit;							//到期平仓盈亏(未统计)
        TAPIREAL64						PositionProfit;						//不含LME持仓盈亏
        TAPIREAL64						LmePositionProfit;					//LME持仓盈亏

        TAPIREAL64						AccountIntialMargin;				//客户初始保证金
        TAPIREAL64						AccountMaintenanceMargin;			//客户维持保证金
        TAPIREAL64						UpperInitalMargin;					//上手初始保证金					股票系统-可按揭总值
        TAPIREAL64						UpperMaintenanceMargin;				//上手维持保证金
        TAPIREAL64						AccountFrozenInitialMargin;			//当日质押利息
        TAPIREAL64						AccountFrozenMaintenanceMargin;		//累计质押利息
        TAPIREAL64						UpperFrozenInitialMargin;			//买期权市值
        TAPIREAL64						UpperFrozenMaintenanceMargin;		//上手维持冻结保证金

        TAPIREAL64						Balance;							//当日结存						股票系统-现金结余
        TAPIREAL64						Equity;								//当日权益						股票系统-净现金结余
        TAPIREAL64						Frozen;								//冻结资金						股票系统-冻结贷款
        TAPIREAL64						Available1;							//当日可用1						股票系统-可用资金
        TAPIREAL64						Available2;							//当日可用2		
        TAPIREAL64						CanDraw;							//可提取							股票系统-可提资金
        TAPIREAL64						SettleRate;							//结算汇率
        TAPIREAL64						Discount;							//卖出期权市值/在非SPAN Total Req模式为非SPAN的卖出期权市值					
        TAPIREAL64						OptionMarketValue;					//期权市值						股票系统-持仓市值
        TAPIREAL64						OriginalCashInOut;					//币种原始出入金
        TAPIREAL64						MarketEquity;						//账户市值

        TAPIREAL64						AccountOtherFee;					//客户其他费用
        TAPIREAL64						UpperOtherFee;						//上手其他费用

        TAPIREAL64						AccountAuthCash;					//客户授信资金

        TAPIREAL64						Interest;							//累计利息
        TAPIREAL64						CurInterest;					    //应扣利息

        TAPISTR_10						SettleGroupNo;						//结算分组
        TAPISTR_20						SuperiorAccount;					//上级账号
    };

    //! 客户资金调整查询请求结构
    struct TapAPIAccountCashAdjustQryReq
    {
            TAPIUINT32				SerialID;
            TAPISTR_20				AccountNo;
            TAPIDATE				BeginDate;						///< 必填
            TAPIDATE				EndDate;						///< 必填
    };

    //! 客户资金调整查询应答结构
    struct TapAPIAccountCashAdjustQryRsp
    {
            TAPIDATE					Date;							///< 日期
            TAPISTR_20					AccountNo;						///< 客户资金账号

            TAPICashAdjustTypeType		CashAdjustType;					///< 资金调整类型
            TAPISTR_10					CurrencyGroupNo;				///< 币种组号
            TAPISTR_10					CurrencyNo;						///< 币种号
            TAPIREAL64					CashAdjustValue;				///< 资金调整金额
            TAPISTR_100					CashAdjustRemark;				///< 资金调整备注

            TAPIDATETIME				OperateTime;					///< 操作时间
            TAPISTR_20					OperatorNo;						///< 操作员

            TAPISTR_10					AccountBank;					///< 客户银行
            TAPISTR_20					BankAccount;					///< 客户银行账号
            TAPIBankAccountLWFlagType	AccountLWFlag;					///< 客户本外币标识
            TAPISTR_10					CompanyBank;					///< 公司银行
            TAPISTR_20					InternalBankAccount;			///< 公司银行账户
            TAPIBankAccountLWFlagType	CompanyLWFlag;					///< 公司本外币标识
    };
	//! 客户账户手续费计算参数查询请求结构
	struct TapAPIAccountFeeRentQryReq
	{
		TAPISTR_20						AccountNo;
	};
	//! 客户账户手续费计算参数查询应答结构
	struct TapAPIAccountFeeRentQryRsp
	{
		TAPISTR_20						AccountNo;
		TAPISTR_10						ExchangeNo;
		TAPICommodityType				CommodityType;
		TAPISTR_10						CommodityNo;
		TAPIMatchSourceType				MatchSource;
		TAPICalculateModeType			CalculateMode;
		TAPISTR_10						CurrencyGroupNo;				
		TAPISTR_10						CurrencyNo;						
		TAPIREAL64						OpenCloseFee;
		TAPIREAL64						CloseTodayFee;
        TAPISTR_10					    ContractNo;
	};
	//! 客户账户保证金计算参数查询结构
	struct TapAPIAccountMarginRentQryReq
	{
		TAPISTR_20						AccountNo;
		TAPISTR_10						ExchangeNo;
		TAPICommodityType				CommodityType;
		TAPISTR_10						CommodityNo;
		//TAPISTR_10						ContractNo;//暂时先不对外开放。
	};

	//! 客户账户保证金计算参数查询应答
	struct  TapAPIAccountMarginRentQryRsp
	{
		TAPISTR_20						AccountNo;
		TAPISTR_10						ExchangeNo;
		TAPICommodityType				CommodityType;
		TAPISTR_10						CommodityNo;
		TAPISTR_10						ContractNo;
		TAPISTR_10						StrikePrice;
		TAPICallOrPutFlagType			CallOrPutFlag;
		TAPICalculateModeType			CalculateMode;
		TAPISTR_10						CurrencyGroupNo;
		TAPISTR_10						CurrencyNo;
		TAPIREAL64						InitialMargin;
		TAPIREAL64						MaintenanceMargin;
		TAPIREAL64						SellInitialMargin;
		TAPIREAL64						SellMaintenanceMargin;
		TAPIREAL64						LockMargin;
	};
	//! 港交所做市商询价通知。
	struct TapAPIOrderQuoteMarketNotice
	{
		TAPISTR_10						ExchangeNo;				///< 交易所编号
		TAPICommodityType				CommodityType;			///< 品种类型
		TAPISTR_10						CommodityNo;			///< 品种编号
		TAPISTR_10						ContractNo;				///< 合约
		TAPISTR_10						StrikePrice;			///< 执行价
		TAPICallOrPutFlagType			CallOrPutFlag;			///< 看涨看跌
		TAPISideType					OrderSide;				///< 买卖方向
		TAPIUINT32						OrderQty;				///< 委托量
	};

	//! 做市商下单请求结构
	struct TapAPIOrderMarketInsertReq
	{
		TAPISTR_20				AccountNo;					///< 客户资金帐号
		TAPISTR_10				ExchangeNo;					///< 交易所编号
		TAPICommodityType		CommodityType;				///< 品种类型
		TAPISTR_10				CommodityNo;				///< 品种编码类型
		TAPISTR_10				ContractNo;					///< 合约
		TAPISTR_10				StrikePrice;					///< 执行价格
		TAPICallOrPutFlagType		CallOrPutFlag;				///< 看张看跌
		TAPIOrderTypeType		OrderType;					///< 委托类型
		TAPITimeInForceType		TimeInForce;					///< 有效类型
		TAPIDATETIME			ExpireTime;						///< 有效期
		TAPIOrderSourceType		OrderSource;					///< 委托来源	
		TAPIPositionEffectType	BuyPositionEffect;				///< 买开平标志
		TAPIPositionEffectType	SellPositionEffect;				///< 卖开平标志

		TAPIYNFLAG				AddOneIsValid;					///< 是否T+1有效
		TAPIREAL64				OrderBuyPrice;				///< 买委托价
		TAPIREAL64				OrderSellPrice;				///< 卖委托价	
		TAPIUINT32				OrderBuyQty;					///< 买委托量
		TAPIUINT32				OrderSellQty;					///< 卖委托量
		TAPIINT32				RefInt;						///< 整型参考值
		TAPIREAL64				RefDouble;					///< 浮点参考值
		TAPISTR_50				RefString;					///< 字符串参考值
		TAPISTR_100				Remark;						///< 备注
	};

	//! 客户做市商应答请求结构
	struct TapAPIOrderMarketInsertRsp
	{
		TAPISTR_20							AccountNo;						///< 客户资金帐号

		TAPISTR_10							ExchangeNo;						///< 交易所编号
		TAPICommodityType					CommodityType;					///< 品种类型
		TAPISTR_10							CommodityNo;					///< 品种编码类型
		TAPISTR_10							ContractNo;						///< 合约
		TAPISTR_10							StrikePrice;					///< 执行价格
		TAPICallOrPutFlagType				CallOrPutFlag;					///< 看张看跌

		TAPIOrderTypeType					OrderType;						///< 委托类型
		TAPITimeInForceType					TimeInForce;					///< 委托有效类型
		TAPIDATETIME						ExpireTime;						///< 有效日期(GTD情况下使用)
		TAPIOrderSourceType					OrderSource;					///< 委托来源

		TAPIPositionEffectType				BuyPositionEffect;				///< 买开平标志
		TAPIPositionEffectType				SellPositionEffect;				///< 卖开平标志

		TAPIREAL64							OrderBuyPrice;					///< 买委托价
		TAPIREAL64							OrderSellPrice;					///< 卖委托价

		TAPIUINT32							OrderBuyQty;					///< 买委托量
		TAPIUINT32							OrderSellQty;					///< 卖委托量

		TAPICHAR							ServerFlag;						///< 交易服务标识
		TAPISTR_20							OrderBuyNo;						///< 买委托号
		TAPISTR_20							OrderSellNo;					///< 卖委托号

		TAPIYNFLAG							AddOneIsValid;					///< 是否T+1有效

		TAPISTR_20							OrderMarketUserNo;				///< 下单人
		TAPIDATETIME						OrderMarketTime;				///< 下单时间

		TAPIINT32							RefInt;							///< 整型参考值
		TAPIREAL64							RefDouble;						///< 浮点参考值
		TAPISTR_50							RefString;						///< 字符串参考值

		TAPISTR_50							ClientBuyOrderNo;				///< 买本地委托编号
		TAPISTR_50							ClientSellOrderNo;				///< 卖本地委托编号

		TAPIUINT32							ErrorCode;						///< 错误信息码
		TAPISTR_50							ErrorText;						///< 错误信息
			
		TAPISTR_40							ClientLocalIP;					///< 终端本地IP地址（客户端填写）
		TAPIMACTYPE							ClientMac;						///< 终端本地Mac地址（客户端填写）

		TAPISTR_40							ClientIP;						///< 前置记录的终端IP地址（前置填写）

		TAPISTR_100							Remark;							///< 备注
	};
	//! 港交所做市商双边撤单请求
	struct TapAPIOrderMarketDeleteReq
	{
		TAPICHAR				ServerFlag;
		TAPISTR_20				OrderBuyNo;					///< 买委托号
		TAPISTR_20				OrderSellNo;					///< 卖委托号
	};
	typedef TapAPIOrderMarketInsertRsp TapAPIOrderMarketDeleteRsp;


	//! 订单删除请求结构

	struct TapAPIOrderLocalRemoveReq
	{
		TAPICHAR				ServerFlag;
		TAPISTR_20				OrderNo;					
	};

	//! 订单删除应答结构
	struct TapAPIOrderLocalRemoveRsp
	{
		TapAPIOrderLocalRemoveReq req;
		TAPISTR_40							ClientLocalIP;					//终端本地IP地址（客户端填写）
		TAPIMACTYPE							ClientMac;						//终端本地Mac地址（客户端填写）

		TAPISTR_40							ClientIP;						//前置记录的终端IP地址（前置填写）
	};

	//! 订单录入请求结构
	struct TapAPIOrderLocalInputReq
	{
		TAPISTR_20					AccountNo;						///< 客户资金帐号

		TAPISTR_10					ExchangeNo;						///< 交易所编号
		TAPICommodityType			CommodityType;					///< 品种类型
		TAPISTR_10					CommodityNo;					///< 品种编码类型
		TAPISTR_10					ContractNo;						///< 合约1
		TAPISTR_10					StrikePrice;					///< 执行价格1
		TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌1
		TAPISTR_10					ContractNo2;					///< 合约2
		TAPISTR_10					StrikePrice2;					///< 执行价格2
		TAPICallOrPutFlagType		CallOrPutFlag2;					///< 看张看跌2

		TAPIOrderTypeType			OrderType;						///< 委托类型
		TAPIOrderSourceType			OrderSource;					///< 委托来源
		TAPITimeInForceType			TimeInForce;					///< 委托有效类型
		TAPIDATETIME				ExpireTime;						///< 有效日期(GTD情况下使用)

		TAPIYNFLAG					IsRiskOrder;					///< 是否风险报单
		TAPISideType				OrderSide;						///< 买入卖出
		TAPIPositionEffectType		PositionEffect;					///< 开平标志1
		TAPIPositionEffectType		PositionEffect2;				///< 开平标志2
		TAPISTR_50					InquiryNo;						///< 询价号
		TAPIHedgeFlagType			HedgeFlag;						///< 投机保值
		TAPIREAL64					OrderPrice;						///< 委托价格1
		TAPIREAL64					OrderPrice2;					///< 委托价格2，做市商应价使用
		TAPIREAL64					StopPrice;						///< 触发价格
		TAPIUINT32					OrderQty;						///< 委托数量
		TAPIUINT32					OrderMinQty;					///< 最小成交量
		TAPISTR_50					OrderSystemNo;					///< 系统号
		TAPISTR_50					OrderExchangeSystemNo;			///< 交易所系统号

		TAPISTR_10					UpperNo;						///< 上手号
		TAPIREAL64					OrderMatchPrice;				///< 成交价1
		TAPIREAL64					OrderMatchPrice2;				///< 成交价2
		TAPIUINT32					OrderMatchQty;					///< 成交量1
		TAPIUINT32					OrderMatchQty2;					///< 成交量2

		TAPIOrderStateType			OrderState;						///< 委托状态

		TAPIYNFLAG					IsAddOne;						///< 是否为T+1单

        TAPISTR_20					LowerAccount;					///< 下级资金帐号
	};
	typedef TapAPIOrderInfo TapAPIOrderLocalInputRsp;

	struct TapAPIOrderLocalModifyReq
	{
		TapAPIOrderLocalInputReq	req;
		TAPICHAR					ServerFlag;						///< 服务器标识
		TAPISTR_20					OrderNo;						///< 委托编码
	};

	typedef TapAPIOrderInfo TapAPIOrderLocalModifyRsp;

	struct TapAPIOrderLocalTransferReq
	{
		TAPISTR_20					AccountNo;						///< 客户资金帐号
		TAPICHAR					ServerFlag;						///< 服务器标识
		TAPISTR_20					OrderNo;						///< 委托编码
	};

	typedef TapAPIOrderInfo TapAPIOrderLocalTransferRsp;


	struct TapAPIFillLocalInputReq
	{
		TAPISTR_20					AccountNo;						///< 客户资金帐号

		TAPISTR_10					ExchangeNo;						///< 交易所编号
		TAPICommodityType			CommodityType;					///< 品种类型
		TAPISTR_10					CommodityNo;					///< 品种编码类型
		TAPISTR_10					ContractNo;						///< 合约1
		TAPISTR_10					StrikePrice;					///< 执行价格
		TAPICallOrPutFlagType		CallOrPutFlag;					///< 看张看跌
	
		TAPISideType				MatchSide;						///< 买入卖出
		TAPIPositionEffectType      PositionEffect;					///< 开平标志1
		TAPIHedgeFlagType			HedgeFlag;						///< 投机保值
		TAPIREAL64					MatchPrice;						///< 成交价
		TAPIUINT32					MatchQty;						///< 成交量

		TAPISTR_50					OrderSystemNo;					///< 系统号
		TAPISTR_70					UpperMatchNo;					///< 上手成交号
		TAPIDATETIME				MatchDateTime;					///< 成交时间
		TAPIDATETIME				UpperMatchDateTime;				///< 上手成交时间
		TAPISTR_10					UpperNo;						///< 上手号

		TAPIYNFLAG					IsAddOne;						///< 是否为T+1单

		TAPISTR_10					FeeCurrencyGroup;				///< 客户手续费币种组
		TAPISTR_10					FeeCurrency;					///< 客户手续费币种
		TAPIREAL64					FeeValue;						///< 手续费
		TAPIYNFLAG					IsManualFee;					///< 人工客户手续费标记

		TAPIREAL64					ClosePositionPrice;				///< 指定价格平仓
	};
	typedef  TapAPIFillLocalInputReq TapAPIFillLocalInputRsp;


	//! 客户录单成交删除请求结构
	struct	TapAPIFillLocalRemoveReq
	{
		TAPICHAR					ServerFlag;						///< 服务器标识
		TAPISTR_20					MatchNo;						///< 本地成交号
	};
	//! 客户录单成交删除应答结构
	typedef TapAPIFillLocalRemoveReq	TapAPIFillLocalRemoveRsp;

	//! 系统交易日查询应答
	struct TapAPITradingCalendarQryRsp
	{
		TAPIDATE CurrTradeDate;										///< 当前交易日
		TAPIDATE LastSettlementDate;								///< 上次结算日
		TAPIDATE PromptDate;										///< LME到期日
		TAPIDATE LastPromptDate;									///< 上日LME到期日
	};

	//! 客户现货锁定量查询请求结构
	struct TapAPISpotLockQryReq
	{
		TAPISTR_20					AccountNo;						///<客户资金帐号
	};
	//! 客户现货锁定量查询应答结构
	typedef TapAPISpotLockQryReq				TapAPISpotLockQryRsp;
	//! 客户现货锁定量查询数据应答结构
	struct TapAPISpotLockDataRsp
	{
		TAPISTR_20					AccountNo;						///<客户资金账号

		TAPISTR_10					ExchangeNo;						///< 交易所编号
		TAPICommodityType			CommodityType;					///< 品种类型
		TAPISTR_10					CommodityNo;					///< 品种编码类型

		TAPIUINT32					LockQty;						///<锁定量
		TAPIUINT32					FrozenQty;						///<冻结量
		TAPIUINT32					CanUnLockQty;					///<可解锁量
	};
	//! 客户现货锁定量变更通知
	typedef TapAPISpotLockDataRsp				TapAPISpotLockDataNotice;

	//=============================================================================
	/**
	*	\addtogroup G_DATATYPE_SETTLEFLAG	采集信息异常标识
	*/
	//=============================================================================
	typedef TAPICHAR						TapAPIAbnormalFalgType;
	//!正常
	const	TapAPIAbnormalFalgType			TAPI_ABNORMAL_NORMAL				= '0';
	//!终端信息采集为空
	const	TapAPIAbnormalFalgType			TAPI_ABNORMAL_GATHERINFO_NONE		= '1';
	//!终端采集数据加密密钥版本异常
	const	TapAPIAbnormalFalgType			TAPI_ABNORMAL_AUTHKEYVERSION		= '2';
	//!终端信息数据异常
	const	TapAPIAbnormalFalgType			TAPI_ABNORMAL_GATHERINFO_WRONG		= '3';


	//! 看穿式监管采集信息_中继方式上报
	struct TapAPISubmitUserLoginInfo
	{
		TAPISTR_20					UserNo;								///< 用户名
		TAPISTR_500					GatherInfo;							///< 用户终端采集信息
		TAPISTR_40					ClientLoginIP;						///< 用户公网IP
		TAPIUINT32					ClientLoginPort;					///< 用户公网Port
		TAPIDATETIME				ClientLoginDateTime;				///< 用户登录时间
		TAPISTR_30					ClientAppID;						///< 用户AppID
		TAPIUINT32					AuthKeyVersion;						///< 用户终端信息加密密钥版本号
		TapAPIAbnormalFalgType		AbnormalNo;							///< 用户采集信息异常标识
	};

	//! 看穿式监管采集信息应答
	struct TapAPISubmitUserLoginRspInfo
	{
		TAPISTR_20					UserNo;								///< 用户名
	};




	//=============================================================================
	/**
	*	\addtogroup G_DATATYPE_SETTLEFLAG	组合策略代码
	*/
	//=============================================================================
	typedef TAPICHAR					TapAPICombineStrategyType[10];
	//!认购牛市价差策略
	const TapAPICombineStrategyType		TAPI_STRATEGY_C_BULL						= "CNSJC";
	//!认沽熊市价差策略
	const TapAPICombineStrategyType		TAPI_STRATEGY_P_BEAR						= "PXSJC";
	//!认沽牛市价差策略
	const TapAPICombineStrategyType		TAPI_STRATEGY_P_BULL						= "PNSJC";
	//!认购熊市价差策略
	const TapAPICombineStrategyType		TAPI_STRATEGY_C_BEAR						= "CXSJC";
	//!跨式空头策略
	const TapAPICombineStrategyType		TAPI_STRATEGY_S_STRADDLE					= "KS";
	//!宽跨式空头策略
	const TapAPICombineStrategyType		TAPI_STRATEGY_S_STRANGLE					= "KKS";
	//!普通仓转备兑仓
	const TapAPICombineStrategyType		TAPI_STRATEGY_ZBD							= "ZBD";
	//!备兑仓转普通仓
	const TapAPICombineStrategyType		TAPI_STRATEGY_ZXJ							= "ZXJ";

	//=============================================================================
	/**
	*特殊业务委托类型
	*/
	//=============================================================================
	typedef TAPICHAR					TapAPISpecialOrderTypeType;
	//!组合策略申请
	const TapAPISpecialOrderTypeType		TAPI_STRATEGY_COMBINE					= '1';
	//!组合策略拆分
	const TapAPISpecialOrderTypeType		TAPI_STRATEGY_SPLIT						= '2';
	//!证券锁定
	const TapAPISpecialOrderTypeType		TAPI_SPOT_LOCK							= '3';
	//!证券解锁
	const TapAPISpecialOrderTypeType		TAPI_SPOT_UNLOCK						= '4';
	//!期权行权
	const TapAPISpecialOrderTypeType		TAPI_OPTION_EXERCISE					= '5';
	//!期权组合行权
	const TapAPISpecialOrderTypeType		TAPI_OPTION_EXERCISE_COMBINE			= '6';


	//!客户特殊业务委托请求结构
	struct TapAPISpecialOrderInsertReq
	{
		TAPISTR_20						AccountNo;						///< 客户资金帐号
		TapAPISpecialOrderTypeType		SpecialOrderType;				///< 特殊业务类型
		TAPIOrderSourceType				OrderSource;					///< 委托来源
		TAPISTR_50						CombineNo;						///< 组合编码
		TAPIUINT32						OrderQty;						///< 委托数量
		TAPISTR_10						ExchangeNo;						///< 交易所编号
		TAPICommodityType				CommodityType;					///< 品种类型
		TAPISTR_10						CommodityNo;					///< 品种编码
		TAPISTR_10						ContractNo;						///< 合约1
		TAPISTR_10						StrikePrice;					///< 执行价格1
		TAPICallOrPutFlagType			CallOrPutFlag;					///< 看张看跌1
		TAPISideType					OrderSide1;						///< 买卖方向1
		TAPIHedgeFlagType				HedgeFlag1;						///< 投机备兑1
		TAPISTR_10						ContractNo2;					///< 合约2
		TAPISTR_10						StrikePrice2;					///< 执行价格2
		TAPICallOrPutFlagType			CallOrPutFlag2;					///< 看张看跌2
	};

	//!查询特殊业务委托请求结构
	struct TapAPISpecialOrderQryReq
	{
		TAPISTR_20						AccountNo;						///< 客户资金帐号	
		TAPISTR_20						OrderNo;						///< 特殊业务委托编号
	};
	//!客户特殊业务委托信息
	struct TapAPISpecialOrderInfo
	{
		TAPIUINT32						SessionID;						///< 会话ID
		TAPIUINT32						ErrorCode; 						///< 错误码
		TAPISTR_50						ErrorText;						///< 错误信息
		TAPISTR_20						AccountNo;						///< 客户资金帐号
		TAPICHAR						ServerFlag;						///< 服务器标识
		TAPISTR_20						OrderNo;						///< 特殊业务委托编号
		TAPISTR_50						ClientOrderNo;					///< 客户端本地委托编号
		TapAPISpecialOrderTypeType		SpecialOrderType;				///< 特殊业务类型
		TAPIOrderSourceType				OrderSource;					///< 委托来源，默认程序单。
		TapAPICombineStrategyType       CombineStrategy;				///< 组合策略代码
		TAPISTR_50						CombineNo;						///< 组合编码
		TAPIUINT32						OrderQty;						///< 委托数量
		TAPISTR_10						ExchangeNo;						///< 交易所编号
		TAPICommodityType				CommodityType;					///< 品种类型
		TAPISTR_10						CommodityNo;					///< 品种编码
		TAPISTR_10						ContractNo;						///< 合约1
		TAPISTR_10						StrikePrice;					///< 执行价格1
		TAPICallOrPutFlagType			CallOrPutFlag;					///< 看张看跌1
		TAPISideType					OrderSide1;						///< 买卖方向1
		TAPIUINT32						CombineQty1;					///< 组合数量1
		TAPIHedgeFlagType				HedgeFlag1;						///< 投机备兑1
		TAPISTR_10						ContractNo2;					///< 合约2
		TAPISTR_10						StrikePrice2;					///< 执行价格2
		TAPICallOrPutFlagType			CallOrPutFlag2;					///< 看张看跌2
		TAPISideType					OrderSide2;						///< 买卖方向2
		TAPIUINT32						CombineQty2;					///< 组合数量2
		TAPIHedgeFlagType				HedgeFlag2;						///< 投机备兑2

		TAPISTR_50		 				LicenseNo;						///< 软件授权号
		TAPISTR_40						ClientLocalIP;					///< 终端本地IP
		TAPIMACTYPE						ClientMac;						///< 终端本地Mac地址
		TAPISTR_40						ClientIP;						///< 终端网络地址.
		TAPIUINT32						OrderStreamID;					///< 委托流水号
		TAPISTR_10						UpperNo;						///< 上手号
		TAPISTR_10						UpperChannelNo;					///< 上手通道号
		TAPISTR_20						OrderLocalNo;					///< 网关本地号
		TAPISTR_50						OrderSystemNo;					///< 系统号
		TAPISTR_50						OrderExchangeSystemNo;			///< 交易所系统号
		TAPISTR_20						OrderInsertUserNo;				///< 下单人
		TAPIDATETIME					OrderInsertTime;				///< 下单时间
		TAPIOrderStateType				OrderState;						///< 委托状态
		
	};

	//!客户组合持仓查询请求结构
	struct TapAPICombinePositionQryReq
	{
		TAPISTR_20						AccountNo;						///< 客户资金帐号
	};
	//!客户组合持仓信息
	struct TapAPICombinePositionInfo
	{
		TAPISTR_20						AccountNo;						///< 客户资金帐号

		TAPIUINT32						PositionStreamID;				///< 组合持仓流号
		TAPICHAR						ServerFlag;						///< 服务器标识
		TAPISTR_10						UpperNo;						///< 上手号
		TapAPICombineStrategyType       CombineStrategy;				///< 组合策略代码
		TAPISTR_50						CombineNo;						///< 组合编码
		TAPIUINT32						PositionQty;					///< 委托数量

		TAPISTR_10						ExchangeNo;						///< 交易所编号
		TAPICommodityType				CommodityType;					///< 品种类型
		TAPISTR_10						CommodityNo;					///< 品种编码

		TAPISTR_10						ContractNo;						///< 合约1
		TAPISTR_10						StrikePrice;					///< 执行价格1
		TAPICallOrPutFlagType			CallOrPutFlag;					///< 看张看跌1
		TAPISideType					OrderSide1;						///< 买卖方向1
		TAPIUINT32						CombineQty1;					///< 组合数量1
		TAPIHedgeFlagType				HedgeFlag1;						///< 投机备兑1
		TAPISTR_10						ContractNo2;					///< 合约2
		TAPISTR_10						StrikePrice2;					///< 执行价格2
		TAPICallOrPutFlagType			CallOrPutFlag2;					///< 看张看跌2
		TAPISideType					OrderSide2;						///< 买卖方向2
		TAPIUINT32						CombineQty2;					///< 组合数量2
		TAPIHedgeFlagType				HedgeFlag2;						///< 投机备兑2

		TAPISTR_10						CommodityCurrencyGroup;			///< 品种币种组
		TAPISTR_10						CommodityCurrency;				///< 品种币种

		TAPIREAL64						AccountInitialMargin;			///< 初始组合保证金
		TAPIREAL64						AccountMaintenanceMargin;		///< 维持组合保证金
		TAPIREAL64						UpperInitialMargin;				///< 上手初始组合保证金
		TAPIREAL64						UpperMaintenanceMargin;			///< 上手维持组合保证金
	};

	//=============================================================================
	//!用户信任设备查询请求结构
	struct TapAPIUserTrustDeviceQryReq
	{
	};
	//用户信任设备查询应答结构
	struct TapAPIUserTrustDeviceQryRsp
	{
		TAPISTR_20						UserNo;							///< 登录账号
		TAPISTR_50						LicenseNo;						///< 软件授权码
		TAPISTR_50						Mac;							///< MAC
		TAPISTR_50						DeviceName;						///< 设备名称
		TAPISTR_20						OperatorNo;						///< 操作员
		TAPIDATETIME					OperateTime;					///< 操作时间
	};

	//用户信任设备增加请求结构
	struct TapAPIUserTrustDeviceAddReq
	{

	};
	typedef TapAPIUserTrustDeviceQryRsp TapAPIUserTrustDeviceAddRsp;

	//用户信任设备增加删除结构
	struct TapAPIUserTrustDeviceDelReq
	{
		TAPISTR_50						LicenseNo;						///< 软件授权码
		TAPISTR_50						Mac;							///< MAC
	};
	typedef TapAPIUserTrustDeviceDelReq TapAPIUserTrustDeviceDelRsp;

	//=============================================================================
	//基础IPO信息查询请求结构
	struct TapAPIIPOInfoQryReq
	{
	};
	//基础IPO信息查询应答结构
	struct TapAPIIPOInfoQryRsp
	{
		TAPISTR_10							ExchangeNo;							///<市场或者交易所代码
		TAPICommodityType					CommodityType;						///<品种类型
		TAPISTR_10							CommodityNo;						///<品种号
		TAPISTR_10							CurrencyGroupNo;					///<币种组
		TAPISTR_10							CurrencyNo;							///<币种
		TAPIDATETIME                        BeginDate;                          ///<申购开始日期
		TAPIDATETIME                        EndDate;                            ///<申购结束日期
		TAPIDATETIME                        IPODate;                            ///<IPODate
		TAPIDATETIME                        ResultDate;                         ///<中签日
		TAPIREAL64							IPOFee;                             ///<IPO手续费
		TAPIREAL64							FinancingFee;                       ///<融资手续费
		TAPIREAL64							LoanRatio;                          ///<融资利率
		TAPIUINT32							FinancingDays;                      ///<融资天数
		TAPIREAL64							MaxLoanRatio;                       ///<最高融资比例
		TAPIREAL64							MaxLoanValue;                       ///<最高融资金额
		TAPIREAL64							Price;                              ///<认购/配售价
		TAPISTR_20							OperatorNo;
		TAPIDATETIME						OperateTime;
	};

	//=============================================================================
	//可申购股数查询请求结构
	struct TapAPIAvailableApplyQryReq
	{

		TAPISTR_10							ExchangeNo;							///<市场或者交易所代码
		TAPICommodityType					CommodityType;						///<品种类型
		TAPISTR_10							CommodityNo;						///<品种号
	};
	//可申购股数查询应答结构
	struct TapAPIAvailableApplyQryRsp
	{
		TAPISTR_10							ExchangeNo;							///<市场或者交易所代码
		TAPICommodityType					CommodityType;						///<品种类型
		TAPISTR_10							CommodityNo;						///<品种号
		TAPIUINT32							StockQty;                           ///<可申购股数
	};

	//=============================================================================
	//申购方式
	typedef TAPICHAR					TapAPIApplyTypeType;
	//现金申购
	const TapAPIApplyTypeType              TAPI_APPLYTYPE_CASH = '1';
	//融资申购
	const TapAPIApplyTypeType              TAPI_APPLYTYPE_LOAN = '2';

	//申购状态
	typedef TAPICHAR					TapAPIApplyStatusType;	
	//已发送
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_APPLY = '0';
	//申购失败
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_FAIL = '1';
	//待申报
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_WAIT = '2';
	//已撤销
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_CANCEL = '3';
	//已申报
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_DONE = '4';
	//未中签
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_NOLUCKY = '5';
	//中签
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_LUCKY = '6';
	//待撤销
	const TapAPIApplyStatusType            TAPI_APPLYSTAUTS_WAITCANCEL	= '7';
	//=============================================================================

	//客户IPO查询请求
	struct TapAPIAccountIPOQryReq
	{
		TAPISTR_20                    AccountNo;
	};
	//客户IPO查询应答
	struct TapAPIAccountIPOQryRsp
	{
		TAPIDATETIME                        EndDate;                            ///<申购结束日期
		TAPIDATETIME                        ResultDate;                         ///<中签日
		TAPIDATETIME                        IPODate;
		TAPISTR_20							AccountNo;
		TAPISTR_10							ExchangeNo;							///<市场或者交易所代码
		TAPICommodityType					CommodityType;						///<品种类型
		TAPISTR_10							CommodityNo;						///<品种号

		TapAPIApplyTypeType                 ApplyType;                          ///<申购类型
		TAPIUINT32							ApplyQty;                           ///<申购数量
		TAPIREAL64							ApplyCash;                          ///<申购金额
		TAPIREAL64							LoanRatio;                          ///<融资比例
		TAPIREAL64							LoanInterest;                       ///<融资利息
		TAPIREAL64							ApplyFee;                           ///<申购手续费
		TapAPIApplyStatusType               ApplyStatus;                        ///<申购状态
		TAPIUINT32							ResultQty;							///<中签量
		TAPISTR_20							OperatorNo;
		TAPIDATETIME						OperateTime;
	};

	//客户IPO增加请求
	struct TapAPIAccountIPOAddReq
	{
		TAPISTR_20							AccountNo;
		TAPISTR_10							ExchangeNo;							///<市场或者交易所代码
		TAPICommodityType					CommodityType;						///<品种类型
		TAPISTR_10							CommodityNo;						///<品种号

		TapAPIApplyTypeType                 ApplyType;                          ///<申购类型
		TAPIUINT32							ApplyQty;                           ///<申购数量
		TAPIREAL64							LoanRatio;                          ///<融资比例
	};
	//客户IPO增加应答
	typedef TapAPIAccountIPOQryRsp TapAPIAccountIPOAddRsp;

	//客户IPO撤销请求
	struct TapAPIAccountIPOCancelReq
	{
		TAPISTR_20							AccountNo;
		TAPISTR_10							ExchangeNo;							///<市场或者交易所代码
		TAPICommodityType					CommodityType;						///<品种类型
		TAPISTR_10							CommodityNo;						///<品种号
	};
	//客户IPO撤销应答
	typedef TapAPIAccountIPOQryRsp TapAPIAccountIPOCancelRsp;
	//客户IPO增加通知
	typedef TapAPIAccountIPOQryRsp TapAPIAccountIPOAddNotice;
	//客户IPO撤销通知
	typedef TapAPIAccountIPOQryRsp TapAPIAccountIPOCancelNotice;

	//=============================================================================
    //密码操作类型
    typedef char					TapAPIPasswordOpreateTypeType;
    //自助解冻
    const TapAPIPasswordOpreateTypeType		TAPI_OPERATE_UNFREEZE = '1';
    //重置密码
    const TapAPIPasswordOpreateTypeType		TAPI_OPERATE_RESET = '2';

    //! 自助密码信息处理请求
    struct TapAPISelfPasswordInfoOperateReq
    {
        TAPISTR_20					        UserNo;							    ///< 用户编号
        TapAPIPasswordOpreateTypeType       OpreateType;                        ///< 密码操作类型
    };

    //! 重置密码请求
    struct TapAPIResetPasswordReq
    {
        TAPISTR_20						    NewPassword;							///<新密码
    };

    //=============================================================================
	//证件类型
	typedef char					TapAPICertificateTypeType;
	//内地身份证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_MAINLANDID = '1';
	//军官证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_MILITARYCARD = '2';
	//警官证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_POLICECARD = '3';
	//士兵证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_SOLDIERID = '4';
	//户口簿
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_ACCOUNTBOOK = '5';
	//中国护照/内地港澳通行证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_PASSPORT_CHINESE = '6';
	//台胞证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_MTPS = '7';
	//回乡证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_HOMERETURN = '8';
	//营业执照
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_BUSINESSLICENSE = '9';
	//企业法人代码证书
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_ENTERPRISELEGALPESON = 'A';
	//其他身份证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_OTHERID = 'B';
	//其他国家/地区护照
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_PASSPORT_OTHER = 'C';
	//其他证件
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_OTHER = 'x';
	//商业登记证
	const TapAPICertificateTypeType		TAPI_CERTIFICATE_BUSINESSREGISTRATION = 'R';

	typedef char	TapAPIContactContentType[201];
	//身份验证请求
	struct TapAPIVerifyIdentityReq
	{
		TapAPICertificateTypeType				CertificateType;					//证件类型
		TAPISTR_50								CertificateNo;						//证件号码
		TapAPIContactContentType				EMail;								//电子邮箱账号
		TapAPIContactContentType				PhoneNo;							//手机号
	};
    //=============================================================================

    //交易所交易状态
    typedef char					TapAPITTradingStateType;
    //集合竞价
    const TapAPITTradingStateType		TAPI_TRADESTATE_BID = '1';
    //集合竞价撮合
    const TapAPITTradingStateType		TAPI_TRADESTATE_MATCH = '2';
    //连续交易
    const TapAPITTradingStateType		TAPI_TRADESTATE_CONTINUOUS = '3';
    //交易暂停
    const TapAPITTradingStateType		TAPI_TRADESTATE_PAUSED = '4';
    //闭市
    const TapAPITTradingStateType		TAPI_TRADESTATE_CLOSE = '5';

   //交易所状态查询请求
    struct TapAPIExchangeStateInfoQryReq
    {

    };
    //交易所状态查询应答
    struct TapAPIExchangeStateInfoQryRsp
    {
        TAPISTR_10							    ExchangeNo;							///<市场或者交易所代码
        TAPICommodityType					    CommodityType;						///<品种类型
        TAPISTR_10							    CommodityNo;						///<品种号
        TAPIDATETIME					        ExchangeTime;	                    ///<交易所时间
        TapAPITTradingStateType				    TradingState;		                ///<交易所状态
        TAPISTR_20							    OperatorNo;
        TAPIDATETIME						    OperateTime;

    };

    //交易所状态增加通知
    typedef TapAPIExchangeStateInfoQryRsp TapAPIExchangeStateInfoAddNotice;

#pragma pack(pop)
}
#endif //TAP_TRADE_API_DATA_TYPE_H