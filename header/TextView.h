#include <string>

#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

/* Displays a string on the screen
 * 
 * Used to facilitate alignment and arrangement of text within other views
 */
class TextView : public View {
    private:
        /* The text for the view to display
         * 
         * Because this is not a pointer, it will not be updated automatically
         */
        std::string text;
        
        /* Set how to align this view's text
         * 
         *  0 = center
         * -1 = left
         *  1 = right
         */
        int alignment;
        
        /* Set this view's width
         * 
         * - Text that is too long will be split to new lines at spaces
         * - Text that is too short will be aligned based on the value of
         *   alignment
         */
        int width;
    
    
    public:
        virtual void draw();
        virtual void refresh();
        
        /* Set the desired with of this view
         * 
         * If <= 0, then the view will pick its own size
         **/
        void setWidth(int newWidth);
}

#endif // TEXT_VIEW_H
