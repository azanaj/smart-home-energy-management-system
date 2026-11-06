#include <raylib.h>

int main (void) {
    // Initialize the application window
    const int screenWidth = 1440;
    const int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "SHEMS | Smart Home Energy Management System");

    // Set application frame rate
    SetTargetFPS(60);

    // Main application loop
    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Background
        ClearBackground((Color){18, 22, 29, 255});

        // Application heading
        DrawText("SHEMS", 60, 50, 36, GREEN);
        DrawText("SMART HOME ENERGY MANAGEMENT SYSTEM",
                 60, 100, 18, LIGHTGRAY);

        // Welcome panel
        DrawRectangleRounded(
            (Rectangle){60, 170, 1320, 220},
            0.08f,
            12,
            (Color){30, 37, 48, 255}
        );

        DrawText("Welcome to your Smart Home",
                 95, 215, 32, RAYWHITE);

        DrawText("Monitor electricity consumption. Understand your energy usage.",
                 95, 275, 20, LIGHTGRAY);

        DrawText("Application initialized successfully!",
                 95, 325, 18, GREEN);

        // Footer
        DrawText("SHEMS | Version 0.1.0",
                 60, 850, 16, GRAY);

        EndDrawing();
    }

    // Close application safely
    CloseWindow();

    return 0;
}
