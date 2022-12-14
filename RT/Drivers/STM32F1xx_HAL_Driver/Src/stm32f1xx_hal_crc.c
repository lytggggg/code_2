??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c r c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       C R C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   C y c l i c   R e d u n d a n c y   C h e c k   ( C R C )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
                   ( + )   E n a b l e   C R C   A H B   c l o c k   u s i n g   _ _ H A L _ R C C _ C R C _ C L K _ E N A B L E ( ) ;  
                   ( + )   I n i t i a l i z e   C R C   c a l c u l a t o r  
                           ( + + )   s p e c i f y   g e n e r a t i n g   p o l y n o m i a l   ( p e r i p h e r a l   d e f a u l t   o r   n o n - d e f a u l t   o n e )  
                           ( + + )   s p e c i f y   i n i t i a l i z a t i o n   v a l u e   ( p e r i p h e r a l   d e f a u l t   o r   n o n - d e f a u l t   o n e )  
                           ( + + )   s p e c i f y   i n p u t   d a t a   f o r m a t  
                           ( + + )   s p e c i f y   i n p u t   o r   o u t p u t   d a t a   i n v e r s i o n   m o d e   i f   a n y  
                   ( + )   U s e   H A L _ C R C _ A c c u m u l a t e ( )   f u n c t i o n   t o   c o m p u t e   t h e   C R C   v a l u e   o f   t h e  
                           i n p u t   d a t a   b u f f e r   s t a r t i n g   w i t h   t h e   p r e v i o u s l y   c o m p u t e d   C R C   a s  
                           i n i t i a l i z a t i o n   v a l u e  
                   ( + )   U s e   H A L _ C R C _ C a l c u l a t e ( )   f u n c t i o n   t o   c o m p u t e   t h e   C R C   v a l u e   o f   t h e  
                           i n p u t   d a t a   b u f f e r   s t a r t i n g   w i t h   t h e   d e f i n e d   i n i t i a l i z a t i o n   v a l u e  
                           ( d e f a u l t   o r   n o n - d e f a u l t )   t o   i n i t i a t e   C R C   c a l c u l a t i o n  
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C R C   C R C  
     *   @ b r i e f   C R C   H A L   m o d u l e   d r i v e r .  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ C R C _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   C R C _ E x p o r t e d _ F u n c t i o n s   C R C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C R C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s .  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e   t h e   C R C   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s  
                     i n   t h e   C R C _ I n i t T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e  
             ( + )   D e I n i t i a l i z e   t h e   C R C   p e r i p h e r a l  
             ( + )   I n i t i a l i z e   t h e   C R C   M S P   ( M C U   S p e c i f i c   P a c k a g e )  
             ( + )   D e I n i t i a l i z e   t h e   C R C   M S P  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   C R C   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   C R C _ I n i t T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C R C _ I n i t ( C R C _ H a n d l e T y p e D e f   * h c r c )  
 {  
     / *   C h e c k   t h e   C R C   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h c r c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C R C _ A L L _ I N S T A N C E ( h c r c - > I n s t a n c e ) ) ;  
  
     i f   ( h c r c - > S t a t e   = =   H A L _ C R C _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h c r c - > L o c k   =   H A L _ U N L O C K E D ;  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         H A L _ C R C _ M s p I n i t ( h c r c ) ;  
     }  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   C R C   p e r i p h e r a l .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C R C _ D e I n i t ( C R C _ H a n d l e T y p e D e f   * h c r c )  
 {  
     / *   C h e c k   t h e   C R C   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h c r c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C R C _ A L L _ I N S T A N C E ( h c r c - > I n s t a n c e ) ) ;  
  
     / *   C h e c k   t h e   C R C   p e r i p h e r a l   s t a t e   * /  
     i f   ( h c r c - > S t a t e   = =   H A L _ C R C _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ B U S Y ;  
  
     / *   R e s e t   C R C   c a l c u l a t i o n   u n i t   * /  
     _ _ H A L _ C R C _ D R _ R E S E T ( h c r c ) ;  
  
     / *   R e s e t   I D R   r e g i s t e r   c o n t e n t   * /  
     C L E A R _ B I T ( h c r c - > I n s t a n c e - > I D R ,   C R C _ I D R _ I D R ) ;  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ C R C _ M s p D e I n i t ( h c r c ) ;  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ R E S E T ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h c r c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   C R C   M S P .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C R C _ M s p I n i t ( C R C _ H a n d l e T y p e D e f   * h c r c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c r c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C R C _ M s p I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   C R C   M S P .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C R C _ M s p D e I n i t ( C R C _ H a n d l e T y p e D e f   * h c r c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c r c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C R C _ M s p D e I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C R C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f         m a n a g e m e n t   f u n c t i o n s .  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   c o m p u t e   t h e   3 2 - b i t   C R C   v a l u e   o f   a   3 2 - b i t   d a t a   b u f f e r  
                     u s i n g   c o m b i n a t i o n   o f   t h e   p r e v i o u s   C R C   v a l u e   a n d   t h e   n e w   o n e .  
  
               [ . . ]     o r  
  
             ( + )   c o m p u t e   t h e   3 2 - b i t   C R C   v a l u e   o f   a   3 2 - b i t   d a t a   b u f f e r  
                     i n d e p e n d e n t l y   o f   t h e   p r e v i o u s   C R C   v a l u e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o m p u t e   t h e   3 2 - b i t   C R C   v a l u e   o f   a   3 2 - b i t   d a t a   b u f f e r  
     *                   s t a r t i n g   w i t h   t h e   p r e v i o u s l y   c o m p u t e d   C R C   a s   i n i t i a l i z a t i o n   v a l u e .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ p a r a m     p B u f f e r   p o i n t e r   t o   t h e   i n p u t   d a t a   b u f f e r .  
     *   @ p a r a m     B u f f e r L e n g t h   i n p u t   d a t a   b u f f e r   l e n g t h   ( n u m b e r   o f   u i n t 3 2 _ t   w o r d s ) .  
     *   @ r e t v a l   u i n t 3 2 _ t   C R C   ( r e t u r n e d   v a l u e   L S B s   f o r   C R C   s h o r t e r   t h a n   3 2   b i t s )  
     * /  
 u i n t 3 2 _ t   H A L _ C R C _ A c c u m u l a t e ( C R C _ H a n d l e T y p e D e f   * h c r c ,   u i n t 3 2 _ t   p B u f f e r [ ] ,   u i n t 3 2 _ t   B u f f e r L e n g t h )  
 {  
     u i n t 3 2 _ t   i n d e x ;             / *   C R C   i n p u t   d a t a   b u f f e r   i n d e x   * /  
     u i n t 3 2 _ t   t e m p   =   0 U ;     / *   C R C   o u t p u t   ( r e a d   f r o m   h c r c - > I n s t a n c e - > D R   r e g i s t e r )   * /  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ B U S Y ;  
  
     / *   E n t e r   D a t a   t o   t h e   C R C   c a l c u l a t o r   * /  
     f o r   ( i n d e x   =   0 U ;   i n d e x   <   B u f f e r L e n g t h ;   i n d e x + + )  
     {  
         h c r c - > I n s t a n c e - > D R   =   p B u f f e r [ i n d e x ] ;  
     }  
     t e m p   =   h c r c - > I n s t a n c e - > D R ;  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   t h e   C R C   c o m p u t e d   v a l u e   * /  
     r e t u r n   t e m p ;  
 }  
  
 / * *  
     *   @ b r i e f     C o m p u t e   t h e   3 2 - b i t   C R C   v a l u e   o f   a   3 2 - b i t   d a t a   b u f f e r  
     *                   s t a r t i n g   w i t h   h c r c - > I n s t a n c e - > I N I T   a s   i n i t i a l i z a t i o n   v a l u e .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ p a r a m     p B u f f e r   p o i n t e r   t o   t h e   i n p u t   d a t a   b u f f e r .  
     *   @ p a r a m     B u f f e r L e n g t h   i n p u t   d a t a   b u f f e r   l e n g t h   ( n u m b e r   o f   u i n t 3 2 _ t   w o r d s ) .  
     *   @ r e t v a l   u i n t 3 2 _ t   C R C   ( r e t u r n e d   v a l u e   L S B s   f o r   C R C   s h o r t e r   t h a n   3 2   b i t s )  
     * /  
 u i n t 3 2 _ t   H A L _ C R C _ C a l c u l a t e ( C R C _ H a n d l e T y p e D e f   * h c r c ,   u i n t 3 2 _ t   p B u f f e r [ ] ,   u i n t 3 2 _ t   B u f f e r L e n g t h )  
 {  
     u i n t 3 2 _ t   i n d e x ;             / *   C R C   i n p u t   d a t a   b u f f e r   i n d e x   * /  
     u i n t 3 2 _ t   t e m p   =   0 U ;     / *   C R C   o u t p u t   ( r e a d   f r o m   h c r c - > I n s t a n c e - > D R   r e g i s t e r )   * /  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ B U S Y ;  
  
     / *   R e s e t   C R C   C a l c u l a t i o n   U n i t   ( h c r c - > I n s t a n c e - > I N I T   i s  
     *     w r i t t e n   i n   h c r c - > I n s t a n c e - > D R )   * /  
     _ _ H A L _ C R C _ D R _ R E S E T ( h c r c ) ;  
  
     / *   E n t e r   3 2 - b i t   i n p u t   d a t a   t o   t h e   C R C   c a l c u l a t o r   * /  
     f o r   ( i n d e x   =   0 U ;   i n d e x   <   B u f f e r L e n g t h ;   i n d e x + + )  
     {  
         h c r c - > I n s t a n c e - > D R   =   p B u f f e r [ i n d e x ] ;  
     }  
     t e m p   =   h c r c - > I n s t a n c e - > D R ;  
  
     / *   C h a n g e   C R C   p e r i p h e r a l   s t a t e   * /  
     h c r c - > S t a t e   =   H A L _ C R C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   t h e   C R C   c o m p u t e d   v a l u e   * /  
     r e t u r n   t e m p ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C R C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *     @ b r i e f         P e r i p h e r a l   S t a t e   f u n c t i o n s .  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   S t a t e   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   C R C   h a n d l e   s t a t e .  
     *   @ p a r a m     h c r c   C R C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ C R C _ S t a t e T y p e D e f   H A L _ C R C _ G e t S t a t e ( C R C _ H a n d l e T y p e D e f   * h c r c )  
 {  
     / *   R e t u r n   C R C   h a n d l e   s t a t e   * /  
     r e t u r n   h c r c - > S t a t e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 # e n d i f   / *   H A L _ C R C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  