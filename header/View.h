#ifndef VIEW_H
#define VIEW_H

class View {
    public:
        /* Updates the display buffer with the most recent data from this view
         * 
         * - Should be called after changing something that this view displays
         * - Note: The user's screen will not be updated until running refresh
         */
        virtual void draw() = 0;
        
        /* Copies the display buffer to the user's screen
         * 
         * - Anything added to the screen with draw should now be visible to the
         *   user
         */
        virtual void refresh() = 0;
        
        /* Get how big this view should be
         *
         * Used to figure out how to lay out the screen
         */
        virtual int getWidth() = 0;
        virtual int getHeight() = 0;
}

#endif // VIEW_H
