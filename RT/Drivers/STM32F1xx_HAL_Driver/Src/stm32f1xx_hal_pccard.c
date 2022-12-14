??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p c c a r d . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       P C C A R D   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   a   g e n e r i c   f i r m w a r e   t o   d r i v e   P C C A R D   m e m o r i e s   m o u n t e d  
     *                     a s   e x t e r n a l   d e v i c e .  
     *  
     @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
       [ . . ]  
           T h i s   d r i v e r   i s   a   g e n e r i c   l a y e r e d   d r i v e r   w h i c h   c o n t a i n s   a   s e t   o f   A P I s   u s e d   t o  
             c o n t r o l   P C C A R D / c o m p a c t   f l a s h   m e m o r i e s .   I t   u s e s   t h e   F S M C   l a y e r   f u n c t i o n s  
           t o   i n t e r f a c e   w i t h   P C C A R D   d e v i c e s .   T h i s   d r i v e r   i s   u s e d   f o r :  
  
         ( + )   P C C A R D / C o m p a c t   F l a s h   m e m o r y   c o n f i g u r a t i o n   s e q u e n c e   u s i n g   t h e   f u n c t i o n  
                 H A L _ P C C A R D _ I n i t ( ) / H A L _ C F _ I n i t ( )   w i t h   c o n t r o l   a n d   t i m i n g   p a r a m e t e r s   f o r  
                 b o t h   c o m m o n   a n d   a t t r i b u t e   s p a c e s .  
  
         ( + )   R e a d   P C C A R D / C o m p a c t   F l a s h   m e m o r y   m a k e r   a n d   d e v i c e   I D s   u s i n g   t h e   f u n c t i o n  
                 H A L _ P C C A R D _ R e a d _ I D ( ) / H A L _ C F _ R e a d _ I D ( ) .   T h e   r e a d   i n f o r m a t i o n   i s   s t o r e d   i n  
                 t h e   C o m p a c t F l a s h _ I D   s t r u c t u r e   d e c l a r e d   b y   t h e   f u n c t i o n   c a l l e r .  
  
         ( + )   A c c e s s   P C C A R D / C o m p a c t   F l a s h   m e m o r y   b y   r e a d / w r i t e   o p e r a t i o n s   u s i n g   t h e   f u n c t i o n s  
                 H A L _ P C C A R D _ R e a d _ S e c t o r ( ) /   H A L _ P C C A R D _ W r i t e _ S e c t o r ( )   -  
                 H A L _ C F _ R e a d _ S e c t o r ( ) / H A L _ C F _ W r i t e _ S e c t o r ( ) ,   t o   r e a d / w r i t e   s e c t o r .  
  
         ( + )   P e r f o r m   P C C A R D / C o m p a c t   F l a s h   R e s e t   c h i p   o p e r a t i o n   u s i n g   t h e   f u n c t i o n  
                 H A L _ P C C A R D _ R e s e t ( ) / H A L _ C F _ R e s e t .  
  
         ( + )   P e r f o r m   P C C A R D / C o m p a c t   F l a s h   e r a s e   s e c t o r   o p e r a t i o n   u s i n g   t h e   f u n c t i o n  
                 H A L _ P C C A R D _ E r a s e _ S e c t o r ( ) / H A L _ C F _ E r a s e _ S e c t o r .  
  
         ( + )   R e a d   t h e   P C C A R D / C o m p a c t   F l a s h   s t a t u s   o p e r a t i o n   u s i n g   t h e   f u n c t i o n  
                 H A L _ P C C A R D _ R e a d S t a t u s ( ) / H A L _ C F _ R e a d S t a t u s ( ) .  
  
         ( + )   Y o u   c a n   m o n i t o r   t h e   P C C A R D / C o m p a c t   F l a s h     d e v i c e   H A L   s t a t e   b y   c a l l i n g  
                 t h e   f u n c t i o n   H A L _ P C C A R D _ G e t S t a t e ( ) / H A L _ C F _ G e t S t a t e ( )  
  
       [ . . ]  
           ( @ )   T h i s   d r i v e r   i s   a   s e t   o f   g e n e r i c   A P I s   w h i c h   h a n d l e   s t a n d a r d   P C C A R D / c o m p a c t   f l a s h  
                   o p e r a t i o n s .   I f   a   P C C A R D / C o m p a c t   F l a s h   d e v i c e   c o n t a i n s   d i f f e r e n t   o p e r a t i o n s  
                   a n d / o r   i m p l e m e n t a t i o n s ,   i t   s h o u l d   b e   i m p l e m e n t e d   s e p a r a t e l y .  
  
             * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
             a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
             U s e   F u n c t i o n s   @ r e f   H A L _ P C C A R D _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k ,  
             i t   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   P C C A R D   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   P C C A R D   M s p D e I n i t .  
             T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
             a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
             U s e   f u n c t i o n   @ r e f   H A L _ P C C A R D _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
             w e a k   ( s u r c h a r g e d )   f u n c t i o n .   I t   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   P C C A R D   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   P C C A R D   M s p D e I n i t .  
             T h i s   f u n c t i o n )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
  
             B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ P C C A R D _ I n i t   a n d   i f   t h e   s t a t e   i s   H A L _ P C C A R D _ S T A T E _ R E S E T  
             a l l   c a l l b a c k s   a r e   r e s e t   t o   t h e   c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s p e c t i v e l y  
             r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ P C C A R D _ I n i t  
             a n d   @ r e f     H A L _ P C C A R D _ D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
             I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ P C C A R D _ I n i t   a n d   @ r e f   H A L _ P C C A R D _ D e I n i t  
             k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
             C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   R E A D Y   s t a t e   o n l y .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
             i n   R E A D Y   o r   R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d  
             d u r i n g   t h e   I n i t / D e I n i t .  
             I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
             u s i n g   @ r e f   H A L _ P C C A R D _ R e g i s t e r C a l l b a c k   b e f o r e   c a l l i n g   @ r e f   H A L _ P C C A R D _ D e I n i t  
             o r   @ r e f   H A L _ P C C A R D _ I n i t   f u n c t i o n .  
  
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
             n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t e r i n g   f e a t u r e   i s   n o t   a v a i l a b l e  
             a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
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
     *                                               o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 # i f   d e f i n e d ( F S M C _ B A N K 4 )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ P C C A R D _ M O D U L E _ E N A B L E D  
  
 / * *   @ d e f g r o u p   P C C A R D   P C C A R D  
     *   @ b r i e f   P C C A R D   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   P C C A R D _ P r i v a t e _ D e f i n e s   P C C A R D   P r i v a t e   D e f i n e s  
     *   @ {  
     * /  
 # d e f i n e   P C C A R D _ T I M E O U T _ R E A D _ I D                                   0 x 0 0 0 0 F F F F U  
 # d e f i n e   P C C A R D _ T I M E O U T _ R E A D _ W R I T E _ S E C T O R               0 x 0 0 0 0 F F F F U  
 # d e f i n e   P C C A R D _ T I M E O U T _ E R A S E _ S E C T O R                         0 x 0 0 0 0 0 4 0 0 U  
 # d e f i n e   P C C A R D _ T I M E O U T _ S T A T U S                                     0 x 0 1 0 0 0 0 0 0 U  
  
 # d e f i n e   P C C A R D _ S T A T U S _ O K                                               ( u i n t 8 _ t ) 0 x 5 8  
 # d e f i n e   P C C A R D _ S T A T U S _ W R I T E _ O K                                   ( u i n t 8 _ t ) 0 x 5 0  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s   P C C A R D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                     # # # # #   P C C A R D   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e / d e - i n i t i a l i z e  
         t h e   P C C A R D   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P e r f o r m   t h e   P C C A R D   m e m o r y   I n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ p a r a m     C o m S p a c e T i m i n g   C o m m o n   s p a c e   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     A t t S p a c e T i m i n g   A t t r i b u t e   s p a c e   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     I O S p a c e T i m i n g   I O   s p a c e   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * C o m S p a c e T i m i n g ,  
                                                                     F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * A t t S p a c e T i m i n g ,   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * I O S p a c e T i m i n g )  
 {  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h p c c a r d - > L o c k   =   H A L _ U N L O C K E D ;  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         i f   ( h p c c a r d - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h p c c a r d - > M s p I n i t C a l l b a c k   =   H A L _ P C C A R D _ M s p I n i t ;  
         }  
         h p c c a r d - > I t C a l l b a c k   =   H A L _ P C C A R D _ I T C a l l b a c k ;  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h p c c a r d - > M s p I n i t C a l l b a c k ( h p c c a r d ) ;  
 # e l s e  
         / *   I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
         H A L _ P C C A R D _ M s p I n i t ( h p c c a r d ) ;  
 # e n d i f  
     }  
  
     / *   I n i t i a l i z e   t h e   P C C A R D   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ B U S Y ;  
  
     / *   I n i t i a l i z e   P C C A R D   c o n t r o l   I n t e r f a c e   * /  
     F S M C _ P C C A R D _ I n i t ( h p c c a r d - > I n s t a n c e ,   & ( h p c c a r d - > I n i t ) ) ;  
  
     / *   I n i t   P C C A R D   c o m m o n   s p a c e   t i m i n g   I n t e r f a c e   * /  
     F S M C _ P C C A R D _ C o m m o n S p a c e _ T i m i n g _ I n i t ( h p c c a r d - > I n s t a n c e ,   C o m S p a c e T i m i n g ) ;  
  
     / *   I n i t   P C C A R D   a t t r i b u t e   s p a c e   t i m i n g   I n t e r f a c e   * /  
     F S M C _ P C C A R D _ A t t r i b u t e S p a c e _ T i m i n g _ I n i t ( h p c c a r d - > I n s t a n c e ,   A t t S p a c e T i m i n g ) ;  
  
     / *   I n i t   P C C A R D   I O   s p a c e   t i m i n g   I n t e r f a c e   * /  
     F S M C _ P C C A R D _ I O S p a c e _ T i m i n g _ I n i t ( h p c c a r d - > I n s t a n c e ,   I O S p a c e T i m i n g ) ;  
  
     / *   E n a b l e   t h e   P C C A R D   d e v i c e   * /  
     _ _ F S M C _ P C C A R D _ E N A B L E ( h p c c a r d - > I n s t a n c e ) ;  
  
     / *   U p d a t e   t h e   P C C A R D   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   t h e   P C C A R D   m e m o r y   D e - i n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ D e I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h p c c a r d - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h p c c a r d - > M s p D e I n i t C a l l b a c k   =   H A L _ P C C A R D _ M s p D e I n i t ;  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h p c c a r d - > M s p D e I n i t C a l l b a c k ( h p c c a r d ) ;  
 # e l s e  
     / *   D e - I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
     H A L _ P C C A R D _ M s p D e I n i t ( h p c c a r d ) ;  
 # e n d i f  
  
     / *   C o n f i g u r e   t h e   P C C A R D   r e g i s t e r s   w i t h   t h e i r   r e s e t   v a l u e s   * /  
     F S M C _ P C C A R D _ D e I n i t ( h p c c a r d - > I n s t a n c e ) ;  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     P C C A R D   M S P   I n i t  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C C A R D _ M s p I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c c a r d ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C C A R D _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     P C C A R D   M S P   D e I n i t  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C C A R D _ M s p D e I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c c a r d ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C C A R D _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   f u n c t i o n s  
     *   @ b r i e f         I n p u t   O u t p u t   a n d   m e m o r y   c o n t r o l   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   P C C A R D   I n p u t   a n d   O u t p u t   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   u s e   a n d   c o n t r o l   t h e   P C C A R D   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   C o m p a c t   F l a s h ' s   I D .  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ p a r a m     C o m p a c t F l a s h _ I D   C o m p a c t   f l a s h   I D   s t r u c t u r e .  
     *   @ p a r a m     p S t a t u s   p o i n t e r   t o   c o m p a c t   f l a s h   s t a t u s  
     *   @ r e t v a l   H A L   s t a t u s  
     *  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ R e a d _ I D ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 8 _ t   C o m p a c t F l a s h _ I D [ ] ,   u i n t 8 _ t   * p S t a t u s )  
 {  
     u i n t 3 2 _ t   t i m e o u t   =   P C C A R D _ T I M E O U T _ R E A D _ I D ,   i n d e x   =   0 U ;  
     u i n t 8 _ t   s t a t u s   =   0 ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ B U S Y ;  
  
     / *   I n i t i a l i z e   t h e   P C C A R D   s t a t u s   * /  
     * p S t a t u s   =   P C C A R D _ R E A D Y ;  
  
     / *   S e n d   t h e   I d e n t i f y   C o m m a n d   * /  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D )     =   ( u i n t 1 6 _ t ) 0 x E C E C ;  
  
     / *   R e a d   P C C A R D   I D s   a n d   t i m e o u t   t r e a t m e n t   * /  
     d o  
     {  
         / *   R e a d   t h e   P C C A R D   s t a t u s   * /  
         s t a t u s   =   * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
  
         t i m e o u t - - ;  
     }   w h i l e   ( ( s t a t u s   ! =   P C C A R D _ S T A T U S _ O K )   & &   t i m e o u t ) ;  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         * p S t a t u s   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   R e a d   P C C A R D   I D   b y t e s   * /  
         f o r   ( i n d e x   =   0 U ;   i n d e x   <   1 6 U ;   i n d e x + + )  
         {  
             C o m p a c t F l a s h _ I D [ i n d e x ]   =   * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ D A T A ) ;  
         }  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   s e c t o r   f r o m   P C C A R D   m e m o r y  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ p a r a m     p B u f f e r   p o i n t e r   t o   d e s t i n a t i o n   r e a d   b u f f e r  
     *   @ p a r a m     S e c t o r A d d r e s s   S e c t o r   a d d r e s s   t o   r e a d  
     *   @ p a r a m     p S t a t u s   p o i n t e r   t o   P C C A R D   s t a t u s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ R e a d _ S e c t o r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 1 6 _ t   * p B u f f e r ,   u i n t 1 6 _ t   S e c t o r A d d r e s s ,  
                                                                                   u i n t 8 _ t   * p S t a t u s )  
 {  
     u i n t 3 2 _ t   t i m e o u t   =   P C C A R D _ T I M E O U T _ R E A D _ W R I T E _ S E C T O R ,   i n d e x   =   0 U ;  
     u i n t 8 _ t   s t a t u s   =   0 ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ B U S Y ;  
  
     / *   I n i t i a l i z e   P C C A R D   s t a t u s   * /  
     * p S t a t u s   =   P C C A R D _ R E A D Y ;  
  
     / *   S e t   t h e   p a r a m e t e r s   t o   w r i t e   a   s e c t o r   * /  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ C Y L I N D E R _ H I G H )   =   ( u i n t 1 6 _ t ) 0 x 0 0 0 0 ;  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S E C T O R _ C O U N T )     =   ( ( u i n t 1 6 _ t ) 0 x 0 1 0 0 )   |   ( ( u i n t 1 6 _ t ) S e c t o r A d d r e s s ) ;  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D )         =   ( u i n t 1 6 _ t ) 0 x E 4 A 0 ;  
  
     d o  
     {  
         / *   w a i t   t i l l   t h e   S t a t u s   =   0 x 8 0   * /  
         s t a t u s   =     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
         t i m e o u t - - ;  
     }   w h i l e   ( ( s t a t u s   = =   0 x 8 0 U )   & &   t i m e o u t ) ;  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         * p S t a t u s   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
  
     t i m e o u t   =   P C C A R D _ T I M E O U T _ R E A D _ W R I T E _ S E C T O R ;  
  
     d o  
     {  
         / *   w a i t   t i l l   t h e   S t a t u s   =   P C C A R D _ S T A T U S _ O K   * /  
         s t a t u s   =     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
         t i m e o u t - - ;  
     }   w h i l e   ( ( s t a t u s   ! =   P C C A R D _ S T A T U S _ O K )   & &   t i m e o u t ) ;  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         * p S t a t u s   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
  
     / *   R e a d   b y t e s   * /  
     f o r   ( ;   i n d e x   <   P C C A R D _ S E C T O R _ S I Z E ;   i n d e x + + )  
     {  
         * ( u i n t 1 6 _ t   * ) p B u f f e r + +   =   * ( u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R ) ;  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     W r i t e   s e c t o r   t o   P C C A R D   m e m o r y  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ p a r a m     p B u f f e r   p o i n t e r   t o   s o u r c e   w r i t e   b u f f e r  
     *   @ p a r a m     S e c t o r A d d r e s s   S e c t o r   a d d r e s s   t o   w r i t e  
     *   @ p a r a m     p S t a t u s   p o i n t e r   t o   P C C A R D   s t a t u s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ W r i t e _ S e c t o r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 1 6 _ t   * p B u f f e r ,   u i n t 1 6 _ t   S e c t o r A d d r e s s ,  
                                                                                     u i n t 8 _ t   * p S t a t u s )  
 {  
     u i n t 3 2 _ t   t i m e o u t   =   P C C A R D _ T I M E O U T _ R E A D _ W R I T E _ S E C T O R ,   i n d e x   =   0 U ;  
     u i n t 8 _ t   s t a t u s   =   0 ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ B U S Y ;  
  
     / *   I n i t i a l i z e   P C C A R D   s t a t u s   * /  
     * p S t a t u s   =   P C C A R D _ R E A D Y ;  
  
     / *   S e t   t h e   p a r a m e t e r s   t o   w r i t e   a   s e c t o r   * /  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ C Y L I N D E R _ H I G H )   =   ( u i n t 1 6 _ t ) 0 x 0 0 0 0 ;  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S E C T O R _ C O U N T )     =   ( ( u i n t 1 6 _ t ) 0 x 0 1 0 0 )   |   ( ( u i n t 1 6 _ t ) S e c t o r A d d r e s s ) ;  
     * ( _ _ I O   u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D )         =   ( u i n t 1 6 _ t ) 0 x 3 0 A 0 ;  
  
     d o  
     {  
         / *   W a i t   t i l l   t h e   S t a t u s   =   P C C A R D _ S T A T U S _ O K   * /  
         s t a t u s   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
         t i m e o u t - - ;  
     }   w h i l e   ( ( s t a t u s   ! =   P C C A R D _ S T A T U S _ O K )   & &   t i m e o u t ) ;  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         * p S t a t u s   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
  
     / *   W r i t e   b y t e s   * /  
     f o r   ( ;   i n d e x   <   P C C A R D _ S E C T O R _ S I Z E ;   i n d e x + + )  
     {  
         * ( u i n t 1 6 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R )   =   * ( u i n t 1 6 _ t   * ) p B u f f e r + + ;  
     }  
  
     d o  
     {  
         / *   W a i t   t i l l   t h e   S t a t u s   =   P C C A R D _ S T A T U S _ W R I T E _ O K   * /  
         s t a t u s   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
         t i m e o u t - - ;  
     }   w h i l e   ( ( s t a t u s   ! =   P C C A R D _ S T A T U S _ W R I T E _ O K )   & &   t i m e o u t ) ;  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         * p S t a t u s   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     E r a s e   s e c t o r   f r o m   P C C A R D   m e m o r y  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ p a r a m     S e c t o r A d d r e s s   S e c t o r   a d d r e s s   t o   e r a s e  
     *   @ p a r a m     p S t a t u s   p o i n t e r   t o   P C C A R D   s t a t u s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ E r a s e _ S e c t o r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 1 6 _ t   S e c t o r A d d r e s s ,   u i n t 8 _ t   * p S t a t u s )  
 {  
     u i n t 3 2 _ t   t i m e o u t   =   P C C A R D _ T I M E O U T _ E R A S E _ S E C T O R ;  
     u i n t 8 _ t   s t a t u s   =   0 ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   U p d a t e   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ B U S Y ;  
  
     / *   I n i t i a l i z e   P C C A R D   s t a t u s   * /  
     * p S t a t u s   =   P C C A R D _ R E A D Y ;  
  
     / *   S e t   t h e   p a r a m e t e r s   t o   w r i t e   a   s e c t o r   * /  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ C Y L I N D E R _ L O W )     =   0 x 0 0 ;  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ C Y L I N D E R _ H I G H )   =   0 x 0 0 ;  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S E C T O R _ N U M B E R )   =   S e c t o r A d d r e s s ;  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S E C T O R _ C O U N T )     =   0 x 0 1 ;  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ C A R D _ H E A D )           =   0 x A 0 ;  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D )         =   A T A _ E R A S E _ S E C T O R _ C M D ;  
  
     / *   w a i t   t i l l   t h e   P C C A R D   i s   r e a d y   * /  
     s t a t u s   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
  
     w h i l e   ( ( s t a t u s   ! =   P C C A R D _ S T A T U S _ W R I T E _ O K )   & &   t i m e o u t )  
     {  
         s t a t u s   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
         t i m e o u t - - ;  
     }  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         * p S t a t u s   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   P C C A R D   m e m o r y  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ R e s e t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
  
     / *   P r o v i d e   a   S W   r e s e t   a n d   R e a d   a n d   v e r i f y   t h e :  
       -   P C C a r d   C o n f i g u r a t i o n   O p t i o n   R e g i s t e r   a t   a d d r e s s   0 x 9 8 0 0 0 2 0 0   - - >   0 x 8 0  
       -   C a r d   C o n f i g u r a t i o n   a n d   S t a t u s   R e g i s t e r   a t   a d d r e s s   0 x 9 8 0 0 0 2 0 2   - - >   0 x 0 0  
       -   P i n   R e p l a c e m e n t   R e g i s t e r   a t   a d d r e s s   0 x 9 8 0 0 0 2 0 4   - - >   0 x 0 C  
       -   S o c k e t   a n d   C o p y   R e g i s t e r   a t   a d d r e s s   0 x 9 8 0 0 0 2 0 6   - - >   0 x 0 0  
     * /  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ B U S Y ;  
  
     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ A T T R I B U T E _ S P A C E _ A D D R E S S   |   A T A _ C A R D _ C O N F I G U R A T I O N )   =   0 x 0 1 ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     h p c c a r d - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   P C C A R D   d e v i c e   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ P C C A R D _ I R Q H a n d l e r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     / *   C h e c k   P C C A R D   i n t e r r u p t   R i s i n g   e d g e   f l a g   * /  
     i f   ( _ _ F S M C _ P C C A R D _ G E T _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ R I S I N G _ E D G E ) )  
     {  
         / *   P C C A R D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h p c c a r d - > I t C a l l b a c k ( h p c c a r d ) ;  
 # e l s e  
         H A L _ P C C A R D _ I T C a l l b a c k ( h p c c a r d ) ;  
 # e n d i f  
  
         / *   C l e a r   P C C A R D   i n t e r r u p t   R i s i n g   e d g e   p e n d i n g   b i t   * /  
         _ _ F S M C _ P C C A R D _ C L E A R _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ R I S I N G _ E D G E ) ;  
     }  
  
     / *   C h e c k   P C C A R D   i n t e r r u p t   L e v e l   f l a g   * /  
     i f   ( _ _ F S M C _ P C C A R D _ G E T _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ L E V E L ) )  
     {  
         / *   P C C A R D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h p c c a r d - > I t C a l l b a c k ( h p c c a r d ) ;  
 # e l s e  
         H A L _ P C C A R D _ I T C a l l b a c k ( h p c c a r d ) ;  
 # e n d i f  
  
         / *   C l e a r   P C C A R D   i n t e r r u p t   L e v e l   p e n d i n g   b i t   * /  
         _ _ F S M C _ P C C A R D _ C L E A R _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ L E V E L ) ;  
     }  
  
     / *   C h e c k   P C C A R D   i n t e r r u p t   F a l l i n g   e d g e   f l a g   * /  
     i f   ( _ _ F S M C _ P C C A R D _ G E T _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ F A L L I N G _ E D G E ) )  
     {  
         / *   P C C A R D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h p c c a r d - > I t C a l l b a c k ( h p c c a r d ) ;  
 # e l s e  
         H A L _ P C C A R D _ I T C a l l b a c k ( h p c c a r d ) ;  
 # e n d i f  
  
         / *   C l e a r   P C C A R D   i n t e r r u p t   F a l l i n g   e d g e   p e n d i n g   b i t   * /  
         _ _ F S M C _ P C C A R D _ C L E A R _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ F A L L I N G _ E D G E ) ;  
     }  
  
     / *   C h e c k   P C C A R D   i n t e r r u p t   F I F O   e m p t y   f l a g   * /  
     i f   ( _ _ F S M C _ P C C A R D _ G E T _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ F E M P T ) )  
     {  
         / *   P C C A R D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h p c c a r d - > I t C a l l b a c k ( h p c c a r d ) ;  
 # e l s e  
         H A L _ P C C A R D _ I T C a l l b a c k ( h p c c a r d ) ;  
 # e n d i f  
  
         / *   C l e a r   P C C A R D   i n t e r r u p t   F I F O   e m p t y   p e n d i n g   b i t   * /  
         _ _ F S M C _ P C C A R D _ C L E A R _ F L A G ( h p c c a r d - > I n s t a n c e ,   F S M C _ F L A G _ F E M P T ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     P C C A R D   i n t e r r u p t   f e a t u r e   c a l l b a c k  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C C A R D _ I T C a l l b a c k ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c c a r d ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C C A R D _ I T C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   P C C A R D   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h p c c a r d   :   P C C A R D   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D               P C C A R D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D           P C C A R D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C C A R D _ I T _ C B _ I D                           P C C A R D   I T   c a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   :   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ R e g i s t e r C a l l b a c k ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   H A L _ P C C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                             p P C C A R D _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ P C C A R D _ I T _ C B _ I D   :  
                 h p c c a r d - > I t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   U s e r   P C C A R D   C a l l b a c k  
     *                   P C C A R D   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h p c c a r d   :   P C C A R D   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D               P C C A R D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D           P C C A R D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C C A R D _ I T _ C B _ I D                           P C C A R D   I T   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C C A R D _ U n R e g i s t e r C a l l b a c k ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   H A L _ P C C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c c a r d ) ;  
  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p I n i t C a l l b a c k   =   H A L _ P C C A R D _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p D e I n i t C a l l b a c k   =   H A L _ P C C A R D _ M s p D e I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ P C C A R D _ I T _ C B _ I D   :  
                 h p c c a r d - > I t C a l l b a c k   =   H A L _ P C C A R D _ I T C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p I n i t C a l l b a c k   =   H A L _ P C C A R D _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D   :  
                 h p c c a r d - > M s p D e I n i t C a l l b a c k   =   H A L _ P C C A R D _ M s p D e I n i t ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c c a r d ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   S t a t e   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P C C A R D   S t a t e   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   P C C A R D   c o n t r o l l e r  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     r e t u r n   t h e   P C C A R D   c o n t r o l l e r   s t a t e  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ P C C A R D _ S t a t e T y p e D e f   H A L _ P C C A R D _ G e t S t a t e ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     r e t u r n   h p c c a r d - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   c o m p a c t   f l a s h   m e m o r y   s t a t u s  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   N e w   s t a t u s   o f   t h e   P C C A R D   o p e r a t i o n .   T h i s   p a r a m e t e r   c a n   b e :  
     *                     -   C o m p a c t F l a s h _ T I M E O U T _ E R R O R :   w h e n   t h e   p r e v i o u s   o p e r a t i o n   g e n e r a t e  
     *                         a   T i m e o u t   e r r o r  
     *                     -   C o m p a c t F l a s h _ R E A D Y :   w h e n   m e m o r y   i s   r e a d y   f o r   t h e   n e x t   o p e r a t i o n  
     * /  
 H A L _ P C C A R D _ S t a t u s T y p e D e f   H A L _ P C C A R D _ G e t S t a t u s ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     u i n t 3 2 _ t   t i m e o u t   =   P C C A R D _ T I M E O U T _ S T A T U S ,   s t a t u s _ p c c a r d   =   0 U ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ P C C A R D _ S T A T U S _ O N G O I N G ;  
     }  
  
     s t a t u s _ p c c a r d   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
  
     w h i l e   ( ( s t a t u s _ p c c a r d   = =   P C C A R D _ B U S Y )   & &   t i m e o u t )  
     {  
         s t a t u s _ p c c a r d   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
         t i m e o u t - - ;  
     }  
  
     i f   ( t i m e o u t   = =   0 U )  
     {  
         s t a t u s _ p c c a r d   =     P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
  
     / *   R e t u r n   t h e   o p e r a t i o n   s t a t u s   * /  
     r e t u r n   ( H A L _ P C C A R D _ S t a t u s T y p e D e f )   s t a t u s _ p c c a r d ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   t h e   C o m p a c t   F l a s h   m e m o r y   s t a t u s   u s i n g   t h e   R e a d   s t a t u s   c o m m a n d  
     *   @ p a r a m     h p c c a r d   p o i n t e r   t o   a   P C C A R D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   P C C A R D   m o d u l e .  
     *   @ r e t v a l   T h e   s t a t u s   o f   t h e   C o m p a c t   F l a s h   m e m o r y .   T h i s   p a r a m e t e r   c a n   b e :  
     *                     -   C o m p a c t F l a s h _ B U S Y :   w h e n   m e m o r y   i s   b u s y  
     *                     -   C o m p a c t F l a s h _ R E A D Y :   w h e n   m e m o r y   i s   r e a d y   f o r   t h e   n e x t   o p e r a t i o n  
     *                     -   C o m p a c t F l a s h _ E R R O R :   w h e n   t h e   p r e v i o u s   o p e r a t i o n   g e n e r a t e s   e r r o r  
     * /  
 H A L _ P C C A R D _ S t a t u s T y p e D e f   H A L _ P C C A R D _ R e a d S t a t u s ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d )  
 {  
     u i n t 8 _ t   d a t a   =   0 U ,   s t a t u s _ p c c a r d   =   P C C A R D _ B U S Y ;  
  
     / *   C h e c k   t h e   P C C A R D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h p c c a r d - > S t a t e   = =   H A L _ P C C A R D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ P C C A R D _ S T A T U S _ O N G O I N G ;  
     }  
  
     / *   R e a d   s t a t u s   o p e r a t i o n   * /  
     d a t a   =     * ( _ _ I O   u i n t 8 _ t   * ) ( P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R   |   A T A _ S T A T U S _ C M D _ A L T E R N A T E ) ;  
  
     i f   ( ( d a t a   &   P C C A R D _ T I M E O U T _ E R R O R )   = =   P C C A R D _ T I M E O U T _ E R R O R )  
     {  
         s t a t u s _ p c c a r d   =   P C C A R D _ T I M E O U T _ E R R O R ;  
     }  
     e l s e   i f   ( ( d a t a   &   P C C A R D _ R E A D Y )   = =   P C C A R D _ R E A D Y )  
     {  
         s t a t u s _ p c c a r d   =   P C C A R D _ R E A D Y ;  
     }  
  
     r e t u r n   ( H A L _ P C C A R D _ S t a t u s T y p e D e f )   s t a t u s _ p c c a r d ;  
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
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ P C C A R D _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   F S M C _ B A N K 4   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  