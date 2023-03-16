# Часы на основе матрицы на адресных светодиодах.

Создано по мотивам проекта [GyverMatrixOS](https://alexgyver.ru/gyvermatrixbt/)
и его портированной на ESP-8266 версии [GyverMatrixWiFi](https://github.com/vvip-68/GyverMatrixWiFi/).
К сожалению эти проекты не для работы в обычном, нудном, режиме часов. В результате появился этот проект.
Есть ещё развития проекта [GyverLamp](https://github.com/AlexGyver/GyverLamp) / [GyverPanelWiFi](https://github.com/vvip-68/GyverPanelWiFi/wiki) / [FireLamp](https://github.com/DmytroKorniienko/FireLamp_JeeUI), но у каждого есть свои нюансы, свои преимущества и недостатки, по этому - больше разных велосипедов!
В описаниях этих проектов есть много полезной информации по подключению, сборке как железной части, так и программной, полезно заглянуть на эти странички.
Отдельное спасибо [vvip-68](https://github.com/vvip-68), хоть я и не использовал его код, но большое число вспомогательных материалов и описаний очень помогли мне.
(UPD. Как я недавно выяснил эти все проекты вышли из "лампы на адресных светодиодах", по этому они и делают то на что изначально спроектированы - светят. 
Даже если матрицу развернули и придали форму панели или бегущей строки и нагрузили тонной дополнительных функций.)

## Возможности часов:
- Показывать время
- Выбор цветового оформления часов.
- Несколько будильников, которые можно настраивать на однократно, постоянный повтор или по дням недели.
- Выбор мелодии для каждого будильника.
- Бегущая строка - информатор. Несколько штук, для каждой можно настроить цветовое оформление и режим повтора.
- Резервное аккумуляторное питание. Во время пропадания основного питания экран включается только при срабатывании датчика движения.
- Использование датчика движения для информировании о постороннем присутствии (как датчик сигнализации) с отправкой уведомления в телеграмм.
- Использование датчика освещения как датчик сигнализации (резкое изменение освещения).
- Управление через Web. "Охранные" функции можно использовать через телеграмм.
- Автоматическое управление яркостью матрицы по освещённости. (экономит электричество и не режет глаза ночью)
- Возможность менять яркость матрицы по времени, в том числе по восходу/заходу солнца.
- Ограничение максимального потребления. Ночью потребление в автоматическом режиме снижается до 2,5Вт. Днём зависит от настроек и может достигать 70Вт. Ограничение по умолчанию - 12,5Вт.
- Минимальное число параметров жестко прописано в коде, большая часть настроек изменяется через Web.

## Управление:
Управление часами только через Web, так как бессмысленно управлять кучей опций парой кнопок. Однако есть одна кнопка и датчик движения. Датчик движения
используется для отключения будильника, что логично, раз кто-то ходит возле часов, значит он проснулся. А действия кнопки зависят от количества кликов:
- Показать дату в длинном формате, отключить будильник, отключить проверку матрицы.
- Включить проверку матрицы.
- Показать текущий IP, по которому можно подключится к часам.
- Показать текущие значения освещённости.
- Сбросить пароль на Web страничку.

Долгое нажатие - справка. Она контекстная, зависит от текущего режима.

## Особенности:
Проект делался под конкретные часы в конкретном месте по этому нет разнообразия в выборе функций или аппаратных компонентов.
При желании схему можно сократить только до одной матрицы, отключив DFPlayer и датчик питания в настройках, выставляя
уровень яркости в настройках, и даже кнопка не сильно нужна, ведь будильник и так не будет работать. Получатся максимально скучные часы.

Нет модуля часов реального времени и нет возможности ввести время вручную. Если нет WiFi, то часы работать не будут!
Нет автоматического перехода зимнее/летнее время, его так давно хотят отменить, что я не вижу в этом смысла.

Можно создать кнопку-ярлык на экране смартфона или даже создать "приложение chrome". Но есть нюанс. Иконка всегда подхватывается только в firefox,
а в броузерах родственниках chrome может подхватится, может нет, может в высоком качестве, может в низком...

IP адрес только автоматический. Не вижу смысла делать ручной ввод IP, если проще сделать его статическим в настройках роутера. При желании его
всегда можно посмотреть три раза нажав на кнопку.

Модуль MP3 (dfPlayer) иногда, очень редко, может перестать работать очень необычным образом - с точки зрения контроллера всё хорошо, команды отрабатываются, обратная связь есть, а звука нет. Как определить такой момент я не знаю. Привести в чувство можно или полной перезагрузкой часов или переключая режимы повтора в "мелодиях", пока модуль сам не перезагрузится. После долгого простоя медленно "запускается", по этому будильник начинает звонить +20/+90 секунд с момента активации. Скорее всего мне
попалась очередная китайская копия платы и с оригинальной таких проблем нет.

Датчик движения RCWL-0516 удобен тем, что имеет хорошую чувствительность и его легко спрятать внутри корпуса. Но проблема в том, что если часы находятся на стене,
то может срабатывать на соседей, за стеной. Если планируется использовать именно как датчик сигнализации, то есть смысл пожертвовать внешним видом и поставить
более распространённый инфракрасный датчик, код менять не надо.

Реальный опыт эксплуатации показал, что модуль часов, например DS3231, не лишний в часах, но его некуда было подключать, так как закончились выводы микроконтроллера. Длительные операции, например опрос сети, отдача страничек, запуск MP3 - тормозят вывод времени на матрицу. Картинка замирает. Надо было делать часы на модуле с ESP32. Там и выводов больше и два ядра, на одно можно вынести все длительные операции, второе оставить только для отображения времени. Программирование под ESP8266 и ESP32 достаточно сильно отличается, по этому написать универсальный код сложно, или он не будет использовать преимуществ ESP32.

## Схема:
[![Схема тут.](https://github.com/SerhiiLe/clock-esp8266-ws2812b/blob/main/clock_diagram.png)](https://github.com/SerhiiLe/clock-esp8266-ws2812b/blob/main/clock_diagram.pdf)

Не вошло в схему:
- Керамический конденсатор на 47пФ на питании датчика движения. Я не уверен, что он там нужен, впаял, в надежде улучшить стабильность срабатывания. Разницы не почувствовал.
- На задней стенке корпуса часов приклеил кусок фольги, напротив датчика движения. Срабатывание стало устойчивее, ложных срабатываний стало меньше.
- Номинал резистора в паре с фоторезистором я изначально взял из схем других проектов и был не прав. Напряжение на ногу А0 должно поступать 0-3.3V, 1кОм это мало. Для моего фоторезистора оказалось оптимальным 2.2кОм, иначе значения получаются слишком заниженными.
- Вначале я хотел прозрачный корпус, но после сборки оказалось, что у каждого модуля есть свой светодиод и в результате большая паразитная засветка. Пришлось закрывать.
- Звук имеет нормальную громкость, если отодвинуть корпус часов примерно на 5мм. На фото видны "ножки", которые и для крепёжа и для отодвигания от стенки.

Выглядит у меня примерно так:

![front](https://github.com/SerhiiLe/clock-esp8266-ws2812b/blob/main/clock_f.jpg)
![back](https://github.com/SerhiiLe/clock-esp8266-ws2812b/blob/main/clock_b.jpg)

(сборка не мой конёк, нож + термоклей не дадут шедевр эстетики)

[8x32 RGB WS2812B](https://ledplus.com.ua/ua/p1416606496-svetodiodnaya-matritsa-adresnaya.html),
[3PIN M/F](https://ledplus.com.ua/ua/p1511573942-konnektor-3pin-provodami.html),
[WiFi NodeMCU Lua V3](https://ledplus.com.ua/ua/p1013294902-modul-wifi-nodemcu.html) или [Wemos D1 mini](https://ledplus.com.ua/ua/p1162788418-plata-razrabotki-wemos.html),
[MP3-TF-16P](https://ledplus.com.ua/ua/p1219714846-modul-plejera-mp3.html),
[RCWL-0516](https://ledplus.com.ua/ua/p1259627889-datchik-dvizheniya-mikrovolnovyj.html),
[TTP223B](https://ledplus.com.ua/ua/p1121404110-modul-sensornaya-knopka.html),
[Модуль реле](https://ledplus.com.ua/ua/p1284992864-modul-rele-high.html),
[TP4056](https://ledplus.com.ua/ua/p1307577265-modul-zaryadki-tp4056.html),
[остальное](https://www.k206.net/catalog/)

## Сборка:
Проект собирается с помощью [PlatformIO](https://platformio.org/)

Для сборки проекта понадобится следующее:

Установить [IDE Visual Studio Code](https://code.visualstudio.com/), и в качестве плагина к ней установить [PlatformIO](https://platformio.org/). О том как это сделать можно найти массу роликов на youtube, например [этот](https://www.youtube.com/watch?v=NSljt17mg74). Чтобы в окне редактора не рябило от квадратиков, надо в настройках найти опцию "editor.unicodeHighlight.ambiguousCharacters" и снять галочку.

Скачать [архив](https://github.com/SerhiiLe/clock-esp8266-ws2812b/archive/refs/heads/main.zip) и распаковать его в папку проектов [PlatformIO](https://platformio.org/).
Где эта папка окажется в Вашей системе я не знаю. У меня к примеру это ~/Documents/PlatformIO/Projects/

Нужные библиотеки добавлены как зависимости и должны установится автоматически при первой сборке.

Возможно понадобится правка файла platformio.ini под Вашу систему.

Если Ваша схема отличается или хочется что-то подкрутить под себя, то это делается в файле include/defines.h Настройки по умолчанию, которые затем меняются в настройках
находятся в include/settings_init.h

Компиляция и загрузка в микроконтроллер нажатием на стрелочку "PlatformIO:Upload" в нижней статусной строке.

Создание и загрузка файловой системы: нажать на "голову муравья" слева (PlatformIO), выбрать пункт "Upload Filesystem Image".

При первом запуске появится WiFi точка доступа "ClockAP". После подключения телефоном должна открыться страничка настроек. Если нет, то зайти броузером на 192.168.4.1.
Затем выбрать свою WiFi сеть и ввести пароль. Часы должны подключится к WiFi. Посмотреть адрес, который получили часы можно сделав три клика по кнопке.
Для удобства можно добавить этот IP как статический в настройках роутера. Если параметры WiFi изменились, то один клик кнопки запускает первичную настройку WiFi по новой.

После сборки, обновлять прошивку можно по wifi через web. PlatformIO при сборке формирует файл прошивки, например у меня это: Documents/PlatformIO/Projects/Clock/.pio/build/esp01_1m/firmware.bin и файл файловой системы Documents/PlatformIO/Projects/Clock/.pio/build/esp01_1m/littlefs.bin

## Изменения:
- Исправлены все найденные за пол года реальной эксплуатации и раздражающие меня проблемы. Кроме нестабильной работы платы dfPlayer и срабатываний на соседей RCWL-0516.
- Добавлены возможность дополнительно увеличивать яркость матрицы по времени.
- Настройки разбиты на две части, отдельно настройки часов, отдельно telegram, теперь они в разделе "охрана".
- Добавлены ограничения на время работы матрицы от аккумулятора, отключены настройки с кнопки во время работы от аккумулятора, добавлена возможность установить время без интернета.

# Хероям сала!
