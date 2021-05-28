#include "esp_system.h"
#include "esp_log.h"
#include "i2s_stream.h"

audio_element_handle_t i2s_stream;

/**
 *  @brief  Standard stream configuration
 */
static i2s_stream_cfg_t stream_cfg = I2S_STREAM_CFG_DEFAULT();

void app_main() {
    i2s_stream = i2s_stream_init(&stream_cfg);
}