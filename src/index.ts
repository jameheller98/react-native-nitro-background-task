import { NitroModules } from 'react-native-nitro-modules'
import type { Math } from './specs/Math.nitro'

export const MathModule = NitroModules.createHybridObject<Math>('Math')
