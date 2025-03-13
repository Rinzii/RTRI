#pragma once

struct Viewport {
    float x;
    float y;
    float width;
    float height;
    float depthMin;
    float depthMax;
    bool originBottomLeft; // expects "isViewportOriginBottomLeftSupported"
}
