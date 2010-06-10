// Svc.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include "Service.h"


int _tmain(int argc, _TCHAR* argv[])
{		
	
	printf("SVCLoader by fUsHji\n");
	printf("-------------------\n");

	if (argc != 4){
		printf("Usage: svcloader.exe DriverFilePath ServiceName SvcDisplayName\n");
		return 1;
	}

	CService svc(argv[1],argv[2],argv[3],SERVICE_DEMAND_START);

	if (svc.CreateSvc() == SVC_OK)
		printf("Service creation: OK.\n");
	else{
		printf("Service creation: FAILD.\n");
		return 1;
	}

	if (svc.StartSvc() == SVC_OK)
		printf("Service startup: OK.\nPress key to stop...\n");
		
	else{
		printf("Service startup: FAILD.\n");
		return 1;
	}
	
	getchar();

	if (svc.StopSvc() == SVC_OK)
		printf("Service stop: OK.\n");
	else{
		printf("Service stop: FAILD.\n");
		return 1;
	}

	if (svc.UnloadSvc() == SVC_OK)
		printf("Service unload: OK.\n");
	else{
		printf("Service unload: FAILD.\n");
		return 1;
	}

	return 0;
}

