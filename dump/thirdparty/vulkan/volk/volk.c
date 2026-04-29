
//
// thirdparty/vulkan/volk/volk.c
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 15
//

// <00D45275> ../thirdparty/vulkan/volk/volk.c:71
PFN_vkVoidFunction vkGetInstanceProcAddrStub(void* context, const char* name)
{
} /* size: 10 */

// <00D452C6> ../thirdparty/vulkan/volk/volk.c:76
PFN_vkVoidFunction vkGetDeviceProcAddrStub(void* context, const char* name)
{
} /* size: 10 */

// <00D45317> ../thirdparty/vulkan/volk/volk.c:81
PFN_vkVoidFunction nullProcAddrStub(void* context, const char* name)
{
} /* size: 0 */

// <00D44E32> ../thirdparty/vulkan/volk/volk.c:134
// function calls: 5
void volkInitializeCustom(PFN_vkGetInstanceProcAddr handler)
{
	vkGetInstanceProcAddrStub(void* context,
					const char* name);  // 215
	vkGetInstanceProcAddrStub(void* context,
					const char* name);  // 216
	vkGetInstanceProcAddrStub(void* context,
					const char* name);  // 217
	vkGetInstanceProcAddrStub(void* context,
					const char* name);  // 220
	volkGenLoadLoader(void* context,
				PFN_vkVoidFunction (*load)(void *, const char *));  // 139
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00D44D7D> ../thirdparty/vulkan/volk/volk.c:142
// function call: 1
void volkFinalize(void)
{
	volkGenLoadLoader(void* context,
				PFN_vkVoidFunction (*load)(void *, const char *));  // 154
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00D44D26> ../thirdparty/vulkan/volk/volk.c:163
// variable: 1
uint32_t volkGetInstanceVersion(void)
{
	uint32_t apiVersion; // 166
} /* size: 0, variables: 1 */

// <00D44C4D> ../thirdparty/vulkan/volk/volk.c:184
void volkLoadInstanceOnly(VkInstance instance)
{
} /* size: 0 */

// <00D44C2C> ../thirdparty/vulkan/volk/volk.c:190
VkInstance volkGetLoadedInstance(void)
{
} /* size: 0 */

// <00D44BB2> ../thirdparty/vulkan/volk/volk.c:201
VkDevice volkGetLoadedDevice(void)
{
} /* size: 0 */

// <00D44B3C> ../thirdparty/vulkan/volk/volk.c:206
void volkLoadDeviceTable(VolkDeviceTable* table, VkDevice device)
{
} /* size: 0 */

// <00D44B16> ../thirdparty/vulkan/volk/volk.c:211
void volkGenLoadLoader(void* context, PFN_vkVoidFunction (*load)(void *, const char *))
{
} /* size: 0 */

// <00D43DE0> ../thirdparty/vulkan/volk/volk.c:225
void volkGenLoadInstance(void* context, PFN_vkVoidFunction (*load)(void *, const char *))
{
} /* size: 1763 */

// <00D3ECBB> ../thirdparty/vulkan/volk/volk.c:443
void volkGenLoadDevice(void* context, PFN_vkVoidFunction (*load)(void *, const char *))
{
} /* size: 10940 */

// <00D45343> ../thirdparty/vulkan/volk/volk.c:1355
// function calls: 575
void volkGenLoadDeviceTable(VolkDeviceTable* table, void* context, PFN_vkVoidFunction (*load)(void *, const char *))
{
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1359
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1360
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1361
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1362
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1363
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1364
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1365
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1366
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1367
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1368
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1369
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1370
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1371
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1372
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1373
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1374
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1375
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1376
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1377
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1378
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1379
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1380
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1381
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1382
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1383
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1384
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1385
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1386
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1387
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1388
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1389
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1390
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1391
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1392
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1393
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1394
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1395
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1396
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1397
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1398
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1399
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1400
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1401
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1402
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1403
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1404
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1405
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1406
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1407
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1408
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1409
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1410
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1411
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1412
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1413
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1414
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1415
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1416
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1417
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1418
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1419
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1420
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1421
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1422
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1423
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1424
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1425
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1426
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1427
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1428
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1429
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1430
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1431
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1432
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1433
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1434
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1435
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1436
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1437
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1438
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1439
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1440
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1441
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1442
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1443
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1444
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1445
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1446
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1447
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1448
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1449
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1450
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1451
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1452
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1453
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1454
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1455
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1456
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1457
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1458
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1459
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1460
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1461
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1462
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1463
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1464
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1465
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1466
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1467
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1468
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1469
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1470
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1471
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1472
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1473
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1474
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1475
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1476
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1477
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1478
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1481
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1482
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1483
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1484
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1485
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1486
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1487
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1488
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1489
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1490
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1491
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1492
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1493
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1494
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1495
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1496
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1499
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1500
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1501
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1502
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1503
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1504
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1505
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1506
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1507
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1508
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1509
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1510
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1511
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1514
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1515
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1516
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1517
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1518
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1519
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1520
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1521
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1522
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1523
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1524
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1525
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1526
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1527
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1528
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1529
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1530
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1531
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1532
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1533
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1534
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1535
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1536
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1537
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1538
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1539
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1540
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1541
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1542
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1543
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1544
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1545
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1546
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1547
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1548
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1549
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1552
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1553
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1554
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1555
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1556
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1557
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1558
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1559
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1560
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1561
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1562
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1563
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1564
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1565
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1566
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1567
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1568
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1569
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1570
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1573
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1574
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1575
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1576
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1577
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1578
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1579
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1582
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1585
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1588
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1591
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1594
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1595
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1598
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1605
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1608
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1611
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1614
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1617
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1618
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1621
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1622
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1623
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1624
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1625
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1628
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1631
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1632
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1633
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1634
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1635
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1636
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1637
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1638
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1639
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1640
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1643
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1646
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1649
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1650
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1651
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1652
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1653
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1654
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1655
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1656
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1657
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1660
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1663
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1664
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1667
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1668
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1669
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1670
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1673
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1683
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1686
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1687
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1688
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1689
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1692
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1695
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1698
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1701
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1702
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1705
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1711
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1712
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1715
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1716
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1717
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1718
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1719
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1720
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1721
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1722
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1723
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1724
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1725
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1726
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1727
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1728
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1731
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1734
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1737
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1738
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1739
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1740
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1743
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1746
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1747
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1750
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1751
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1752
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1753
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1756
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1759
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1760
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1761
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1762
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1763
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1764
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1767
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1768
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1769
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1770
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1788
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1789
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1792
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1793
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1796
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1799
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1802
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1805
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1806
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1807
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1808
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1809
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1810
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1811
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1812
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1813
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1816
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1817
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1818
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1819
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1820
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1821
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1822
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1823
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1824
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1825
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1826
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1827
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1828
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1829
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1830
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1831
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1834
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1835
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1838
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1839
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1840
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1843
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1846
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1847
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1848
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1849
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1850
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1851
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1854
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1855
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1856
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1857
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1860
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1861
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1862
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1863
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1864
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1867
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1868
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1869
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1872
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1873
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1874
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1877
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1880
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1881
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1884
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1885
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1888
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1889
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1892
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1893
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1900
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1901
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1908
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1909
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1916
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1919
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1920
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1921
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1924
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1927
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1930
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1933
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1934
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1935
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1938
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1939
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1940
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1941
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1944
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1945
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1948
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1949
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1952
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1953
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1956
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1957
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1960
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1961
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1964
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1965
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1966
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1967
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1968
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1971
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1972
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1973
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1976
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1979
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1982
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1985
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1986
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1987
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1988
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1989
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1990
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1991
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1994
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1995
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 1998
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2001
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2002
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2003
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2004
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2005
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2008
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2009
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2010
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2011
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2012
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2013
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2016
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2017
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2018
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2021
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2024
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2025
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2028
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2029
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2030
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2031
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2032
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2033
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2034
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2035
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2036
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2037
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2040
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2041
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2042
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2043
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2044
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2047
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2050
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2053
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2056
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2059
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2060
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2063
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2064
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2065
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2066
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2067
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2068
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2071
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2072
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2075
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2078
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2079
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2080
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2081
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2082
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2083
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2086
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2087
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2088
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2091
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2097
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2100
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2101
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2102
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2103
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2104
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2107
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2108
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2111
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2112
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2115
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2118
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2119
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2120
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2121
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2124
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2125
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2126
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2127
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2128
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2129
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2130
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2131
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2132
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2133
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2134
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2135
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2138
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2141
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2144
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2145
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2146
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2149
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2150
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2156
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2157
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2160
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2163
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2164
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2165
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2166
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2167
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2168
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2169
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2170
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2171
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2172
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2173
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2174
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2177
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2178
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2179
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2180
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2181
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2184
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2185
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2186
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2187
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2188
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2189
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2190
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2191
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2192
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2193
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2196
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2199
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2202
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2203
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2206
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2209
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2212
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2215
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2218
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2219
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2222
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2225
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2228
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2231
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2232
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2235
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2236
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2237
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2240
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2243
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2246
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2249
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2252
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2255
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2258
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2259
	vkGetDeviceProcAddrStub(void* context,
				const char* name);  // 2262
} /* size: 0, inline expansions: 575 (0 bytes) */

// <00D3EC65> ../thirdparty/vulkan/volk/volk.c:1355
void volkGenLoadDeviceTable(VolkDeviceTable* table, void* context, PFN_vkVoidFunction (*load)(void *, const char *))
{
} /* size: 0 */

