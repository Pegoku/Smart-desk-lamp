// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace light;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
web_server::WebServerOTAComponent *web_server_webserverotacomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
cwww::CWWWLightOutput *cwww_cwwwlightoutput_id;
light::LightState *light_lightstate_id;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
ledc::LEDCOutput *CLight;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
ledc::LEDCOutput *WLight;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  App.reserve_light(1);
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: smartdesklight
  //   friendly_name: SmartDeskLight
  //   min_version: 2025.7.4
  //   build_path: build/smartdesklight
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("smartdesklight", "SmartDeskLight", "", __DATE__ ", " __TIME__, false);
  App.reserve_components(13);
  // light:
  // logger:
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: USB_SERIAL_JTAG
  //   level: DEBUG
  //   logs: {}
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_USB_SERIAL_JTAG);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   ap:
  //     ssid: desklight Fallback Hotspot
  //     password: wHjqyQOLnaPa
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //     - ssid: !secret 'wifi_ssid_m'
  //       password: !secret 'wifi_password_m'
  //       id: wifi_wifiap_id_2
  //       priority: 0.0
  //   use_address: smartdesklight.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("smartdesklight.local");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("DIGIFIBRA-hA7G");
  wifi_wifiap_id_2.set_password("R5kU9AZFR2");
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("desklight Fallback Hotspot");
  wifi_wifiap_id.set_password("wHjqyQOLnaPa");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  web_server_webserverotacomponent_id = new web_server::WebServerOTAComponent();
  // ota.esphome:
  //   platform: esphome
  //   password: 38e0c6cc718e9151f90641751df664e9
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("38e0c6cc718e9151f90641751df664e9");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  web_server_webserverotacomponent_id->set_component_source("web_server.ota");
  App.register_component(web_server_webserverotacomponent_id);
  // api:
  //   encryption:
  //     key: P7qBQLNfuUfGNQnKlKD6rNeGyw2JZVsd/D/J4DKRQb0=
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_noise_psk({63, 186, 129, 64, 179, 95, 185, 71, 198, 53, 9, 202, 148, 160, 250, 172, 215, 134, 203, 13, 137, 101, 91, 29, 252, 63, 201, 224, 50, 145, 65, 189});
  // esp32:
  //   board: esp32-c3-devkitm-1
  //   framework:
  //     version: 5.3.2
  //     sdkconfig_options: {}
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/53.03.13/platform-espressif32.zip
  //     source: pioarduino/framework-espidf@https:github.com/pioarduino/esp-idf/releases/download/v5.3.2/esp-idf-v5.3.2.zip
  //     type: esp-idf
  //   flash_size: 4MB
  //   variant: ESP32C3
  //   cpu_frequency: 160MHZ
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // light.cwww:
  //   platform: cwww
  //   name: Livingroom Lights
  //   cold_white: WLight
  //   warm_white: CLight
  //   cold_white_color_temperature: 153.84615384615384
  //   warm_white_color_temperature: 454.54545454545456
  //   disabled_by_default: false
  //   id: light_lightstate_id
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: cwww_cwwwlightoutput_id
  //   constant_brightness: false
  cwww_cwwwlightoutput_id = new cwww::CWWWLightOutput();
  light_lightstate_id = new light::LightState(cwww_cwwwlightoutput_id);
  App.register_light(light_lightstate_id);
  light_lightstate_id->set_component_source("light");
  App.register_component(light_lightstate_id);
  light_lightstate_id->set_name("Livingroom Lights");
  light_lightstate_id->set_object_id("livingroom_lights");
  light_lightstate_id->set_disabled_by_default(false);
  light_lightstate_id->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  light_lightstate_id->set_default_transition_length(1000);
  light_lightstate_id->set_flash_transition_length(0);
  light_lightstate_id->set_gamma_correct(2.8f);
  light_lightstate_id->add_effects({});
  // output:
  // output.ledc:
  //   platform: ledc
  //   id: CLight
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   frequency: 1000.0
  //   zero_means_zero: true
  //   min_power: 0.0
  //   inverted: true
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  CLight = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id);
  CLight->set_component_source("ledc.output");
  App.register_component(CLight);
  CLight->set_inverted(true);
  CLight->set_min_power(0.0f);
  CLight->set_zero_means_zero(true);
  CLight->set_frequency(1000.0f);
  // output.ledc:
  //   platform: ledc
  //   id: WLight
  //   pin:
  //     number: 5
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   frequency: 1000.0
  //   zero_means_zero: true
  //   inverted: true
  //   min_power: 0.0
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_5);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  WLight = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_2);
  WLight->set_component_source("ledc.output");
  App.register_component(WLight);
  WLight->set_inverted(true);
  WLight->set_min_power(0.0f);
  WLight->set_zero_means_zero(true);
  WLight->set_frequency(1000.0f);
  // socket:
  //   implementation: bsd_sockets
  // md5:
  // web_server_idf:
  //   {}
  cwww_cwwwlightoutput_id->set_cold_white(WLight);
  cwww_cwwwlightoutput_id->set_cold_white_temperature(153.84615384615384f);
  cwww_cwwwlightoutput_id->set_warm_white(CLight);
  cwww_cwwwlightoutput_id->set_warm_white_temperature(454.54545454545456f);
  cwww_cwwwlightoutput_id->set_constant_brightness(false);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
