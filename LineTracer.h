#ifdef __cplusplus
extern "C" {
#endif

/* 下記の項目は各ロボットに合わせて変えること */

/* カラーセンサの輝度設定 */
#define WHITE_BRIGHTNESS  (40)
#define BLACK_BRIGHTNESS  (7) 

/* ステアリング操舵量の係数 */
#define STEERING_COEF     (1.05F) 

/* 走行基準スピード */
#define BASE_SPEED        (40) 

/* ライントレースエッジ切り替え */
#define LEFT_EDGE         (-1) 
#define RIGHT_EDGE        (1) 

#ifdef __cplusplus
}
#endif
