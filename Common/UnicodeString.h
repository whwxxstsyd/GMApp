

#ifndef UNICODESTRING_H
#define UNICODESTRING_H

typedef enum _UNICODE_LANG_ID 
{
	LANG_HEBREW,
	LANG_CNT
}UNICODE_LANG_ID;

#define HEBREW_STR_HEIGHT	15
typedef enum _HEBREW_STR_ID
{
		HS_ID_CHINESE,//中文
		HS_ID_GATEOVERTIMEALARM,//开门超时报警
		HS_ID_INVALIDCARDSWIPEALARM,//无效刷卡报警
		HS_ID_INFRAREDALARM,//红外报警
		HS_ID_ALARMCANCEL,//报警已取消
		HS_ID_ACCESSSYSSETTINGS,//门禁系统设置
		HS_ID_CARDMANAGE,//卡管理
		HS_ID_DOORPARASETTINGS,//门参数设置
		HS_ID_OPENMODESETTINGS,//开门模式设置
		HS_ID_ADDRESIDENTCARD,//新增住户卡
		HS_ID_ADDPATROLCARD,//新增巡更卡
		HS_ID_ADDAUTHCARD,//新增授权卡
		HS_ID_DELECARD,//删除卡
		HS_ID_BYCARD,//卡方式
		HS_ID_BYROOM,//房间号方式
		HS_ID_BYLOCNUM,//本地编号方式
		HS_ID_OPENOVERTIME,//开门超时
		HS_ID_INVALIDCARD,//无效刷卡
		HS_ID_MANUALSWITCH,//手动开关
		HS_ID_INFRAREDALARM_2,//红外报警
		HS_ID_RESCODEPSW,//房间号+密码
		HS_ID_CARDPSW,//卡+密码
		HS_ID_CARD,//卡
		HS_ID_GATEOVERTIMETIMEMODIED,//开门超时时间已修改
		HS_ID_GATEOVERTIMEALARMISENABLED,//开门超时报警已启动
		HS_ID_GATEOVERTIMEALARMISDISABLED,//开门超时报警已关闭
		HS_ID_GATEOVERTIMECONTACTOROPENED,//开门超时触点开
		HS_ID_GATEOVERTIMECONTACTORCLOSED,//开门超时触点关
		HS_ID_ALARMON,//报警开启
		HS_ID_ALARMOFF,//报警关闭
		HS_ID_NFRAREDTIMEMODIED,//红外检测时间已修改
		HS_ID_INFRAREDALARMISENABLED,//红外报警已启动
		HS_ID_INFRAREDALARMISDISABLED,//红外报警已关闭
		HS_ID_INFRAREDCONTACTOROPENED,//红外触点开
		HS_ID_INFRAREDCONTACTORCLOSED,//红外触点关
		HS_ID_ALARMON_2,//报警开启
		HS_ID_ALARMOFF_2,//报警关闭
		HS_ID_CONTACTORON,//开触点
		HS_ID_CONTACTOROFF,//闭触点
		HS_ID_GATEPULSEWIDTHMODFYED,//门磁脉冲宽度已修改
		HS_ID_INVALIDSWIPETIMEMODIED,//无效刷卡次数已修改
		HS_ID_INVALIDSWIPEALARMISENABLED,//无效刷卡报警已启动
		HS_ID_INVALIDSWIPEALARMISDISABLED,//无效刷卡报警已关闭
		HS_ID_ALARMON_3,//报警开启
		HS_ID_ALARMOFF_3,//报警关闭
		HS_ID_MANOPENENABLED,//手动开关已启用
		HS_ID_MANOPENDISABLED,//手动开关已关闭
		HS_ID_ENTERFUNNUM,//请输入功能码
		HS_ID_PRESSENTER,//按#键确认
		HS_ID_CONFDELETE,//确认删除吗
		HS_ID_PRESSHELP,//按#查看帮助
		HS_ID_NETFAIL,//网络故障
		HS_ID_ENTERRESNUM,//请输入房间号 按#键确认
		HS_ID_ENTERCALLOCODE,//请输入房间号 
		HS_ID_CALLOUT,//正在呼叫
		HS_ID_MC,//管理中心
		HS_ID_CONVERTIME,//通话中…
		HS_ID_REMAINING,//Remaining…
		HS_ID_SECONDS,//秒
		HS_ID_MCCALLIN,//管理中心正在呼入
		HS_ID_CGMCALLIN,//大门机正在呼入
		HS_ID_HVCALLIN,//室内机正在呼入
		HS_ID_PRESSANSWER,//按*接听
		HS_ID_LINEBUSY,//线路忙
		HS_ID_TRYAGAIN,//请稍后重试
		HS_ID_CALLEND,//取消呼叫
		HS_ID_CONVEREND,//通话结束
		HS_ID_NOANSWER,//无人应答 
		HS_ID_ANSWERLATER,//请稍后再呼
		HS_ID_IMGCAP,//正在留图
		HS_ID_NOTREGISTER,//房间号未注册
		HS_ID_GATEUNLOCK,//开锁成功
		HS_ID_PATROLCARD,//巡更卡
		HS_ID_IPADDRESS,//IP地址:
		HS_ID_PHYADDRESS,//物理地址:
		HS_ID_ENTERROR,//输入有误
		HS_ID_FUNISNOTEN,//功能未开通
		HS_ID_CARDISNOTAU,//卡未授权
		HS_ID_AUTHORIZEDCARD,//授权卡
		HS_ID_CARDISNOTENABLED,//卡被禁用
		HS_ID_CARDEXPIRED,//卡不在有效期
		HS_ID_ETRPWD,//请输入密码 按#键确认
		HS_ID_ETRULKPWD,//请输入开锁密码
		HS_ID_ETRPATRULKPWD,//巡更卡,请输入开锁密码
		HS_ID_PWDINCORRECT,//密码错误
		HS_ID_SWIPECARD,//请刷卡
		HS_ID_ENTEROLDPSW,//请输入旧密码 按#键确认
		HS_ID_OLDPSWERR,//旧密码错误
		HS_ID_ENTERNEWPSW,//请输入新密码
		HS_ID_PSWDIGITERROR,//密码位数错误
		HS_ID_ENTERNEWPSWAG,//请再次输入新密码
		HS_ID_PSWDIFF,//密码不一致
		HS_ID_INPUTAG,//请重新输入
		HS_ID_PSWMODIFYOK,//密码修改成功
		HS_ID_PRESSEXIT,//按*退出
		HS_ID_CARDHASREG,//卡已注册
		HS_ID_CARDREGISTERED,//卡注册成功
		HS_ID_ENTERLOCID,//请输入本地编号 按#键确认
		HS_ID_IDHASREG,//ID号已注册
		HS_ID_RDNUMNTEX,//房间号不存在
		HS_ID_CARDDELETED,//卡删除成功
		HS_ID_CARDHASDELETED,//卡已删除
		HS_ID_TEST101,//请输入本地编号 按#键确认
		HS_ID_ID_NOTREGISTERED,//ID号未注册
		HS_ID_ETRVLDSTATIME,//请输入有效起始日期 按#键确认
		HS_ID_ETRVLDENDTIME,//请输入有效终止日期 按#键确认
		HS_ID_ETRSYSPWD,//请输入系统密码 按#键确认
		HS_ID_ROOMCODE_NO_CARD,//房间号未注册卡
		HS_ID_CALLPRESSCODE,//呼叫住户请直接按房间号
		HS_ID_CALLPRESS00,//呼叫管理中心请按00
		HS_ID_TEST109,//中文
		HS_ID_ENGLISH_SELED,//中文已选择
		HS_ID_SYSSETTINGS,//系统配置
		HS_ID_TALKSETTINGS,//通话设置
		HS_ID_ENTRYSETTINGS,//开门设置
		HS_ID_ACCESSSETTINGS,//门禁设置
		HS_ID_SYSINFO,//系统信息
		HS_ID_RESETSETTINGS,//出厂设置
		HS_ID_IP,//IP地址
		HS_ID_NETMASK,//子网掩码
		HS_ID_IPMODIFYED,//IP已修改
		HS_ID_PLEASERESTART,//请重启
		HS_ID_NETMASKMODIFYED,//子网掩码已修改
		HS_ID_RINGTIMEMODFYED,//振铃时间已修改
		HS_ID_MODIFYED,//房间号有效位已修改
		HS_ID_LANGUAGE,//语言
		HS_ID_NETWORK,//网络
		HS_ID_MODIFYPSW,//修改密码
		HS_ID_TAMPERALARM,//防拆报警
		HS_ID_TEST128,//硬件版本号
		HS_ID_TEST129,//软件版本号
		HS_ID_TEST130,//产品编号
		HS_ID_VALIDROOMNUM,//房间号有效位
		HS_ID_TALKTIME,//通话时间
		HS_ID_RINGTIME,//振铃时间
		HS_ID_SURE,//确认吗?
		HS_ID_CONFIRM,//按#确认
		HS_ID_PRESSOTHER,//按其他键退出
		HS_ID_RESTORE,//按#系统还原
		HS_ID_PRESSOTHER2,//按其它键返回
		HS_ID_TALKTIMEMODED,//通话时间已修改
		HS_ID_INVALIDCARDSWIPEALARM_2,//无效刷卡报警
		HS_ID_TAMPERALARM_2,//防拆报警
		HS_ID_GATEOVERTIMEALARM_2,//开门超时报警
		HS_ID_INFRAREDALARM_3,//红外报警
		HS_ID_TAMPER_OPEN_ALARM,//防拆+开门超时报警
		HS_ID_TAMPER_INFRARED_ALARM,//防拆+红外报警
		HS_ID_OPEN_INFRARED_ALARM,//开门超时+红外报警
		HS_ID_ALARM_ALL,//防拆+开门+红外报警
		HS_ID_ALARMCONFIRM,//报警已确认
		HS_ID_TEST149,//hebrew
		HS_ID_HEBREW_SELED,//hebrew selected
		HS_ID_LANG_CHINESE,//Chinese
		HS_ID_LANG_ENGLISH,//English
		HS_ID_LANG_HEBREW,//Hebrew
		HS_ID_LANG_CHINESE_SELED,//Chinese Selected
		HS_ID_LANG_RESTART_CN,
		HS_ID_ON,//开启
		HS_ID_OFF,//close
		HS_ID_INVALID_IP,//Invalid IP
		HS_ID_CNT,
}HEBREW_STR_ID;

#endif


