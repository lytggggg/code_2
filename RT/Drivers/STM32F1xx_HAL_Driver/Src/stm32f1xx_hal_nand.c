??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ n a n d . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       N A N D   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   a   g e n e r i c   f i r m w a r e   t o   d r i v e   N A N D   m e m o r i e s   m o u n t e d  
     *                     a s   e x t e r n a l   d e v i c e .  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                   # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h i s   d r i v e r   i s   a   g e n e r i c   l a y e r e d   d r i v e r   w h i c h   c o n t a i n s   a   s e t   o f   A P I s   u s e d   t o  
             c o n t r o l   N A N D   f l a s h   m e m o r i e s .   I t   u s e s   t h e   F S M C   l a y e r   f u n c t i o n s   t o   i n t e r f a c e  
             w i t h   N A N D   d e v i c e s .   T h i s   d r i v e r   i s   u s e d   a s   f o l l o w s :  
  
             ( + )   N A N D   f l a s h   m e m o r y   c o n f i g u r a t i o n   s e q u e n c e   u s i n g   t h e   f u n c t i o n   H A L _ N A N D _ I n i t ( )  
                     w i t h   c o n t r o l   a n d   t i m i n g   p a r a m e t e r s   f o r   b o t h   c o m m o n   a n d   a t t r i b u t e   s p a c e s .  
  
             ( + )   R e a d   N A N D   f l a s h   m e m o r y   m a k e r   a n d   d e v i c e   I D s   u s i n g   t h e   f u n c t i o n  
                     H A L _ N A N D _ R e a d _ I D ( ) .   T h e   r e a d   i n f o r m a t i o n   i s   s t o r e d   i n   t h e   N A N D _ I D _ T y p e D e f  
                     s t r u c t u r e   d e c l a r e d   b y   t h e   f u n c t i o n   c a l l e r .  
  
             ( + )   A c c e s s   N A N D   f l a s h   m e m o r y   b y   r e a d / w r i t e   o p e r a t i o n s   u s i n g   t h e   f u n c t i o n s  
                     H A L _ N A N D _ R e a d _ P a g e _ 8 b ( ) / H A L _ N A N D _ R e a d _ S p a r e A r e a _ 8 b ( ) ,  
                     H A L _ N A N D _ W r i t e _ P a g e _ 8 b ( ) / H A L _ N A N D _ W r i t e _ S p a r e A r e a _ 8 b ( ) ,  
                     H A L _ N A N D _ R e a d _ P a g e _ 1 6 b ( ) / H A L _ N A N D _ R e a d _ S p a r e A r e a _ 1 6 b ( ) ,  
                     H A L _ N A N D _ W r i t e _ P a g e _ 1 6 b ( ) / H A L _ N A N D _ W r i t e _ S p a r e A r e a _ 1 6 b ( )  
                     t o   r e a d / w r i t e   p a g e ( s ) / s p a r e   a r e a ( s ) .   T h e s e   f u n c t i o n s   u s e   s p e c i f i c   d e v i c e  
                     i n f o r m a t i o n   ( B l o c k ,   p a g e   s i z e . . )   p r e d e f i n e d   b y   t h e   u s e r   i n   t h e   N A N D _ D e v i c e C o n f i g T y p e D e f  
                     s t r u c t u r e .   T h e   r e a d / w r i t e   a d d r e s s   i n f o r m a t i o n   i s   c o n t a i n e d   b y   t h e   N a n d _ A d d r e s s _ T y p e d e f  
                     s t r u c t u r e   p a s s e d   a s   p a r a m e t e r .  
  
             ( + )   P e r f o r m   N A N D   f l a s h   R e s e t   c h i p   o p e r a t i o n   u s i n g   t h e   f u n c t i o n   H A L _ N A N D _ R e s e t ( ) .  
  
             ( + )   P e r f o r m   N A N D   f l a s h   e r a s e   b l o c k   o p e r a t i o n   u s i n g   t h e   f u n c t i o n   H A L _ N A N D _ E r a s e _ B l o c k ( ) .  
                     T h e   e r a s e   b l o c k   a d d r e s s   i n f o r m a t i o n   i s   c o n t a i n e d   i n   t h e   N a n d _ A d d r e s s _ T y p e d e f  
                     s t r u c t u r e   p a s s e d   a s   p a r a m e t e r .  
  
             ( + )   R e a d   t h e   N A N D   f l a s h   s t a t u s   o p e r a t i o n   u s i n g   t h e   f u n c t i o n   H A L _ N A N D _ R e a d _ S t a t u s ( ) .  
  
             ( + )   Y o u   c a n   a l s o   c o n t r o l   t h e   N A N D   d e v i c e   b y   c a l l i n g   t h e   c o n t r o l   A P I s   H A L _ N A N D _ E C C _ E n a b l e ( ) /  
                     H A L _ N A N D _ E C C _ D i s a b l e ( )   t o   r e s p e c t i v e l y   e n a b l e / d i s a b l e   t h e   E C C   c o d e   c o r r e c t i o n  
                     f e a t u r e   o r   t h e   f u n c t i o n   H A L _ N A N D _ G e t E C C ( )   t o   g e t   t h e   E C C   c o r r e c t i o n   c o d e .  
  
             ( + )   Y o u   c a n   m o n i t o r   t h e   N A N D   d e v i c e   H A L   s t a t e   b y   c a l l i n g   t h e   f u n c t i o n  
                     H A L _ N A N D _ G e t S t a t e ( )  
  
         [ . . ]  
             ( @ )   T h i s   d r i v e r   i s   a   s e t   o f   g e n e r i c   A P I s   w h i c h   h a n d l e   s t a n d a r d   N A N D   f l a s h   o p e r a t i o n s .  
                     I f   a   N A N D   f l a s h   d e v i c e   c o n t a i n s   d i f f e r e n t   o p e r a t i o n s   a n d / o r   i m p l e m e n t a t i o n s ,  
                     i t   s h o u l d   b e   i m p l e m e n t e d   s e p a r a t e l y .  
  
         * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
             a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
             U s e   F u n c t i o n s   @ r e f   H A L _ N A N D _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k ,  
             i t   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   N A N D   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   N A N D   M s p D e I n i t .  
             T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
             a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
             U s e   f u n c t i o n   @ r e f   H A L _ N A N D _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
             w e a k   ( s u r c h a r g e d )   f u n c t i o n .   I t   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   N A N D   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   N A N D   M s p D e I n i t .  
             T h i s   f u n c t i o n )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
  
             B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ N A N D _ I n i t   a n d   i f   t h e   s t a t e   i s   H A L _ N A N D _ S T A T E _ R E S E T  
             a l l   c a l l b a c k s   a r e   r e s e t   t o   t h e   c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s p e c t i v e l y  
             r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ N A N D _ I n i t  
             a n d   @ r e f     H A L _ N A N D _ D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
             I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ N A N D _ I n i t   a n d   @ r e f   H A L _ N A N D _ D e I n i t  
             k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
             C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   R E A D Y   s t a t e   o n l y .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
             i n   R E A D Y   o r   R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d  
             d u r i n g   t h e   I n i t / D e I n i t .  
             I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
             u s i n g   @ r e f   H A L _ N A N D _ R e g i s t e r C a l l b a c k   b e f o r e   c a l l i n g   @ r e f   H A L _ N A N D _ D e I n i t  
             o r   @ r e f   H A L _ N A N D _ I n i t   f u n c t i o n .  
  
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
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
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ N A N D _ M O D U L E _ E N A B L E D  
  
 / * *   @ d e f g r o u p   N A N D   N A N D  
     *   @ b r i e f   N A N D   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   C o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   N A N D _ E x p o r t e d _ F u n c t i o n s   N A N D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   N A N D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   N A N D   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e / d e - i n i t i a l i z e  
         t h e   N A N D   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P e r f o r m   N A N D   m e m o r y   I n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     C o m S p a c e _ T i m i n g   p o i n t e r   t o   C o m m o n   s p a c e   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     A t t S p a c e _ T i m i n g   p o i n t e r   t o   A t t r i b u t e   s p a c e   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ N A N D _ I n i t ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * C o m S p a c e _ T i m i n g ,  
                                                                   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * A t t S p a c e _ T i m i n g )  
 {  
     / *   C h e c k   t h e   N A N D   h a n d l e   s t a t e   * /  
     i f   ( h n a n d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h n a n d - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         i f   ( h n a n d - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h n a n d - > M s p I n i t C a l l b a c k   =   H A L _ N A N D _ M s p I n i t ;  
         }  
         h n a n d - > I t C a l l b a c k   =   H A L _ N A N D _ I T C a l l b a c k ;  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h n a n d - > M s p I n i t C a l l b a c k ( h n a n d ) ;  
 # e l s e  
         / *   I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
         H A L _ N A N D _ M s p I n i t ( h n a n d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S )   * /  
     }  
  
     / *   I n i t i a l i z e   N A N D   c o n t r o l   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N A N D _ I n i t ( h n a n d - > I n s t a n c e ,   & ( h n a n d - > I n i t ) ) ;  
  
     / *   I n i t i a l i z e   N A N D   c o m m o n   s p a c e   t i m i n g   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N A N D _ C o m m o n S p a c e _ T i m i n g _ I n i t ( h n a n d - > I n s t a n c e ,   C o m S p a c e _ T i m i n g ,   h n a n d - > I n i t . N a n d B a n k ) ;  
  
     / *   I n i t i a l i z e   N A N D   a t t r i b u t e   s p a c e   t i m i n g   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N A N D _ A t t r i b u t e S p a c e _ T i m i n g _ I n i t ( h n a n d - > I n s t a n c e ,   A t t S p a c e _ T i m i n g ,   h n a n d - > I n i t . N a n d B a n k ) ;  
  
     / *   E n a b l e   t h e   N A N D   d e v i c e   * /  
     _ _ F S M C _ N A N D _ E N A B L E ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ) ;  
  
     / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   N A N D   m e m o r y   D e - I n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ D e I n i t ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h n a n d - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h n a n d - > M s p D e I n i t C a l l b a c k   =   H A L _ N A N D _ M s p D e I n i t ;  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h n a n d - > M s p D e I n i t C a l l b a c k ( h n a n d ) ;  
 # e l s e  
     / *   I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
     H A L _ N A N D _ M s p D e I n i t ( h n a n d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S )   * /  
  
     / *   C o n f i g u r e   t h e   N A N D   r e g i s t e r s   w i t h   t h e i r   r e s e t   v a l u e s   * /  
     ( v o i d ) F S M C _ N A N D _ D e I n i t ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ) ;  
  
     / *   R e s e t   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     N A N D   M S P   I n i t  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ N A N D _ M s p I n i t ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h n a n d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ N A N D _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     N A N D   M S P   D e I n i t  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ N A N D _ M s p D e I n i t ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h n a n d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ N A N D _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   N A N D   d e v i c e   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ N A N D _ I R Q H a n d l e r ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     / *   C h e c k   N A N D   i n t e r r u p t   R i s i n g   e d g e   f l a g   * /  
     i f   ( _ _ F S M C _ N A N D _ G E T _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ R I S I N G _ E D G E ) )  
     {  
         / *   N A N D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h n a n d - > I t C a l l b a c k ( h n a n d ) ;  
 # e l s e  
         H A L _ N A N D _ I T C a l l b a c k ( h n a n d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S )   * /  
  
         / *   C l e a r   N A N D   i n t e r r u p t   R i s i n g   e d g e   p e n d i n g   b i t   * /  
         _ _ F S M C _ N A N D _ C L E A R _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ R I S I N G _ E D G E ) ;  
     }  
  
     / *   C h e c k   N A N D   i n t e r r u p t   L e v e l   f l a g   * /  
     i f   ( _ _ F S M C _ N A N D _ G E T _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ L E V E L ) )  
     {  
         / *   N A N D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h n a n d - > I t C a l l b a c k ( h n a n d ) ;  
 # e l s e  
         H A L _ N A N D _ I T C a l l b a c k ( h n a n d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S )   * /  
  
         / *   C l e a r   N A N D   i n t e r r u p t   L e v e l   p e n d i n g   b i t   * /  
         _ _ F S M C _ N A N D _ C L E A R _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ L E V E L ) ;  
     }  
  
     / *   C h e c k   N A N D   i n t e r r u p t   F a l l i n g   e d g e   f l a g   * /  
     i f   ( _ _ F S M C _ N A N D _ G E T _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ F A L L I N G _ E D G E ) )  
     {  
         / *   N A N D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h n a n d - > I t C a l l b a c k ( h n a n d ) ;  
 # e l s e  
         H A L _ N A N D _ I T C a l l b a c k ( h n a n d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S )   * /  
  
         / *   C l e a r   N A N D   i n t e r r u p t   F a l l i n g   e d g e   p e n d i n g   b i t   * /  
         _ _ F S M C _ N A N D _ C L E A R _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ F A L L I N G _ E D G E ) ;  
     }  
  
     / *   C h e c k   N A N D   i n t e r r u p t   F I F O   e m p t y   f l a g   * /  
     i f   ( _ _ F S M C _ N A N D _ G E T _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ F E M P T ) )  
     {  
         / *   N A N D   i n t e r r u p t   c a l l b a c k * /  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h n a n d - > I t C a l l b a c k ( h n a n d ) ;  
 # e l s e  
         H A L _ N A N D _ I T C a l l b a c k ( h n a n d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S )   * /  
  
         / *   C l e a r   N A N D   i n t e r r u p t   F I F O   e m p t y   p e n d i n g   b i t   * /  
         _ _ F S M C _ N A N D _ C L E A R _ F L A G ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ,   F S M C _ F L A G _ F E M P T ) ;  
     }  
  
 }  
  
 / * *  
     *   @ b r i e f     N A N D   i n t e r r u p t   f e a t u r e   c a l l b a c k  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ N A N D _ I T C a l l b a c k ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h n a n d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ N A N D _ I T C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   N A N D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   f u n c t i o n s  
     *   @ b r i e f         I n p u t   O u t p u t   a n d   m e m o r y   c o n t r o l   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   N A N D   I n p u t   a n d   O u t p u t   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   u s e   a n d   c o n t r o l   t h e   N A N D  
         m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   t h e   N A N D   m e m o r y   e l e c t r o n i c   s i g n a t u r e  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p N A N D _ I D   N A N D   I D   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e a d _ I D ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ I D T y p e D e f   * p N A N D _ I D )  
 {  
     _ _ I O   u i n t 3 2 _ t   d a t a   =   0 ;  
     _ _ I O   u i n t 3 2 _ t   d a t a 1   =   0 ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   S e n d   R e a d   I D   c o m m a n d   s e q u e n c e   * /  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )     =   N A N D _ C M D _ R E A D I D ;  
         _ _ D S B ( ) ;  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 ;  
         _ _ D S B ( ) ;  
  
         / *   R e a d   t h e   e l e c t r o n i c   s i g n a t u r e   f r o m   N A N D   f l a s h   * /  
         i f   ( h n a n d - > I n i t . M e m o r y D a t a W i d t h   = =   F S M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 8 )  
         {  
             d a t a   =   * ( _ _ I O   u i n t 3 2 _ t   * ) d e v i c e a d d r e s s ;  
  
             / *   R e t u r n   t h e   d a t a   r e a d   * /  
             p N A N D _ I D - > M a k e r _ I d       =   A D D R _ 1 S T _ C Y C L E ( d a t a ) ;  
             p N A N D _ I D - > D e v i c e _ I d     =   A D D R _ 2 N D _ C Y C L E ( d a t a ) ;  
             p N A N D _ I D - > T h i r d _ I d       =   A D D R _ 3 R D _ C Y C L E ( d a t a ) ;  
             p N A N D _ I D - > F o u r t h _ I d     =   A D D R _ 4 T H _ C Y C L E ( d a t a ) ;  
         }  
         e l s e  
         {  
             d a t a   =   * ( _ _ I O   u i n t 3 2 _ t   * ) d e v i c e a d d r e s s ;  
             d a t a 1   =   * ( ( _ _ I O   u i n t 3 2 _ t   * ) d e v i c e a d d r e s s   +   4 ) ;  
  
             / *   R e t u r n   t h e   d a t a   r e a d   * /  
             p N A N D _ I D - > M a k e r _ I d       =   A D D R _ 1 S T _ C Y C L E ( d a t a ) ;  
             p N A N D _ I D - > D e v i c e _ I d     =   A D D R _ 3 R D _ C Y C L E ( d a t a ) ;  
             p N A N D _ I D - > T h i r d _ I d       =   A D D R _ 1 S T _ C Y C L E ( d a t a 1 ) ;  
             p N A N D _ I D - > F o u r t h _ I d     =   A D D R _ 3 R D _ C Y C L E ( d a t a 1 ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     N A N D   m e m o r y   r e s e t  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e s e t ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   S e n d   N A N D   r e s e t   c o m m a n d   * /  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   0 x F F ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   d e v i c e :   E n t e r   t h e   p h y s i c a l   p a r a m e t e r s   o f   t h e   d e v i c e  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p D e v i c e C o n f i g     p o i n t e r   t o   N A N D _ D e v i c e C o n f i g T y p e D e f   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ N A N D _ C o n f i g D e v i c e ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ D e v i c e C o n f i g T y p e D e f   * p D e v i c e C o n f i g )  
 {  
     h n a n d - > C o n f i g . P a g e S i z e                       =   p D e v i c e C o n f i g - > P a g e S i z e ;  
     h n a n d - > C o n f i g . S p a r e A r e a S i z e             =   p D e v i c e C o n f i g - > S p a r e A r e a S i z e ;  
     h n a n d - > C o n f i g . B l o c k S i z e                     =   p D e v i c e C o n f i g - > B l o c k S i z e ;  
     h n a n d - > C o n f i g . B l o c k N b r                       =   p D e v i c e C o n f i g - > B l o c k N b r ;  
     h n a n d - > C o n f i g . P l a n e S i z e                     =   p D e v i c e C o n f i g - > P l a n e S i z e ;  
     h n a n d - > C o n f i g . P l a n e N b r                       =   p D e v i c e C o n f i g - > P l a n e N b r ;  
     h n a n d - > C o n f i g . E x t r a C o m m a n d E n a b l e   =   p D e v i c e C o n f i g - > E x t r a C o m m a n d E n a b l e ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   P a g e ( s )   f r o m   N A N D   m e m o r y   b l o c k   ( 8 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r     p o i n t e r   t o   d e s t i n a t i o n   r e a d   b u f f e r  
     *   @ p a r a m     N u m P a g e T o R e a d     n u m b e r   o f   p a g e s   t o   r e a d   f r o m   b l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e a d _ P a g e _ 8 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,   u i n t 8 _ t   * p B u f f e r ,  
                                                                                 u i n t 3 2 _ t   N u m P a g e T o R e a d )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m p a g e s r e a d   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   n b p a g e s   =   N u m P a g e T o R e a d ;  
     u i n t 8 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   P a g e ( s )   r e a d   l o o p   * /  
         w h i l e   ( ( n b p a g e s   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   S e n d   r e a d   p a g e   c o m m a n d   s e q u e n c e   * /  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
             _ _ D S B ( ) ;  
  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )     =   N A N D _ C M D _ A R E A _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
  
             i f   ( h n a n d - > C o n f i g . E x t r a C o m m a n d E n a b l e   = =   E N A B L E )  
             {  
                 / *   G e t   t i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
                 w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                     {  
                         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   G o   b a c k   t o   r e a d   m o d e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   ( ( u i n t 8 _ t ) 0 x 0 0 ) ;  
                 _ _ D S B ( ) ;  
             }  
  
             / *   G e t   D a t a   i n t o   B u f f e r   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . P a g e S i z e ;   i n d e x + + )  
             {  
                 * b u f f   =   * ( u i n t 8 _ t   * ) d e v i c e a d d r e s s ;  
                 b u f f + + ;  
             }  
  
             / *   I n c r e m e n t   r e a d   p a g e s   n u m b e r   * /  
             n u m p a g e s r e a d + + ;  
  
             / *   D e c r e m e n t   p a g e s   t o   r e a d   * /  
             n b p a g e s - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   P a g e ( s )   f r o m   N A N D   m e m o r y   b l o c k   ( 1 6 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r     p o i n t e r   t o   d e s t i n a t i o n   r e a d   b u f f e r .   p B u f f e r   s h o u l d   b e   1 6 b i t s   a l i g n e d  
     *   @ p a r a m     N u m P a g e T o R e a d     n u m b e r   o f   p a g e s   t o   r e a d   f r o m   b l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e a d _ P a g e _ 1 6 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,   u i n t 1 6 _ t   * p B u f f e r ,  
                                                                                   u i n t 3 2 _ t   N u m P a g e T o R e a d )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m p a g e s r e a d   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   n b p a g e s   =   N u m P a g e T o R e a d ;  
     u i n t 1 6 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   P a g e ( s )   r e a d   l o o p   * /  
         w h i l e   ( ( n b p a g e s   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   S e n d   r e a d   p a g e   c o m m a n d   s e q u e n c e   * /  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
             _ _ D S B ( ) ;  
  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )     =   N A N D _ C M D _ A R E A _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             i f   ( h n a n d - > C o n f i g . E x t r a C o m m a n d E n a b l e   = =   E N A B L E )  
             {  
                 / *   G e t   t i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
                 w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                     {  
                         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   G o   b a c k   t o   r e a d   m o d e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   ( ( u i n t 8 _ t ) 0 x 0 0 ) ;  
                 _ _ D S B ( ) ;  
             }  
  
             / *   C a l c u l a t e   P a g e S i z e   * /  
             i f   ( h n a n d - > I n i t . M e m o r y D a t a W i d t h   = =   F S M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 8 )  
             {  
                 h n a n d - > C o n f i g . P a g e S i z e   =   h n a n d - > C o n f i g . P a g e S i z e   /   2 U ;  
             }  
             e l s e  
             {  
                 / *   D o   n o t h i n g   * /  
                 / *   K e e p   t h e   s a m e   P a g e S i z e   f o r   F M C _ N A N D _ M E M _ B U S _ W I D T H _ 1 6 * /  
             }  
  
             / *   G e t   D a t a   i n t o   B u f f e r   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . P a g e S i z e ;   i n d e x + + )  
             {  
                 * b u f f   =   * ( u i n t 1 6 _ t   * ) d e v i c e a d d r e s s ;  
                 b u f f + + ;  
             }  
  
             / *   I n c r e m e n t   r e a d   p a g e s   n u m b e r   * /  
             n u m p a g e s r e a d + + ;  
  
             / *   D e c r e m e n t   p a g e s   t o   r e a d   * /  
             n b p a g e s - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   P a g e ( s )   t o   N A N D   m e m o r y   b l o c k   ( 8 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r     p o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     N u m P a g e T o W r i t e       n u m b e r   o f   p a g e s   t o   w r i t e   t o   b l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ W r i t e _ P a g e _ 8 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,   u i n t 8 _ t   * p B u f f e r ,  
                                                                                   u i n t 3 2 _ t   N u m P a g e T o W r i t e )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m p a g e s w r i t t e n   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   n b p a g e s   =   N u m P a g e T o W r i t e ;  
     u i n t 8 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   P a g e ( s )   w r i t e   l o o p   * /  
         w h i l e   ( ( n b p a g e s   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   S e n d   w r i t e   p a g e   c o m m a n d   s e q u e n c e   * /  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
             _ _ D S B ( ) ;  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E 0 ;  
             _ _ D S B ( ) ;  
  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             / *   W r i t e   d a t a   t o   m e m o r y   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . P a g e S i z e ;   i n d e x + + )  
             {  
                 * ( _ _ I O   u i n t 8 _ t   * ) d e v i c e a d d r e s s   =   * b u f f ;  
                 b u f f + + ;  
                 _ _ D S B ( ) ;  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             / *   G e t   t i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
             w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                 {  
                     / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                     h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
  
             / *   I n c r e m e n t   w r i t t e n   p a g e s   n u m b e r   * /  
             n u m p a g e s w r i t t e n + + ;  
  
             / *   D e c r e m e n t   p a g e s   t o   w r i t e   * /  
             n b p a g e s - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   P a g e ( s )   t o   N A N D   m e m o r y   b l o c k   ( 1 6 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r     p o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e .   p B u f f e r   s h o u l d   b e   1 6 b i t s   a l i g n e d  
     *   @ p a r a m     N u m P a g e T o W r i t e       n u m b e r   o f   p a g e s   t o   w r i t e   t o   b l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ W r i t e _ P a g e _ 1 6 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,   u i n t 1 6 _ t   * p B u f f e r ,  
                                                                                     u i n t 3 2 _ t   N u m P a g e T o W r i t e )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m p a g e s w r i t t e n   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   n b p a g e s   =   N u m P a g e T o W r i t e ;  
     u i n t 1 6 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   P a g e ( s )   w r i t e   l o o p   * /  
         w h i l e   ( ( n b p a g e s   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   S e n d   w r i t e   p a g e   c o m m a n d   s e q u e n c e   * /  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
             _ _ D S B ( ) ;  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E 0 ;  
             _ _ D S B ( ) ;  
  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             / *   C a l c u l a t e   P a g e S i z e   * /  
             i f   ( h n a n d - > I n i t . M e m o r y D a t a W i d t h   = =   F S M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 8 )  
             {  
                 h n a n d - > C o n f i g . P a g e S i z e   =   h n a n d - > C o n f i g . P a g e S i z e   /   2 U ;  
             }  
             e l s e  
             {  
                 / *   D o   n o t h i n g   * /  
                 / *   K e e p   t h e   s a m e   P a g e S i z e   f o r   F M C _ N A N D _ M E M _ B U S _ W I D T H _ 1 6 * /  
             }  
  
             / *   W r i t e   d a t a   t o   m e m o r y   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . P a g e S i z e ;   i n d e x + + )  
             {  
                 * ( _ _ I O   u i n t 1 6 _ t   * ) d e v i c e a d d r e s s   =   * b u f f ;  
                 b u f f + + ;  
                 _ _ D S B ( ) ;  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             / *   G e t   t i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
             w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                 {  
                     / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                     h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
  
             / *   I n c r e m e n t   w r i t t e n   p a g e s   n u m b e r   * /  
             n u m p a g e s w r i t t e n + + ;  
  
             / *   D e c r e m e n t   p a g e s   t o   w r i t e   * /  
             n b p a g e s - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   S p a r e   a r e a ( s )   f r o m   N A N D   m e m o r y   ( 8 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r   p o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     N u m S p a r e A r e a T o R e a d   N u m b e r   o f   s p a r e   a r e a   t o   r e a d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e a d _ S p a r e A r e a _ 8 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,   u i n t 8 _ t   * p B u f f e r ,  
                                                                                           u i n t 3 2 _ t   N u m S p a r e A r e a T o R e a d )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m s p a r e a r e a r e a d   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   c o l u m n a d d r e s s ;  
     u i n t 3 2 _ t   n b s p a r e   =   N u m S p a r e A r e a T o R e a d ;  
     u i n t 8 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   C o l u m n   i n   p a g e   a d d r e s s   * /  
         c o l u m n a d d r e s s   =   C O L U M N _ A D D R E S S ( h n a n d ) ;  
  
         / *   S p a r e   a r e a ( s )   r e a d   l o o p   * /  
         w h i l e   ( ( n b s p a r e   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 / *   S e n d   r e a d   s p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ C ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 / *   S e n d   r e a d   s p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             i f   ( h n a n d - > C o n f i g . E x t r a C o m m a n d E n a b l e   = =   E N A B L E )  
             {  
                 / *   G e t   t i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
                 w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                     {  
                         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   G o   b a c k   t o   r e a d   m o d e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   ( ( u i n t 8 _ t ) 0 x 0 0 ) ;  
                 _ _ D S B ( ) ;  
             }  
  
             / *   G e t   D a t a   i n t o   B u f f e r   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . S p a r e A r e a S i z e ;   i n d e x + + )  
             {  
                 * b u f f   =   * ( u i n t 8 _ t   * ) d e v i c e a d d r e s s ;  
                 b u f f + + ;  
             }  
  
             / *   I n c r e m e n t   r e a d   s p a r e   a r e a s   n u m b e r   * /  
             n u m s p a r e a r e a r e a d + + ;  
  
             / *   D e c r e m e n t   s p a r e   a r e a s   t o   r e a d   * /  
             n b s p a r e - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   S p a r e   a r e a ( s )   f r o m   N A N D   m e m o r y   ( 1 6 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r   p o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e .   p B u f f e r   s h o u l d   b e   1 6 b i t s   a l i g n e d .  
     *   @ p a r a m     N u m S p a r e A r e a T o R e a d   N u m b e r   o f   s p a r e   a r e a   t o   r e a d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e a d _ S p a r e A r e a _ 1 6 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,  
                                                                                             u i n t 1 6 _ t   * p B u f f e r ,   u i n t 3 2 _ t   N u m S p a r e A r e a T o R e a d )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m s p a r e a r e a r e a d   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   c o l u m n a d d r e s s ;  
     u i n t 3 2 _ t   n b s p a r e   =   N u m S p a r e A r e a T o R e a d ;  
     u i n t 1 6 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   C o l u m n   i n   p a g e   a d d r e s s   * /  
         c o l u m n a d d r e s s   =   ( u i n t 3 2 _ t ) ( C O L U M N _ A D D R E S S ( h n a n d ) ) ;  
  
         / *   S p a r e   a r e a ( s )   r e a d   l o o p   * /  
         w h i l e   ( ( n b s p a r e   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 / *   S e n d   r e a d   s p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ C ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 / *   S e n d   r e a d   s p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             i f   ( h n a n d - > C o n f i g . E x t r a C o m m a n d E n a b l e   = =   E N A B L E )  
             {  
                 / *   G e t   t i c k   * /  
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
                 / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
                 w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
                 {  
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                     {  
                         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                         / *   P r o c e s s   u n l o c k e d   * /  
                         _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                         r e t u r n   H A L _ T I M E O U T ;  
                     }  
                 }  
  
                 / *   G o   b a c k   t o   r e a d   m o d e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   ( ( u i n t 8 _ t ) 0 x 0 0 ) ;  
                 _ _ D S B ( ) ;  
             }  
  
             / *   G e t   D a t a   i n t o   B u f f e r   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . S p a r e A r e a S i z e ;   i n d e x + + )  
             {  
                 * b u f f   =   * ( u i n t 1 6 _ t   * ) d e v i c e a d d r e s s ;  
                 b u f f + + ;  
             }  
  
             / *   I n c r e m e n t   r e a d   s p a r e   a r e a s   n u m b e r   * /  
             n u m s p a r e a r e a r e a d + + ;  
  
             / *   D e c r e m e n t   s p a r e   a r e a s   t o   r e a d   * /  
             n b s p a r e - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   S p a r e   a r e a ( s )   t o   N A N D   m e m o r y   ( 8 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r     p o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     N u m S p a r e A r e a T o w r i t e       n u m b e r   o f   s p a r e   a r e a s   t o   w r i t e   t o   b l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ W r i t e _ S p a r e A r e a _ 8 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,  
                                                                                             u i n t 8 _ t   * p B u f f e r ,   u i n t 3 2 _ t   N u m S p a r e A r e a T o w r i t e )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m s p a r e a r e a w r i t t e n   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   c o l u m n a d d r e s s ;  
     u i n t 3 2 _ t   n b s p a r e   =   N u m S p a r e A r e a T o w r i t e ;  
     u i n t 8 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   P a g e   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   C o l u m n   i n   p a g e   a d d r e s s   * /  
         c o l u m n a d d r e s s   =   C O L U M N _ A D D R E S S ( h n a n d ) ;  
  
         / *   S p a r e   a r e a ( s )   w r i t e   l o o p   * /  
         w h i l e   ( ( n b s p a r e   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 / *   S e n d   w r i t e   S p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ C ;  
                 _ _ D S B ( ) ;  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E 0 ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 / *   S e n d   w r i t e   S p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
                 _ _ D S B ( ) ;  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E 0 ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             / *   W r i t e   d a t a   t o   m e m o r y   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . S p a r e A r e a S i z e ;   i n d e x + + )  
             {  
                 * ( _ _ I O   u i n t 8 _ t   * ) d e v i c e a d d r e s s   =   * b u f f ;  
                 b u f f + + ;  
                 _ _ D S B ( ) ;  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             / *   G e t   t i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
             w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                 {  
                     / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                     h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
  
             / *   I n c r e m e n t   w r i t t e n   s p a r e   a r e a s   n u m b e r   * /  
             n u m s p a r e a r e a w r i t t e n + + ;  
  
             / *   D e c r e m e n t   s p a r e   a r e a s   t o   w r i t e   * /  
             n b s p a r e - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   S p a r e   a r e a ( s )   t o   N A N D   m e m o r y   ( 1 6 - b i t s   a d d r e s s i n g )  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ p a r a m     p B u f f e r     p o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e .   p B u f f e r   s h o u l d   b e   1 6 b i t s   a l i g n e d .  
     *   @ p a r a m     N u m S p a r e A r e a T o w r i t e       n u m b e r   o f   s p a r e   a r e a s   t o   w r i t e   t o   b l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ W r i t e _ S p a r e A r e a _ 1 6 b ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s ,  
                                                                                               u i n t 1 6 _ t   * p B u f f e r ,   u i n t 3 2 _ t   N u m S p a r e A r e a T o w r i t e )  
 {  
     u i n t 3 2 _ t   i n d e x ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   n u m s p a r e a r e a w r i t t e n   =   0 U ;  
     u i n t 3 2 _ t   n a n d a d d r e s s ;  
     u i n t 3 2 _ t   c o l u m n a d d r e s s ;  
     u i n t 3 2 _ t   n b s p a r e   =   N u m S p a r e A r e a T o w r i t e ;  
     u i n t 1 6 _ t   * b u f f   =   p B u f f e r ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   N A N D   r a w   a d d r e s s   c a l c u l a t i o n   * /  
         n a n d a d d r e s s   =   A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ;  
  
         / *   C o l u m n   i n   p a g e   a d d r e s s   * /  
         c o l u m n a d d r e s s   =   ( u i n t 3 2 _ t ) ( C O L U M N _ A D D R E S S ( h n a n d ) ) ;  
  
         / *   S p a r e   a r e a ( s )   w r i t e   l o o p   * /  
         w h i l e   ( ( n b s p a r e   ! =   0 U )   & &   ( n a n d a d d r e s s   <   ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) ) ) )  
         {  
             / *   C a r d s   w i t h   p a g e   s i z e   < =   5 1 2   b y t e s   * /  
             i f   ( ( h n a n d - > C o n f i g . P a g e S i z e )   < =   5 1 2 U )  
             {  
                 / *   S e n d   w r i t e   S p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ C ;  
                 _ _ D S B ( ) ;  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E 0 ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   0 x 0 0 U ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
             e l s e   / *   ( h n a n d - > C o n f i g . P a g e S i z e )   >   5 1 2   * /  
             {  
                 / *   S e n d   w r i t e   S p a r e   a r e a   c o m m a n d   s e q u e n c e   * /  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ A R E A _ A ;  
                 _ _ D S B ( ) ;  
                 * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E 0 ;  
                 _ _ D S B ( ) ;  
  
                 i f   ( ( ( h n a n d - > C o n f i g . B l o c k S i z e )   *   ( h n a n d - > C o n f i g . B l o c k N b r ) )   < =   6 5 5 3 5 U )  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
                 e l s e   / *   ( ( h n a n d - > C o n f i g . B l o c k S i z e ) * ( h n a n d - > C o n f i g . B l o c k N b r ) )   >   6 5 5 3 5   * /  
                 {  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 1 S T _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   C O L U M N _ 2 N D _ C Y C L E ( c o l u m n a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( n a n d a d d r e s s ) ;  
                     _ _ D S B ( ) ;  
                 }  
             }  
  
             / *   W r i t e   d a t a   t o   m e m o r y   * /  
             f o r   ( i n d e x   =   0 U ;   i n d e x   <   h n a n d - > C o n f i g . S p a r e A r e a S i z e ;   i n d e x + + )  
             {  
                 * ( _ _ I O   u i n t 1 6 _ t   * ) d e v i c e a d d r e s s   =   * b u f f ;  
                 b u f f + + ;  
                 _ _ D S B ( ) ;  
             }  
  
             * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ W R I T E _ T R U E 1 ;  
             _ _ D S B ( ) ;  
  
             / *   G e t   t i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             / *   R e a d   s t a t u s   u n t i l   N A N D   i s   r e a d y   * /  
             w h i l e   ( H A L _ N A N D _ R e a d _ S t a t u s ( h n a n d )   ! =   N A N D _ R E A D Y )  
             {  
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   N A N D _ W R I T E _ T I M E O U T )  
                 {  
                     / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
                     h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ E R R O R ;  
  
                     / *   P r o c e s s   u n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h n a n d ) ;  
  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
             }  
  
             / *   I n c r e m e n t   w r i t t e n   s p a r e   a r e a s   n u m b e r   * /  
             n u m s p a r e a r e a w r i t t e n + + ;  
  
             / *   D e c r e m e n t   s p a r e   a r e a s   t o   w r i t e   * /  
             n b s p a r e - - ;  
  
             / *   I n c r e m e n t   t h e   N A N D   a d d r e s s   * /  
             n a n d a d d r e s s   =   ( u i n t 3 2 _ t ) ( n a n d a d d r e s s   +   1 U ) ;  
         }  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     N A N D   m e m o r y   B l o c k   e r a s e  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     p A d d r e s s     p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ E r a s e _ B l o c k ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n a n d ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
         i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
         }  
         e l s e  
         {  
             d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
         }  
  
         / *   S e n d   E r a s e   b l o c k   c o m m a n d   s e q u e n c e   * /  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ E R A S E 0 ;  
         _ _ D S B ( ) ;  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 1 S T _ C Y C L E ( A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ) ;  
         _ _ D S B ( ) ;  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 2 N D _ C Y C L E ( A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ) ;  
         _ _ D S B ( ) ;  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   A D D R _ A R E A ) )   =   A D D R _ 3 R D _ C Y C L E ( A R R A Y _ A D D R E S S ( p A d d r e s s ,   h n a n d ) ) ;  
         _ _ D S B ( ) ;  
  
         * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ E R A S E 1 ;  
         _ _ D S B ( ) ;  
  
         / *   U p d a t e   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n a n d ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n c r e m e n t   t h e   N A N D   m e m o r y   a d d r e s s  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m   p A d d r e s s   p o i n t e r   t o   N A N D   a d d r e s s   s t r u c t u r e  
     *   @ r e t v a l   T h e   n e w   s t a t u s   o f   t h e   i n c r e m e n t   a d d r e s s   o p e r a t i o n .   I t   c a n   b e :  
     *                       -   N A N D _ V A L I D _ A D D R E S S :   W h e n   t h e   n e w   a d d r e s s   i s   v a l i d   a d d r e s s  
     *                       -   N A N D _ I N V A L I D _ A D D R E S S :   W h e n   t h e   n e w   a d d r e s s   i s   i n v a l i d   a d d r e s s  
     * /  
 u i n t 3 2 _ t   H A L _ N A N D _ A d d r e s s _ I n c ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   N A N D _ A d d r e s s T y p e D e f   * p A d d r e s s )  
 {  
     u i n t 3 2 _ t   s t a t u s   =   N A N D _ V A L I D _ A D D R E S S ;  
  
     / *   I n c r e m e n t   p a g e   a d d r e s s   * /  
     p A d d r e s s - > P a g e + + ;  
  
     / *   C h e c k   N A N D   a d d r e s s   i s   v a l i d   * /  
     i f   ( p A d d r e s s - > P a g e   = =   h n a n d - > C o n f i g . B l o c k S i z e )  
     {  
         p A d d r e s s - > P a g e   =   0 ;  
         p A d d r e s s - > B l o c k + + ;  
  
         i f   ( p A d d r e s s - > B l o c k   = =   h n a n d - > C o n f i g . P l a n e S i z e )  
         {  
             p A d d r e s s - > B l o c k   =   0 ;  
             p A d d r e s s - > P l a n e + + ;  
  
             i f   ( p A d d r e s s - > P l a n e   = =   ( h n a n d - > C o n f i g . P l a n e N b r ) )  
             {  
                 s t a t u s   =   N A N D _ I N V A L I D _ A D D R E S S ;  
             }  
         }  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 # i f   ( U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   N A N D   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h n a n d   :   N A N D   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ N A N D _ M S P _ I N I T _ C B _ I D               N A N D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ N A N D _ M S P _ D E I N I T _ C B _ I D           N A N D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ N A N D _ I T _ C B _ I D                           N A N D   I T   c a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   :   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ R e g i s t e r C a l l b a c k ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   H A L _ N A N D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                         p N A N D _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h n a n d ) ;  
  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ N A N D _ M S P _ I N I T _ C B _ I D   :  
                 h n a n d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ N A N D _ M S P _ D E I N I T _ C B _ I D   :  
                 h n a n d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ N A N D _ I T _ C B _ I D   :  
                 h n a n d - > I t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ N A N D _ M S P _ I N I T _ C B _ I D   :  
                 h n a n d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ N A N D _ M S P _ D E I N I T _ C B _ I D   :  
                 h n a n d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
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
     _ _ H A L _ U N L O C K ( h n a n d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   U s e r   N A N D   C a l l b a c k  
     *                   N A N D   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h n a n d   :   N A N D   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ N A N D _ M S P _ I N I T _ C B _ I D               N A N D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ N A N D _ M S P _ D E I N I T _ C B _ I D           N A N D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ N A N D _ I T _ C B _ I D                           N A N D   I T   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N A N D _ U n R e g i s t e r C a l l b a c k ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   H A L _ N A N D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h n a n d ) ;  
  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ N A N D _ M S P _ I N I T _ C B _ I D   :  
                 h n a n d - > M s p I n i t C a l l b a c k   =   H A L _ N A N D _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ N A N D _ M S P _ D E I N I T _ C B _ I D   :  
                 h n a n d - > M s p D e I n i t C a l l b a c k   =   H A L _ N A N D _ M s p D e I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ N A N D _ I T _ C B _ I D   :  
                 h n a n d - > I t C a l l b a c k   =   H A L _ N A N D _ I T C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ N A N D _ M S P _ I N I T _ C B _ I D   :  
                 h n a n d - > M s p I n i t C a l l b a c k   =   H A L _ N A N D _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ N A N D _ M S P _ D E I N I T _ C B _ I D   :  
                 h n a n d - > M s p D e I n i t C a l l b a c k   =   H A L _ N A N D _ M s p D e I n i t ;  
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
     _ _ H A L _ U N L O C K ( h n a n d ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   N A N D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                   # # # # #   N A N D   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   d y n a m i c a l l y  
         t h e   N A N D   i n t e r f a c e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     E n a b l e s   d y n a m i c a l l y   N A N D   E C C   f e a t u r e .  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ N A N D _ E C C _ E n a b l e ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   U p d a t e   t h e   N A N D   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   E n a b l e   E C C   f e a t u r e   * /  
         ( v o i d ) F S M C _ N A N D _ E C C _ E n a b l e ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ) ;  
  
         / *   U p d a t e   t h e   N A N D   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   F S M C _ N A N D   E C C   f e a t u r e .  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ N A N D _ E C C _ D i s a b l e ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   U p d a t e   t h e   N A N D   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   D i s a b l e   E C C   f e a t u r e   * /  
         ( v o i d ) F S M C _ N A N D _ E C C _ D i s a b l e ( h n a n d - > I n s t a n c e ,   h n a n d - > I n i t . N a n d B a n k ) ;  
  
         / *   U p d a t e   t h e   N A N D   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   N A N D   E C C   f e a t u r e .  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ p a r a m     E C C v a l   p o i n t e r   t o   E C C   v a l u e  
     *   @ p a r a m     T i m e o u t   m a x i m u m   t i m e o u t   t o   w a i t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     H A L _ N A N D _ G e t E C C ( N A N D _ H a n d l e T y p e D e f   * h n a n d ,   u i n t 3 2 _ t   * E C C v a l ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s ;  
  
     / *   C h e c k   t h e   N A N D   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n a n d - > S t a t e   = =   H A L _ N A N D _ S T A T E _ R E A D Y )  
     {  
         / *   U p d a t e   t h e   N A N D   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ B U S Y ;  
  
         / *   G e t   N A N D   E C C   v a l u e   * /  
         s t a t u s   =   F S M C _ N A N D _ G e t E C C ( h n a n d - > I n s t a n c e ,   E C C v a l ,   h n a n d - > I n i t . N a n d B a n k ,   T i m e o u t ) ;  
  
         / *   U p d a t e   t h e   N A N D   s t a t e   * /  
         h n a n d - > S t a t e   =   H A L _ N A N D _ S T A T E _ R E A D Y ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   N A N D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                   # # # # #   N A N D   S t a t e   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   N A N D   c o n t r o l l e r  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     r e t u r n   t h e   N A N D   s t a t e  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ N A N D _ S t a t e T y p e D e f   H A L _ N A N D _ G e t S t a t e ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     r e t u r n   h n a n d - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     N A N D   m e m o r y   r e a d   s t a t u s  
     *   @ p a r a m     h n a n d   p o i n t e r   t o   a   N A N D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N A N D   m o d u l e .  
     *   @ r e t v a l   N A N D   s t a t u s  
     * /  
 u i n t 3 2 _ t   H A L _ N A N D _ R e a d _ S t a t u s ( N A N D _ H a n d l e T y p e D e f   * h n a n d )  
 {  
     u i n t 3 2 _ t   d a t a ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     U N U S E D ( h n a n d ) ;  
  
     / *   I d e n t i f y   t h e   d e v i c e   a d d r e s s   * /  
     i f   ( h n a n d - > I n i t . N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         d e v i c e a d d r e s s   =   N A N D _ D E V I C E 1 ;  
     }  
     e l s e  
     {  
         d e v i c e a d d r e s s   =   N A N D _ D E V I C E 2 ;  
     }  
  
     / *   S e n d   R e a d   s t a t u s   o p e r a t i o n   c o m m a n d   * /  
     * ( _ _ I O   u i n t 8 _ t   * ) ( ( u i n t 3 2 _ t ) ( d e v i c e a d d r e s s   |   C M D _ A R E A ) )   =   N A N D _ C M D _ S T A T U S ;  
  
     / *   R e a d   s t a t u s   r e g i s t e r   d a t a   * /  
     d a t a   =   * ( _ _ I O   u i n t 8 _ t   * ) d e v i c e a d d r e s s ;  
  
     / *   R e t u r n   t h e   s t a t u s   * /  
     i f   ( ( d a t a   &   N A N D _ E R R O R )   = =   N A N D _ E R R O R )  
     {  
         r e t u r n   N A N D _ E R R O R ;  
     }  
     e l s e   i f   ( ( d a t a   &   N A N D _ R E A D Y )   = =   N A N D _ R E A D Y )  
     {  
         r e t u r n   N A N D _ R E A D Y ;  
     }  
     e l s e  
     {  
         r e t u r n   N A N D _ B U S Y ;  
     }  
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
 # e n d i f   / *   H A L _ N A N D _ M O D U L E _ E N A B L E D     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  