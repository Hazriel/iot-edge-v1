// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once

#include "pch.h"
#include "..\..\..\core\inc\broker.h"

namespace Microsoft { namespace Azure { namespace IoT { namespace Gateway {

	interface class IGatewayModule;
	ref class Message;

	public ref class Broker sealed
	{
	internal:
		Broker(BROKER_HANDLE handle, MODULE_HANDLE module_handle)
		{ 
			this->broker_handle = handle;
			this->module_handle = module_handle;
		}

	public:
		void Publish(Message ^message);

	private:
		BROKER_HANDLE broker_handle;
		MODULE_HANDLE module_handle;
	};

}}}};
