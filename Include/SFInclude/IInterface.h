/********************************************************************
	创建日期:	2016/06/25
	文 件 名:	IInterface
	扩 展 名:	h
	作    者:	zz
	
	说    明:	组件间接口定义类,所有组件间接口应继承实现本接口
*********************************************************************/

#ifndef __IINTERFACE_H__
#define __IINTERFACE_H__

#include <string>

class IInterface
{
public:

	/************************************************************************
	*名  称：获取接口标识 
	*说  明：实现时直接返回接口标识
	*参  数：无                                                                    
	*返回值：接口标识
	************************************************************************/
	virtual std::string GetInterfaceID() = 0;

	/************************************************************************
	*名  称：获取接口描述 
	*说  明：实现时直接返回接口描述
	*参  数：无                                                                    
	*返回值：接口描述
	************************************************************************/
	virtual std::string GetInterfaceDescription() = 0;

	/************************************************************************
	*名  称：获取接口版本号 
	*说  明：实现时直接返回接口版本号,例如:V1.00
	*参  数：无                                                                    
	*返回值：接口版本号
	************************************************************************/
	virtual std::string GetInterfaceVersion() = 0;
};

#endif