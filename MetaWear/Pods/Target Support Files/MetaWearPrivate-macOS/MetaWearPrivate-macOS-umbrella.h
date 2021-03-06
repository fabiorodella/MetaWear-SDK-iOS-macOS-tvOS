#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BFTask+MBLExtensions.h"
#import "MBLConstants.h"
#import "MBLData.h"
#import "MBLDataSample.h"
#import "MBLDataSwitch.h"
#import "MBLDeviceInfo.h"
#import "MBLEntityEvent.h"
#import "MBLEntityModule.h"
#import "MBLEvent.h"
#import "MBLFilter.h"
#import "MBLFirmwareUpdateInfo.h"
#import "MBLMetaWear.h"
#import "MBLMetaWearManager.h"
#import "MBLModule.h"
#import "MBLNumericData.h"
#import "MBLRegister.h"
#import "MBLStringData.h"
#import "MetaWear.h"
#import "MBLAccelerometerBMA255.h"
#import "MBLAccelerometerBMA255MotionEvent.h"
#import "MBLAccelerometerBMI160.h"
#import "MBLAccelerometerBMI160MotionEvent.h"
#import "MBLAccelerometerBosch.h"
#import "MBLAccelerometerBoschFlatData.h"
#import "MBLAccelerometerBoschFlatEvent.h"
#import "MBLAccelerometerBoschLowOrHighGEvent.h"
#import "MBLAccelerometerBoschTapEvent.h"
#import "MBLAccelerometer.h"
#import "MBLAccelerometerData.h"
#import "MBLOrientationData.h"
#import "MBLRMSAccelerometerData.h"
#import "MBLAccelerometerMMA8452Q.h"
#import "MBLAmbientLightLTR329.h"
#import "MBLAmbientLight.h"
#import "MBLANCS.h"
#import "MBLANCSEventData.h"
#import "MBLBarometerBME280.h"
#import "MBLBarometerBMP280.h"
#import "MBLBarometerBosch.h"
#import "MBLBarometer.h"
#import "MBLConductance.h"
#import "MBLGPIO.h"
#import "MBLGPIOPin.h"
#import "bmi160.h"
#import "MBLGyroBMI160.h"
#import "MBLGyro.h"
#import "MBLGyroData.h"
#import "MBLHapticBuzzer.h"
#import "MBLHygrometerBME280.h"
#import "MBLHygrometer.h"
#import "MBLI2C.h"
#import "MBLiBeacon.h"
#import "MBLLED.h"
#import "MBLMagnetometerBMM150.h"
#import "MBLMagnetometer.h"
#import "MBLMagnetometerData.h"
#import "MBLMechanicalSwitch.h"
#import "MBLNeopixel.h"
#import "MBLNeopixelStrand.h"
#import "MBLPhotometer.h"
#import "MBLRGBData.h"
#import "MBLPhotometerTCS3472.h"
#import "MBLProximity.h"
#import "MBLProximityTSL2671.h"
#import "MBLEulerAngleData.h"
#import "MBLQuaternionData.h"
#import "MBLSensorFusion.h"
#import "MBLI2CData.h"
#import "MBLSerial.h"
#import "MBLSPIData.h"
#import "MBLSettings.h"
#import "MBLExternalThermistor.h"
#import "MBLTemperature.h"
#import "MBLTimer.h"
#import "MBLTimerEvent.h"
#import "BFTask+MBLPrivate.h"
#import "MBLCategoryLoader.h"
#import "MBLAnalytics.h"
#import "MBLConstants+Private.h"
#import "MBLConversion.h"
#import "MBLData+Private.h"
#import "MBLDataSample+Private.h"
#import "MBLDependentData.h"
#import "MBLDispatchQueue.h"
#import "MBLDownloadOnlyEvent.h"
#import "MBLEntityEvent+Private.h"
#import "MBLEntityModule+Private.h"
#import "MBLEvent+Private.h"
#import "MBLFilter+Private.h"
#import "MBLFirmwareBuild.h"
#import "MBLFormat.h"
#import "MBLLogger.h"
#import "MBLMacAddressFormat.h"
#import "MBLMetaWear+Private.h"
#import "MBLMetaWearManager+Private.h"
#import "MBLModule+Private.h"
#import "MBLModuleInfo.h"
#import "MBLMovingAverage.h"
#import "MBLNonVolatileState.h"
#import "MBLNumericData+Private.h"
#import "MBLNumericFormatter.h"
#import "MBLRegister+Private.h"
#import "MBLStringData+Private.h"
#import "MBLTriggeredRead.h"
#import "MBLFirmwareUpdateManager.h"
#import "MBLBluetoothCentral.h"
#import "MBLBluetoothCentralMock.h"
#import "MBLBluetoothPeripheral.h"
#import "MBLBluetoothPeripheralMock.h"
#import "MBLDeviceLookup.h"
#import "MBLMockPeripheralFactory.h"
#import "MBLMockUtils.h"
#import "MBLModuleMock.h"
#import "MBLAccelerometerBMA255+Private.h"
#import "MBLAccelerometerBMA255MotionEvent+Private.h"
#import "MBLAccelerometerBMI160+Private.h"
#import "MBLAccelerometerBMI160MotionEvent+Private.h"
#import "MBLAccelerometerBMI160StepEvent.h"
#import "MBLAccelerometerBosch+Private.h"
#import "MBLAccelerometerBoschAxisReadyEvent.h"
#import "MBLAccelerometerBoschDataReadyEvent.h"
#import "MBLAccelerometerBoschFlatData+Private.h"
#import "MBLAccelerometerBoschFlatEvent+Private.h"
#import "MBLAccelerometerBoschFlatFormat.h"
#import "MBLAccelerometerBoschFormat.h"
#import "MBLAccelerometerBoschLowOrHighGEvent+Private.h"
#import "MBLAccelerometerBoschOrientationEvent.h"
#import "MBLAccelerometerBoschOrientationFormat.h"
#import "MBLAccelerometerBoschPackedDataReadyEvent.h"
#import "MBLAccelerometerBoschRMSFormat.h"
#import "MBLAccelerometerBoschTapEvent+Private.h"
#import "MBLAccelerometer+Private.h"
#import "MBLAccelerometerData+Private.h"
#import "MBLOrientationData+Private.h"
#import "MBLRMSAccelerometerData+Private.h"
#import "MBLAccelerometerAxisReadyEvent.h"
#import "MBLAccelerometerDataReadyEvent.h"
#import "MBLAccelerometerFreeFallEvent.h"
#import "MBLAccelerometerMMA8452Q+Private.h"
#import "MBLAccelerometerMMA8452QFormat.h"
#import "MBLAccelerometerMMA8452QOrientationFormat.h"
#import "MBLAccelerometerMMA8452QRMSFormat.h"
#import "MBLAccelerometerOrientationEvent.h"
#import "MBLAccelerometerPackedDataReadyEvent.h"
#import "MBLAccelerometerShakeEvent.h"
#import "MBLAccelerometerTapEvent.h"
#import "mma8452q.h"
#import "MBLAmbientLight+Private.h"
#import "MBLANCSEventData+Private.h"
#import "MBLBarometerBosch+Private.h"
#import "MBLBarometerBoschPeriodicAltitudeEvent.h"
#import "MBLBarometerBoschPeriodicPressureEvent.h"
#import "MBLBarometer+Private.h"
#import "MBLCommand.h"
#import "MBLConductanceData.h"
#import "MBLDataProcessor.h"
#import "MBLGPIO+Private.h"
#import "MBLGPIOData.h"
#import "MBLGPIOPin+Private.h"
#import "MBLGPIOPinChangeEvent.h"
#import "MBLGyroBMI160+Private.h"
#import "MBLGyroBMI160AxisReadyEvent.h"
#import "MBLGyroBMI160DataReadyEvent.h"
#import "MBLGyroBMI160Format.h"
#import "MBLGyroBMI160PackedDataReadyEvent.h"
#import "MBLGyro+Private.h"
#import "MBLGyroData+Private.h"
#import "MBLHygrometerBME280PeriodicHumidityEvent.h"
#import "MBLHygrometer+Private.h"
#import "MBLLED+Private.h"
#import "MBLLogging.h"
#import "MBLLoggingV0.h"
#import "MBLLoggingV1.h"
#import "MBLLoggingV2.h"
#import "MBLMacro.h"
#import "MBLMagnetometerBMM150+Private.h"
#import "MBLMagnetometerBMM150Format.h"
#import "MBLMagnetometerBMM150PackedPeriodicMagneticFieldEvent.h"
#import "MBLMagnetometerBMM150PeriodicMagneticFieldEvent.h"
#import "MBLMagnetometer+Private.h"
#import "MBLMagnetometerData+Private.h"
#import "MBLNeopixel+Private.h"
#import "MBLNeopixelStrand+Private.h"
#import "MBLPhotometer+Private.h"
#import "MBLRGBData+Private.h"
#import "MBLPhotometerTCS3472Format.h"
#import "MBLProximity+Private.h"
#import "MBLBitmaskEvent.h"
#import "MBLCorrectedFormat.h"
#import "MBLEulerAngleData+Private.h"
#import "MBLEulerFormat.h"
#import "MBLGravityFormat.h"
#import "MBLQuaternionData+Private.h"
#import "MBLQuaternionFormat.h"
#import "MBLSensorFusion+Private.h"
#import "MBLI2CData+Private.h"
#import "MBLSerial+Private.h"
#import "MBLSPIData+Private.h"
#import "MBLSettings+Private.h"
#import "MBLExternalThermistor0.h"
#import "MBLExternalThermistor1.h"
#import "MBLOnDieTemperature0.h"
#import "MBLTemperature+Private.h"
#import "MBLTemperatureV0.h"
#import "MBLTemperatureV1.h"
#import "MBLTestDebug.h"
#import "MBLTimer+Private.h"
#import "MBLTimerEvent+Private.h"

FOUNDATION_EXPORT double MetaWearVersionNumber;
FOUNDATION_EXPORT const unsigned char MetaWearVersionString[];

