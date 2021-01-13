/************************************************************************************************************************************************************
*		Файл: freeRTOS_tasks.h
*		Версия/дата: v1.00/13.01.2021
*		Наименование проекта:
*		Разработал: Тимофеев Д.Г.
*		Организация:
*
*		Описание к файлу:
*
*
*		Примечания:
*
*
************************************************************************************************************************************************************/

#ifndef INC_FREERTOS_TASKS_H_
#define INC_FREERTOS_TASKS_H_

void freeRTOS_Tasks_Ini (void); // Функция создания задач freeRTOS. Задачи создаются из задачи idle task на запущенном планировщике.

void vTask_PCB_LED_Blink(void *pvParameters); // З-а мигания индикаторного светодиода.

void vTask_USB_Init(void *pvParameters); // З-а сброса лнии D+ после каждого запуска МК. Необхадимо для определения устройсва на шине USB.

void vTask_Transmit_VCP(void *pvParameters); // З-а переиодческой отправки сообщения в VCP. Задача должна быть запущена после удаления vTask_USB_Init.

void vTask_Transmit_VCP_2(void *pvParameters); // З-а переиодческой отправки сообщения №2 в VCP. Задача должна быть запущена после удаления vTask_USB_Init.

#endif /* INC_FREERTOS_TASKS_H_ */
