??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ s d . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       S D   c a r d   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   S e c u r e   D i g i t a l   ( S D )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   d r i v e r   i m p l e m e n t s   a   h i g h   l e v e l   c o m m u n i c a t i o n   l a y e r   f o r   r e a d   a n d   w r i t e   f r o m / t o  
         t h i s   m e m o r y .   T h e   n e e d e d   S T M 3 2   h a r d w a r e   r e s o u r c e s   ( S D I O   a n d   G P I O )   a r e   p e r f o r m e d   b y  
         t h e   u s e r   i n   H A L _ S D _ M s p I n i t ( )   f u n c t i o n   ( M S P   l a y e r ) .  
         B a s i c a l l y ,   t h e   M S P   l a y e r   c o n f i g u r a t i o n   s h o u l d   b e   t h e   s a m e   a s   w e   p r o v i d e   i n   t h e  
         e x a m p l e s .  
         Y o u   c a n   e a s i l y   t a i l o r   t h i s   c o n f i g u r a t i o n   a c c o r d i n g   t o   h a r d w a r e   r e s o u r c e s .  
  
     [ . . ]  
         T h i s   d r i v e r   i s   a   g e n e r i c   l a y e r e d   d r i v e r   f o r   S D I O   m e m o r i e s   w h i c h   u s e s   t h e   H A L  
         S D I O   d r i v e r   f u n c t i o n s   t o   i n t e r f a c e   w i t h   S D   a n d   u S D   c a r d s   d e v i c e s .  
         I t   i s   u s e d   a s   f o l l o w s :  
  
         ( # ) I n i t i a l i z e   t h e   S D I O   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   H A L _ S D _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   S D I O   i n t e r f a c e   c l o c k   u s i n g   _ _ H A L _ R C C _ S D I O _ C L K _ E N A B L E ( ) ;  
                 ( # # )   S D I O   p i n s   c o n f i g u r a t i o n   f o r   S D   c a r d  
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   S D I O   G P I O s   u s i n g   t h e   f u n c t i o n s   _ _ H A L _ R C C _ G P I O x _ C L K _ E N A B L E ( ) ;  
                         ( + + + )   C o n f i g u r e   t h e s e   S D I O   p i n s   a s   a l t e r n a t e   f u n c t i o n   p u l l - u p   u s i n g   H A L _ G P I O _ I n i t ( )  
                                     a n d   a c c o r d i n g   t o   y o u r   p i n   a s s i g n m e n t ;  
                 ( # # )   D M A   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   D M A   p r o c e s s   ( H A L _ S D _ R e a d B l o c k s _ D M A ( )  
                           a n d   H A L _ S D _ W r i t e B l o c k s _ D M A ( )   A P I s ) .  
                         ( + + + )   E n a b l e   t h e   D M A x   i n t e r f a c e   c l o c k   u s i n g   _ _ H A L _ R C C _ D M A x _ C L K _ E N A B L E ( ) ;  
                         ( + + + )   C o n f i g u r e   t h e   D M A   u s i n g   t h e   f u n c t i o n   H A L _ D M A _ I n i t ( )   w i t h   p r e d e c l a r e d   a n d   f i l l e d .  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   w h e n   u s i n g   D M A   t r a n s f e r .  
                         ( + + + )   C o n f i g u r e   t h e   S D I O   a n d   D M A   i n t e r r u p t   p r i o r i t i e s   u s i n g   f u n c t i o n s  
                                     H A L _ N V I C _ S e t P r i o r i t y ( ) ;   D M A   p r i o r i t y   i s   s u p e r i o r   t o   S D I O ' s   p r i o r i t y  
                         ( + + + )   E n a b l e   t h e   N V I C   D M A   a n d   S D I O   I R Q s   u s i n g   f u n c t i o n   H A L _ N V I C _ E n a b l e I R Q ( )  
                         ( + + + )   S D I O   i n t e r r u p t s   a r e   m a n a g e d   u s i n g   t h e   m a c r o s   _ _ H A L _ S D _ E N A B L E _ I T ( )  
                                     a n d   _ _ H A L _ S D _ D I S A B L E _ I T ( )   i n s i d e   t h e   c o m m u n i c a t i o n   p r o c e s s .  
                         ( + + + )   S D I O   i n t e r r u p t s   p e n d i n g   b i t s   a r e   m a n a g e d   u s i n g   t h e   m a c r o s   _ _ H A L _ S D _ G E T _ I T ( )  
                                     a n d   _ _ H A L _ S D _ C L E A R _ I T ( )  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   ( H A L _ S D _ R e a d B l o c k s _ I T ( )  
                           a n d   H A L _ S D _ W r i t e B l o c k s _ I T ( )   A P I s ) .  
                         ( + + + )   C o n f i g u r e   t h e   S D I O   i n t e r r u p t   p r i o r i t i e s   u s i n g   f u n c t i o n   H A L _ N V I C _ S e t P r i o r i t y ( ) ;  
                         ( + + + )   E n a b l e   t h e   N V I C   S D I O   I R Q s   u s i n g   f u n c t i o n   H A L _ N V I C _ E n a b l e I R Q ( )  
                         ( + + + )   S D I O   i n t e r r u p t s   a r e   m a n a g e d   u s i n g   t h e   m a c r o s   _ _ H A L _ S D _ E N A B L E _ I T ( )  
                                     a n d   _ _ H A L _ S D _ D I S A B L E _ I T ( )   i n s i d e   t h e   c o m m u n i c a t i o n   p r o c e s s .  
                         ( + + + )   S D I O   i n t e r r u p t s   p e n d i n g   b i t s   a r e   m a n a g e d   u s i n g   t h e   m a c r o s   _ _ H A L _ S D _ G E T _ I T ( )  
                                     a n d   _ _ H A L _ S D _ C L E A R _ I T ( )  
         ( # )   A t   t h i s   s t a g e ,   y o u   c a n   p e r f o r m   S D   r e a d / w r i t e / e r a s e   o p e r a t i o n s   a f t e r   S D   c a r d   i n i t i a l i z a t i o n  
  
  
     * * *   S D   C a r d   I n i t i a l i z a t i o n   a n d   c o n f i g u r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T o   i n i t i a l i z e   t h e   S D   C a r d ,   u s e   t h e   H A L _ S D _ I n i t ( )   f u n c t i o n .   I t   I n i t i a l i z e s  
         S D I O   P e r i p h e r a l ( S T M 3 2   s i d e )   a n d   t h e   S D   C a r d ,   a n d   p u t   i t   i n t o   S t a n d B y   S t a t e   ( R e a d y   f o r   d a t a   t r a n s f e r ) .  
         T h i s   f u n c t i o n   p r o v i d e   t h e   f o l l o w i n g   o p e r a t i o n s :  
  
         ( # )   A p p l y   t h e   S D   C a r d   i n i t i a l i z a t i o n   p r o c e s s   a t   4 0 0 K H z   a n d   c h e c k   t h e   S D   C a r d  
                 t y p e   ( S t a n d a r d   C a p a c i t y   o r   H i g h   C a p a c i t y ) .   Y o u   c a n   c h a n g e   o r   a d a p t   t h i s  
                 f r e q u e n c y   b y   a d j u s t i n g   t h e   " C l o c k D i v "   f i e l d .  
                 T h e   S D   C a r d   f r e q u e n c y   ( S D I O _ C K )   i s   c o m p u t e d   a s   f o l l o w s :  
  
                       S D I O _ C K   =   S D I O C L K   /   ( C l o c k D i v   +   2 )  
  
                 I n   i n i t i a l i z a t i o n   m o d e   a n d   a c c o r d i n g   t o   t h e   S D   C a r d   s t a n d a r d ,  
                 m a k e   s u r e   t h a t   t h e   S D I O _ C K   f r e q u e n c y   d o e s n ' t   e x c e e d   4 0 0 K H z .  
  
                 T h i s   p h a s e   o f   i n i t i a l i z a t i o n   i s   d o n e   t h r o u g h   S D I O _ I n i t ( )   a n d  
                 S D I O _ P o w e r S t a t e _ O N ( )   S D I O   l o w   l e v e l   A P I s .  
  
         ( # )   I n i t i a l i z e   t h e   S D   c a r d .   T h e   A P I   u s e d   i s   H A L _ S D _ I n i t C a r d ( ) .  
                 T h i s   p h a s e   a l l o w s   t h e   c a r d   i n i t i a l i z a t i o n   a n d   i d e n t i f i c a t i o n  
                 a n d   c h e c k   t h e   S D   C a r d   t y p e   ( S t a n d a r d   C a p a c i t y   o r   H i g h   C a p a c i t y )  
                 T h e   i n i t i a l i z a t i o n   f l o w   i s   c o m p a t i b l e   w i t h   S D   s t a n d a r d .  
  
                 T h i s   A P I   ( H A L _ S D _ I n i t C a r d ( ) )   c o u l d   b e   u s e d   a l s o   t o   r e i n i t i a l i z e   t h e   c a r d   i n   c a s e  
                 o f   p l u g - o f f   p l u g - i n .  
  
         ( # )   C o n f i g u r e   t h e   S D   C a r d   D a t a   t r a n s f e r   f r e q u e n c y .   Y o u   c a n   c h a n g e   o r   a d a p t   t h i s  
                 f r e q u e n c y   b y   a d j u s t i n g   t h e   " C l o c k D i v "   f i e l d .  
                 I n   t r a n s f e r   m o d e   a n d   a c c o r d i n g   t o   t h e   S D   C a r d   s t a n d a r d ,   m a k e   s u r e   t h a t   t h e  
                 S D I O _ C K   f r e q u e n c y   d o e s n ' t   e x c e e d   2 5 M H z   a n d   5 0 M H z   i n   H i g h - s p e e d   m o d e   s w i t c h .  
                 T o   b e   a b l e   t o   u s e   a   f r e q u e n c y   h i g h e r   t h a n   2 4 M H z ,   y o u   s h o u l d   u s e   t h e   S D I O  
                 p e r i p h e r a l   i n   b y p a s s   m o d e .   R e f e r   t o   t h e   c o r r e s p o n d i n g   r e f e r e n c e   m a n u a l  
                 f o r   m o r e   d e t a i l s .  
  
         ( # )   S e l e c t   t h e   c o r r e s p o n d i n g   S D   C a r d   a c c o r d i n g   t o   t h e   a d d r e s s   r e a d   w i t h   t h e   s t e p   2 .  
  
         ( # )   C o n f i g u r e   t h e   S D   C a r d   i n   w i d e   b u s   m o d e :   4 - b i t s   d a t a .  
  
     * * *   S D   C a r d   R e a d   o p e r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   Y o u   c a n   r e a d   f r o m   S D   c a r d   i n   p o l l i n g   m o d e   b y   u s i n g   f u n c t i o n   H A L _ S D _ R e a d B l o c k s ( ) .  
                 T h i s   f u n c t i o n   s u p p o r t   o n l y   5 1 2 - b y t e s   b l o c k   l e n g t h   ( t h e   b l o c k   s i z e   s h o u l d   b e  
                 c h o s e n   a s   5 1 2   b y t e s ) .  
                 Y o u   c a n   c h o o s e   e i t h e r   o n e   b l o c k   r e a d   o p e r a t i o n   o r   m u l t i p l e   b l o c k   r e a d   o p e r a t i o n  
                 b y   a d j u s t i n g   t h e   " N u m b e r O f B l o c k s "   p a r a m e t e r .  
                 A f t e r   t h i s ,   y o u   h a v e   t o   e n s u r e   t h a t   t h e   t r a n s f e r   i s   d o n e   c o r r e c t l y .   T h e   c h e c k   i s   d o n e  
                 t h r o u g h   H A L _ S D _ G e t C a r d S t a t e ( )   f u n c t i o n   f o r   S D   c a r d   s t a t e .  
  
         ( + )   Y o u   c a n   r e a d   f r o m   S D   c a r d   i n   D M A   m o d e   b y   u s i n g   f u n c t i o n   H A L _ S D _ R e a d B l o c k s _ D M A ( ) .  
                 T h i s   f u n c t i o n   s u p p o r t   o n l y   5 1 2 - b y t e s   b l o c k   l e n g t h   ( t h e   b l o c k   s i z e   s h o u l d   b e  
                 c h o s e n   a s   5 1 2   b y t e s ) .  
                 Y o u   c a n   c h o o s e   e i t h e r   o n e   b l o c k   r e a d   o p e r a t i o n   o r   m u l t i p l e   b l o c k   r e a d   o p e r a t i o n  
                 b y   a d j u s t i n g   t h e   " N u m b e r O f B l o c k s "   p a r a m e t e r .  
                 A f t e r   t h i s ,   y o u   h a v e   t o   e n s u r e   t h a t   t h e   t r a n s f e r   i s   d o n e   c o r r e c t l y .   T h e   c h e c k   i s   d o n e  
                 t h r o u g h   H A L _ S D _ G e t C a r d S t a t e ( )   f u n c t i o n   f o r   S D   c a r d   s t a t e .  
                 Y o u   c o u l d   a l s o   c h e c k   t h e   D M A   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   R x   i n t e r r u p t   e v e n t .  
  
         ( + )   Y o u   c a n   r e a d   f r o m   S D   c a r d   i n   I n t e r r u p t   m o d e   b y   u s i n g   f u n c t i o n   H A L _ S D _ R e a d B l o c k s _ I T ( ) .  
                 T h i s   f u n c t i o n   s u p p o r t   o n l y   5 1 2 - b y t e s   b l o c k   l e n g t h   ( t h e   b l o c k   s i z e   s h o u l d   b e  
                 c h o s e n   a s   5 1 2   b y t e s ) .  
                 Y o u   c a n   c h o o s e   e i t h e r   o n e   b l o c k   r e a d   o p e r a t i o n   o r   m u l t i p l e   b l o c k   r e a d   o p e r a t i o n  
                 b y   a d j u s t i n g   t h e   " N u m b e r O f B l o c k s "   p a r a m e t e r .  
                 A f t e r   t h i s ,   y o u   h a v e   t o   e n s u r e   t h a t   t h e   t r a n s f e r   i s   d o n e   c o r r e c t l y .   T h e   c h e c k   i s   d o n e  
                 t h r o u g h   H A L _ S D _ G e t C a r d S t a t e ( )   f u n c t i o n   f o r   S D   c a r d   s t a t e .  
                 Y o u   c o u l d   a l s o   c h e c k   t h e   I T   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   R x   i n t e r r u p t   e v e n t .  
  
     * * *   S D   C a r d   W r i t e   o p e r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   Y o u   c a n   w r i t e   t o   S D   c a r d   i n   p o l l i n g   m o d e   b y   u s i n g   f u n c t i o n   H A L _ S D _ W r i t e B l o c k s ( ) .  
                 T h i s   f u n c t i o n   s u p p o r t   o n l y   5 1 2 - b y t e s   b l o c k   l e n g t h   ( t h e   b l o c k   s i z e   s h o u l d   b e  
                 c h o s e n   a s   5 1 2   b y t e s ) .  
                 Y o u   c a n   c h o o s e   e i t h e r   o n e   b l o c k   r e a d   o p e r a t i o n   o r   m u l t i p l e   b l o c k   r e a d   o p e r a t i o n  
                 b y   a d j u s t i n g   t h e   " N u m b e r O f B l o c k s "   p a r a m e t e r .  
                 A f t e r   t h i s ,   y o u   h a v e   t o   e n s u r e   t h a t   t h e   t r a n s f e r   i s   d o n e   c o r r e c t l y .   T h e   c h e c k   i s   d o n e  
                 t h r o u g h   H A L _ S D _ G e t C a r d S t a t e ( )   f u n c t i o n   f o r   S D   c a r d   s t a t e .  
  
         ( + )   Y o u   c a n   w r i t e   t o   S D   c a r d   i n   D M A   m o d e   b y   u s i n g   f u n c t i o n   H A L _ S D _ W r i t e B l o c k s _ D M A ( ) .  
                 T h i s   f u n c t i o n   s u p p o r t   o n l y   5 1 2 - b y t e s   b l o c k   l e n g t h   ( t h e   b l o c k   s i z e   s h o u l d   b e  
                 c h o s e n   a s   5 1 2   b y t e s ) .  
                 Y o u   c a n   c h o o s e   e i t h e r   o n e   b l o c k   r e a d   o p e r a t i o n   o r   m u l t i p l e   b l o c k   r e a d   o p e r a t i o n  
                 b y   a d j u s t i n g   t h e   " N u m b e r O f B l o c k s "   p a r a m e t e r .  
                 A f t e r   t h i s ,   y o u   h a v e   t o   e n s u r e   t h a t   t h e   t r a n s f e r   i s   d o n e   c o r r e c t l y .   T h e   c h e c k   i s   d o n e  
                 t h r o u g h   H A L _ S D _ G e t C a r d S t a t e ( )   f u n c t i o n   f o r   S D   c a r d   s t a t e .  
                 Y o u   c o u l d   a l s o   c h e c k   t h e   D M A   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   T x   i n t e r r u p t   e v e n t .  
  
         ( + )   Y o u   c a n   w r i t e   t o   S D   c a r d   i n   I n t e r r u p t   m o d e   b y   u s i n g   f u n c t i o n   H A L _ S D _ W r i t e B l o c k s _ I T ( ) .  
                 T h i s   f u n c t i o n   s u p p o r t   o n l y   5 1 2 - b y t e s   b l o c k   l e n g t h   ( t h e   b l o c k   s i z e   s h o u l d   b e  
                 c h o s e n   a s   5 1 2   b y t e s ) .  
                 Y o u   c a n   c h o o s e   e i t h e r   o n e   b l o c k   r e a d   o p e r a t i o n   o r   m u l t i p l e   b l o c k   r e a d   o p e r a t i o n  
                 b y   a d j u s t i n g   t h e   " N u m b e r O f B l o c k s "   p a r a m e t e r .  
                 A f t e r   t h i s ,   y o u   h a v e   t o   e n s u r e   t h a t   t h e   t r a n s f e r   i s   d o n e   c o r r e c t l y .   T h e   c h e c k   i s   d o n e  
                 t h r o u g h   H A L _ S D _ G e t C a r d S t a t e ( )   f u n c t i o n   f o r   S D   c a r d   s t a t e .  
                 Y o u   c o u l d   a l s o   c h e c k   t h e   I T   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   T x   i n t e r r u p t   e v e n t .  
  
     * * *   S D   c a r d   s t a t u s   * * *  
     = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   T h e   S D   S t a t u s   c o n t a i n s   s t a t u s   b i t s   t h a t   a r e   r e l a t e d   t o   t h e   S D   M e m o r y  
                 C a r d   p r o p r i e t a r y   f e a t u r e s .   T o   g e t   S D   c a r d   s t a t u s   u s e   t h e   H A L _ S D _ G e t C a r d S t a t u s ( ) .  
  
     * * *   S D   c a r d   i n f o r m a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         ( + )   T o   g e t   S D   c a r d   i n f o r m a t i o n ,   y o u   c a n   u s e   t h e   f u n c t i o n   H A L _ S D _ G e t C a r d I n f o ( ) .  
                 I t   r e t u r n s   u s e f u l   i n f o r m a t i o n   a b o u t   t h e   S D   c a r d   s u c h   a s   b l o c k   s i z e ,   c a r d   t y p e ,  
                 b l o c k   n u m b e r   . . .  
  
     * * *   S D   c a r d   C S D   r e g i s t e r   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         ( + )   T h e   H A L _ S D _ G e t C a r d C S D ( )   A P I   a l l o w s   t o   g e t   t h e   p a r a m e t e r s   o f   t h e   C S D   r e g i s t e r .  
                 S o m e   o f   t h e   C S D   p a r a m e t e r s   a r e   u s e f u l   f o r   c a r d   i n i t i a l i z a t i o n   a n d   i d e n t i f i c a t i o n .  
  
     * * *   S D   c a r d   C I D   r e g i s t e r   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         ( + )   T h e   H A L _ S D _ G e t C a r d C I D ( )   A P I   a l l o w s   t o   g e t   t h e   p a r a m e t e r s   o f   t h e   C I D   r e g i s t e r .  
                 S o m e   o f   t h e   C S D   p a r a m e t e r s   a r e   u s e f u l   f o r   c a r d   i n i t i a l i z a t i o n   a n d   i d e n t i f i c a t i o n .  
  
     * * *   S D   H A L   d r i v e r   m a c r o s   l i s t   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   S D   H A L   d r i v e r .  
  
         ( + )   _ _ H A L _ S D _ E N A B L E   :   E n a b l e   t h e   S D   d e v i c e  
         ( + )   _ _ H A L _ S D _ D I S A B L E   :   D i s a b l e   t h e   S D   d e v i c e  
         ( + )   _ _ H A L _ S D _ D M A _ E N A B L E :   E n a b l e   t h e   S D I O   D M A   t r a n s f e r  
         ( + )   _ _ H A L _ S D _ D M A _ D I S A B L E :   D i s a b l e   t h e   S D I O   D M A   t r a n s f e r  
         ( + )   _ _ H A L _ S D _ E N A B L E _ I T :   E n a b l e   t h e   S D   d e v i c e   i n t e r r u p t  
         ( + )   _ _ H A L _ S D _ D I S A B L E _ I T :   D i s a b l e   t h e   S D   d e v i c e   i n t e r r u p t  
         ( + )   _ _ H A L _ S D _ G E T _ F L A G : C h e c k   w h e t h e r   t h e   s p e c i f i e d   S D   f l a g   i s   s e t   o r   n o t  
         ( + )   _ _ H A L _ S D _ C L E A R _ F L A G :   C l e a r   t h e   S D ' s   p e n d i n g   f l a g s  
  
         ( @ )   Y o u   c a n   r e f e r   t o   t h e   S D   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
  
     * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
         a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
         U s e   F u n c t i o n s   @ r e f   H A L _ S D _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k ,  
         i t   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
             ( + )   T x C p l t C a l l b a c k   :   c a l l b a c k   w h e n   a   t r a n s m i s s i o n   t r a n s f e r   i s   c o m p l e t e d .  
             ( + )   R x C p l t C a l l b a c k   :   c a l l b a c k   w h e n   a   r e c e p t i o n   t r a n s f e r   i s   c o m p l e t e d .  
             ( + )   E r r o r C a l l b a c k   :   c a l l b a c k   w h e n   e r r o r   o c c u r s .  
             ( + )   A b o r t C p l t C a l l b a c k   :   c a l l b a c k   w h e n   a b o r t   i s   c o m p l e t e d .  
             ( + )   M s p I n i t C a l l b a c k         :   S D   M s p I n i t .  
             ( + )   M s p D e I n i t C a l l b a c k     :   S D   M s p D e I n i t .  
         T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
         a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
         U s e   f u n c t i o n   @ r e f   H A L _ S D _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
         w e a k   ( s u r c h a r g e d )   f u n c t i o n .   I t   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
             ( + )   T x C p l t C a l l b a c k   :   c a l l b a c k   w h e n   a   t r a n s m i s s i o n   t r a n s f e r   i s   c o m p l e t e d .  
             ( + )   R x C p l t C a l l b a c k   :   c a l l b a c k   w h e n   a   r e c e p t i o n   t r a n s f e r   i s   c o m p l e t e d .  
             ( + )   E r r o r C a l l b a c k   :   c a l l b a c k   w h e n   e r r o r   o c c u r s .  
             ( + )   A b o r t C p l t C a l l b a c k   :   c a l l b a c k   w h e n   a b o r t   i s   c o m p l e t e d .  
             ( + )   M s p I n i t C a l l b a c k         :   S D   M s p I n i t .  
             ( + )   M s p D e I n i t C a l l b a c k     :   S D   M s p D e I n i t .  
         T h i s   f u n c t i o n )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
  
         B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ S D _ I n i t   a n d   i f   t h e   s t a t e   i s   H A L _ S D _ S T A T E _ R E S E T  
         a l l   c a l l b a c k s   a r e   r e s e t   t o   t h e   c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s .  
         E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s p e c t i v e l y  
         r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ S D _ I n i t  
         a n d   @ r e f     H A L _ S D _ D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
         I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ S D _ I n i t   a n d   @ r e f   H A L _ S D _ D e I n i t  
         k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
         C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   R E A D Y   s t a t e   o n l y .  
         E x c e p t i o n   d o n e   f o r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
         i n   R E A D Y   o r   R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d  
         d u r i n g   t h e   I n i t / D e I n i t .  
         I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
         u s i n g   @ r e f   H A L _ S D _ R e g i s t e r C a l l b a c k   b e f o r e   c a l l i n g   @ r e f   H A L _ S D _ D e I n i t  
         o r   @ r e f   H A L _ S D _ I n i t   f u n c t i o n .  
  
         W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
         n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t e r i n g   f e a t u r e   i s   n o t   a v a i l a b l e  
         a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 8   S T M i c r o e l e c t r o n i c s .  
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
 # i f   d e f i n e d ( S D I O )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   S D  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ S D _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S D _ P r i v a t e _ D e f i n e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S D _ P r i v a t e _ F u n c t i o n s   S D   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ I n i t C a r d ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   u i n t 3 2 _ t   S D _ P o w e r O N ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   u i n t 3 2 _ t   S D _ S e n d S D S t a t u s ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   * p S D s t a t u s ) ;  
 s t a t i c   u i n t 3 2 _ t   S D _ S e n d S t a t u s ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   * p C a r d S t a t u s ) ;  
 s t a t i c   u i n t 3 2 _ t   S D _ W i d e B u s _ E n a b l e ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   u i n t 3 2 _ t   S D _ W i d e B u s _ D i s a b l e ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   u i n t 3 2 _ t   S D _ F i n d S C R ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   * p S C R ) ;  
 s t a t i c   v o i d   S D _ P o w e r O F F ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   v o i d   S D _ W r i t e _ I T ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   v o i d   S D _ R e a d _ I T ( S D _ H a n d l e T y p e D e f   * h s d ) ;  
 s t a t i c   v o i d   S D _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S D _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S D _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S D _ D M A T x A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S D _ D M A R x A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S D _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   S D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
   *     @ b r i e f       I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                     # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e / d e - i n i t i a l i z e   t h e   S D  
         c a r d   d e v i c e   t o   b e   r e a d y   f o r   u s e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   S D   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n   t h e  
                         S D _ H a n d l e T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   t h e   S D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ I n i t ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   C h e c k   t h e   S D   h a n d l e   a l l o c a t i o n   * /  
     i f ( h s d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ A L L _ I N S T A N C E ( h s d - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L O C K _ E D G E ( h s d - > I n i t . C l o c k E d g e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L O C K _ B Y P A S S ( h s d - > I n i t . C l o c k B y p a s s ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L O C K _ P O W E R _ S A V E ( h s d - > I n i t . C l o c k P o w e r S a v e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ B U S _ W I D E ( h s d - > I n i t . B u s W i d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ H A R D W A R E _ F L O W _ C O N T R O L ( h s d - > I n i t . H a r d w a r e F l o w C o n t r o l ) ) ;  
     a s s e r t _ p a r a m ( I S _ S D I O _ C L K D I V ( h s d - > I n i t . C l o c k D i v ) ) ;  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h s d - > L o c k   =   H A L _ U N L O C K E D ;  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         / *   R e s e t   C a l l b a c k   p o i n t e r s   i n   H A L _ S D _ S T A T E _ R E S E T   o n l y   * /  
         h s d - > T x C p l t C a l l b a c k         =   H A L _ S D _ T x C p l t C a l l b a c k ;  
         h s d - > R x C p l t C a l l b a c k         =   H A L _ S D _ R x C p l t C a l l b a c k ;  
         h s d - > E r r o r C a l l b a c k           =   H A L _ S D _ E r r o r C a l l b a c k ;  
         h s d - > A b o r t C p l t C a l l b a c k   =   H A L _ S D _ A b o r t C a l l b a c k ;  
  
         i f ( h s d - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h s d - > M s p I n i t C a l l b a c k   =   H A L _ S D _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h s d - > M s p I n i t C a l l b a c k ( h s d ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   C O R T E X . . . e t c   * /  
         H A L _ S D _ M s p I n i t ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
     / *   I n i t i a l i z e   t h e   C a r d   p a r a m e t e r s   * /  
     i f   ( H A L _ S D _ I n i t C a r d ( h s d )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   I n i t i a l i z e   t h e   e r r o r   c o d e   * /  
     h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
     / *   I n i t i a l i z e   t h e   S D   o p e r a t i o n   * /  
     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
  
     / *   I n i t i a l i z e   t h e   S D   s t a t e   * /  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   S D   C a r d .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ n o t e       T h i s   f u n c t i o n   i n i t i a l i z e s   t h e   S D   c a r d .   I t   c o u l d   b e   u s e d   w h e n   a   c a r d  
                         r e - i n i t i a l i z a t i o n   i s   n e e d e d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ I n i t C a r d ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s ;  
     S D _ I n i t T y p e D e f   I n i t ;  
      
     / *   D e f a u l t   S D I O   p e r i p h e r a l   c o n f i g u r a t i o n   f o r   S D   c a r d   i n i t i a l i z a t i o n   * /  
     I n i t . C l o c k E d g e                       =   S D I O _ C L O C K _ E D G E _ R I S I N G ;  
     I n i t . C l o c k B y p a s s                   =   S D I O _ C L O C K _ B Y P A S S _ D I S A B L E ;  
     I n i t . C l o c k P o w e r S a v e             =   S D I O _ C L O C K _ P O W E R _ S A V E _ D I S A B L E ;  
     I n i t . B u s W i d e                           =   S D I O _ B U S _ W I D E _ 1 B ;  
     I n i t . H a r d w a r e F l o w C o n t r o l   =   S D I O _ H A R D W A R E _ F L O W _ C O N T R O L _ D I S A B L E ;  
     I n i t . C l o c k D i v                         =   S D I O _ I N I T _ C L K _ D I V ;  
  
     / *   I n i t i a l i z e   S D I O   p e r i p h e r a l   i n t e r f a c e   w i t h   d e f a u l t   c o n f i g u r a t i o n   * /  
     s t a t u s   =   S D I O _ I n i t ( h s d - > I n s t a n c e ,   I n i t ) ;  
     i f ( s t a t u s   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   D i s a b l e   S D I O   C l o c k   * /  
     _ _ H A L _ S D _ D I S A B L E ( h s d ) ;  
  
     / *   S e t   P o w e r   S t a t e   t o   O N   * /  
     ( v o i d ) S D I O _ P o w e r S t a t e _ O N ( h s d - > I n s t a n c e ) ;  
  
     / *   E n a b l e   S D I O   C l o c k   * /  
     _ _ H A L _ S D _ E N A B L E ( h s d ) ;  
  
     / *   I d e n t i f y   c a r d   o p e r a t i n g   v o l t a g e   * /  
     e r r o r s t a t e   =   S D _ P o w e r O N ( h s d ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C a r d   i n i t i a l i z a t i o n   * /  
     e r r o r s t a t e   =   S D _ I n i t C a r d ( h s d ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /  
     e r r o r s t a t e   =   S D M M C _ C m d B l o c k L e n g t h ( h s d - > I n s t a n c e ,   B L O C K S I Z E ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
         h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e - I n i t i a l i z e s   t h e   S D   c a r d .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ D e I n i t ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   C h e c k   t h e   S D   h a n d l e   a l l o c a t i o n   * /  
     i f ( h s d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ A L L _ I N S T A N C E ( h s d - > I n s t a n c e ) ) ;  
  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
     / *   S e t   S D   p o w e r   s t a t e   t o   o f f   * /  
     S D _ P o w e r O F F ( h s d ) ;  
  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     i f ( h s d - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h s d - > M s p D e I n i t C a l l b a c k   =   H A L _ S D _ M s p D e I n i t ;  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h s d - > M s p D e I n i t C a l l b a c k ( h s d ) ;  
 # e l s e  
     / *   D e - I n i t i a l i z e   t h e   M S P   l a y e r   * /  
     H A L _ S D _ M s p D e I n i t ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E S E T ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   S D   M S P .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S D _ M s p I n i t ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S D _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e - I n i t i a l i z e   S D   M S P .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S D _ M s p D e I n i t ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S D _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
   *     @ b r i e f       D a t a   t r a n s f e r   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   d a t a  
         t r a n s f e r   f r o m / t o   S D   c a r d .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d s   b l o c k ( s )   f r o m   a   s p e c i f i e d   a d d r e s s   i n   a   c a r d .   T h e   D a t a   t r a n s f e r  
     *                   i s   m a n a g e d   b y   p o l l i n g   m o d e .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p D a t a :   p o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   r e c e i v e d   d a t a  
     *   @ p a r a m     B l o c k A d d :   B l o c k   A d d r e s s   f r o m   w h e r e   d a t a   i s   t o   b e   r e a d  
     *   @ p a r a m     N u m b e r O f B l o c k s :   N u m b e r   o f   S D   b l o c k s   t o   r e a d  
     *   @ p a r a m     T i m e o u t :   S p e c i f y   t i m e o u t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ R e a d B l o c k s ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   B l o c k A d d ,   u i n t 3 2 _ t   N u m b e r O f B l o c k s ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     u i n t 3 2 _ t   c o u n t ,   d a t a ,   d a t a r e m a i n i n g ;  
     u i n t 3 2 _ t   a d d   =   B l o c k A d d ;  
     u i n t 8 _ t   * t e m p b u f f   =   p D a t a ;  
  
     i f ( N U L L   = =   p D a t a )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( ( a d d   +   N u m b e r O f B l o c k s )   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   I n i t i a l i z e   d a t a   c o n t r o l   r e g i s t e r   * /  
         h s d - > I n s t a n c e - > D C T R L   =   0 U ;  
  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
         {  
             a d d   * =   5 1 2 U ;  
         }  
  
         / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
         c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
         c o n f i g . D a t a L e n g t h         =   N u m b e r O f B l o c k s   *   B L O C K S I Z E ;  
         c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 5 1 2 B ;  
         c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ S D I O ;  
         c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
         c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
         ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
         / *   R e a d   b l o c k ( s )   i n   p o l l i n g   m o d e   * /  
         i f ( N u m b e r O f B l o c k s   >   1 U )  
         {  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K ;  
  
             / *   R e a d   M u l t i   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d R e a d M u l t i B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         e l s e  
         {  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K ;  
  
             / *   R e a d   S i n g l e   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d R e a d S i n g l e B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P o l l   o n   S D I O   f l a g s   * /  
         d a t a r e m a i n i n g   =   c o n f i g . D a t a L e n g t h ;  
         w h i l e ( ! _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R   |   S D I O _ F L A G _ D C R C F A I L   |   S D I O _ F L A G _ D T I M E O U T   |   S D I O _ F L A G _ D A T A E N D   |   S D I O _ F L A G _ S T B I T E R R ) )  
         {  
             i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X F I F O H F )   & &   ( d a t a r e m a i n i n g   >   0 U ) )  
             {  
                 / *   R e a d   d a t a   f r o m   S D I O   R x   F I F O   * /  
                 f o r ( c o u n t   =   0 U ;   c o u n t   <   8 U ;   c o u n t + + )  
                 {  
                     d a t a   =   S D I O _ R e a d F I F O ( h s d - > I n s t a n c e ) ;  
                     * t e m p b u f f   =   ( u i n t 8 _ t ) ( d a t a   &   0 x F F U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     * t e m p b u f f   =   ( u i n t 8 _ t ) ( ( d a t a   > >   8 U )   &   0 x F F U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     * t e m p b u f f   =   ( u i n t 8 _ t ) ( ( d a t a   > >   1 6 U )   &   0 x F F U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     * t e m p b u f f   =   ( u i n t 8 _ t ) ( ( d a t a   > >   2 4 U )   &   0 x F F U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                 }  
             }  
  
             i f ( ( ( H A L _ G e t T i c k ( ) - t i c k s t a r t )   > =     T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                 _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                 h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ T I M E O U T ;  
                 h s d - > S t a t e =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
          
         / *   S e n d   s t o p   t r a n s m i s s i o n   c o m m a n d   i n   c a s e   o f   m u l t i b l o c k   r e a d   * /  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D A T A E N D )   & &   ( N u m b e r O f B l o c k s   >   1 U ) )  
         {  
             i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
             {  
                 / *   S e n d   s t o p   t r a n s m i s s i o n   c o m m a n d   * /  
                 e r r o r s t a t e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
                 i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
                 {  
                     / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                     h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
                     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
  
         / *   G e t   e r r o r   s t a t e   * /  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D T I M E O U T ) )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D A T A _ T I M E O U T ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L ) )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D A T A _ C R C _ F A I L ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R ) )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ R X _ O V E R R U N ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
  
         / *   E m p t y   F I F O   i f   t h e r e   i s   s t i l l   a n y   d a t a   * /  
         w h i l e   ( ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X D A V L ) )   & &   ( d a t a r e m a i n i n g   >   0 U ) )  
         {  
             d a t a   =   S D I O _ R e a d F I F O ( h s d - > I n s t a n c e ) ;  
             * t e m p b u f f   =   ( u i n t 8 _ t ) ( d a t a   &   0 x F F U ) ;  
             t e m p b u f f + + ;  
             d a t a r e m a i n i n g - - ;  
             * t e m p b u f f   =   ( u i n t 8 _ t ) ( ( d a t a   > >   8 U )   &   0 x F F U ) ;  
             t e m p b u f f + + ;  
             d a t a r e m a i n i n g - - ;  
             * t e m p b u f f   =   ( u i n t 8 _ t ) ( ( d a t a   > >   1 6 U )   &   0 x F F U ) ;  
             t e m p b u f f + + ;  
             d a t a r e m a i n i n g - - ;  
             * t e m p b u f f   =   ( u i n t 8 _ t ) ( ( d a t a   > >   2 4 U )   &   0 x F F U ) ;  
             t e m p b u f f + + ;  
             d a t a r e m a i n i n g - - ;  
  
             i f ( ( ( H A L _ G e t T i c k ( ) - t i c k s t a r t )   > =     T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                 _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                 h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ T I M E O U T ;  
                 h s d - > S t a t e =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ B U S Y ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     A l l o w s   t o   w r i t e   b l o c k ( s )   t o   a   s p e c i f i e d   a d d r e s s   i n   a   c a r d .   T h e   D a t a  
     *                   t r a n s f e r   i s   m a n a g e d   b y   p o l l i n g   m o d e .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p D a t a :   p o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   d a t a   t o   t r a n s m i t  
     *   @ p a r a m     B l o c k A d d :   B l o c k   A d d r e s s   w h e r e   d a t a   w i l l   b e   w r i t t e n  
     *   @ p a r a m     N u m b e r O f B l o c k s :   N u m b e r   o f   S D   b l o c k s   t o   w r i t e  
     *   @ p a r a m     T i m e o u t :   S p e c i f y   t i m e o u t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ W r i t e B l o c k s ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   B l o c k A d d ,   u i n t 3 2 _ t   N u m b e r O f B l o c k s ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     u i n t 3 2 _ t   c o u n t ,   d a t a ,   d a t a r e m a i n i n g ;  
     u i n t 3 2 _ t   a d d   =   B l o c k A d d ;  
     u i n t 8 _ t   * t e m p b u f f   =   p D a t a ;  
  
     i f ( N U L L   = =   p D a t a )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( ( a d d   +   N u m b e r O f B l o c k s )   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   I n i t i a l i z e   d a t a   c o n t r o l   r e g i s t e r   * /  
         h s d - > I n s t a n c e - > D C T R L   =   0 U ;  
  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
         {  
             a d d   * =   5 1 2 U ;  
         }  
  
         / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
         c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
         c o n f i g . D a t a L e n g t h         =   N u m b e r O f B l o c k s   *   B L O C K S I Z E ;  
         c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 5 1 2 B ;  
         c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ C A R D ;  
         c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
         c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
         ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
         / *   W r i t e   B l o c k s   i n   P o l l i n g   m o d e   * /  
         i f ( N u m b e r O f B l o c k s   >   1 U )  
         {  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K ;  
  
             / *   W r i t e   M u l t i   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d W r i t e M u l t i B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         e l s e  
         {  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ W R I T E _ S I N G L E _ B L O C K ;  
  
             / *   W r i t e   S i n g l e   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d W r i t e S i n g l e B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   W r i t e   b l o c k ( s )   i n   p o l l i n g   m o d e   * /  
         d a t a r e m a i n i n g   =   c o n f i g . D a t a L e n g t h ;  
         w h i l e ( ! _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ T X U N D E R R   |   S D I O _ F L A G _ D C R C F A I L   |   S D I O _ F L A G _ D T I M E O U T   |   S D I O _ F L A G _ D A T A E N D   |   S D I O _ F L A G _ S T B I T E R R ) )  
         {  
             i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ T X F I F O H E )   & &   ( d a t a r e m a i n i n g   >   0 U ) )  
             {  
                 / *   W r i t e   d a t a   t o   S D I O   T x   F I F O   * /  
                 f o r ( c o u n t   =   0 U ;   c o u n t   <   8 U ;   c o u n t + + )  
                 {  
                     d a t a   =   ( u i n t 3 2 _ t ) ( * t e m p b u f f ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     d a t a   | =   ( ( u i n t 3 2 _ t ) ( * t e m p b u f f )   < <   8 U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     d a t a   | =   ( ( u i n t 3 2 _ t ) ( * t e m p b u f f )   < <   1 6 U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     d a t a   | =   ( ( u i n t 3 2 _ t ) ( * t e m p b u f f )   < <   2 4 U ) ;  
                     t e m p b u f f + + ;  
                     d a t a r e m a i n i n g - - ;  
                     ( v o i d ) S D I O _ W r i t e F I F O ( h s d - > I n s t a n c e ,   & d a t a ) ;  
                 }  
             }  
  
             i f ( ( ( H A L _ G e t T i c k ( ) - t i c k s t a r t )   > =     T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                 _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                 h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
                 h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
  
         / *   S e n d   s t o p   t r a n s m i s s i o n   c o m m a n d   i n   c a s e   o f   m u l t i b l o c k   w r i t e   * /  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D A T A E N D )   & &   ( N u m b e r O f B l o c k s   >   1 U ) )  
         {  
             i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
             {  
                 / *   S e n d   s t o p   t r a n s m i s s i o n   c o m m a n d   * /  
                 e r r o r s t a t e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
                 i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
                 {  
                     / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                     h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
                     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
         }  
  
         / *   G e t   e r r o r   s t a t e   * /  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D T I M E O U T ) )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D A T A _ T I M E O U T ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L ) )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D A T A _ C R C _ F A I L ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ T X U N D E R R ) )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ T X _ U N D E R R U N ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ B U S Y ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   b l o c k ( s )   f r o m   a   s p e c i f i e d   a d d r e s s   i n   a   c a r d .   T h e   D a t a   t r a n s f e r  
     *                   i s   m a n a g e d   i n   i n t e r r u p t   m o d e .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ n o t e       Y o u   c o u l d   a l s o   c h e c k   t h e   I T   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   R x  
     *                   i n t e r r u p t   e v e n t .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p D a t a :   P o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   r e c e i v e d   d a t a  
     *   @ p a r a m     B l o c k A d d :   B l o c k   A d d r e s s   f r o m   w h e r e   d a t a   i s   t o   b e   r e a d  
     *   @ p a r a m     N u m b e r O f B l o c k s :   N u m b e r   o f   b l o c k s   t o   r e a d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ R e a d B l o c k s _ I T ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   B l o c k A d d ,   u i n t 3 2 _ t   N u m b e r O f B l o c k s )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   a d d   =   B l o c k A d d ;  
  
     i f ( N U L L   = =   p D a t a )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( ( a d d   +   N u m b e r O f B l o c k s )   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   I n i t i a l i z e   d a t a   c o n t r o l   r e g i s t e r   * /  
         h s d - > I n s t a n c e - > D C T R L   =   0 U ;  
  
         h s d - > p R x B u f f P t r   =   p D a t a ;  
         h s d - > R x X f e r S i z e   =   B L O C K S I Z E   *   N u m b e r O f B l o c k s ;  
  
         _ _ H A L _ S D _ E N A B L E _ I T ( h s d ,   ( S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T   |   S D I O _ I T _ R X O V E R R   |   S D I O _ I T _ D A T A E N D   |   S D I O _ F L A G _ R X F I F O H F ) ) ;  
  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
         {  
             a d d   * =   5 1 2 U ;  
         }  
  
         / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
         c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
         c o n f i g . D a t a L e n g t h         =   B L O C K S I Z E   *   N u m b e r O f B l o c k s ;  
         c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 5 1 2 B ;  
         c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ S D I O ;  
         c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
         c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
         ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
         / *   R e a d   B l o c k s   i n   I T   m o d e   * /  
         i f ( N u m b e r O f B l o c k s   >   1 U )  
         {  
             h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K   |   S D _ C O N T E X T _ I T ) ;  
  
             / *   R e a d   M u l t i   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d R e a d M u l t i B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         e l s e  
         {  
             h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K   |   S D _ C O N T E X T _ I T ) ;  
  
             / *   R e a d   S i n g l e   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d R e a d S i n g l e B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   b l o c k ( s )   t o   a   s p e c i f i e d   a d d r e s s   i n   a   c a r d .   T h e   D a t a   t r a n s f e r  
     *                   i s   m a n a g e d   i n   i n t e r r u p t   m o d e .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ n o t e       Y o u   c o u l d   a l s o   c h e c k   t h e   I T   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   T x  
     *                   i n t e r r u p t   e v e n t .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p D a t a :   P o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   d a t a   t o   t r a n s m i t  
     *   @ p a r a m     B l o c k A d d :   B l o c k   A d d r e s s   w h e r e   d a t a   w i l l   b e   w r i t t e n  
     *   @ p a r a m     N u m b e r O f B l o c k s :   N u m b e r   o f   b l o c k s   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ W r i t e B l o c k s _ I T ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   B l o c k A d d ,   u i n t 3 2 _ t   N u m b e r O f B l o c k s )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   a d d   =   B l o c k A d d ;  
  
     i f ( N U L L   = =   p D a t a )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( ( a d d   +   N u m b e r O f B l o c k s )   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   I n i t i a l i z e   d a t a   c o n t r o l   r e g i s t e r   * /  
         h s d - > I n s t a n c e - > D C T R L   =   0 U ;  
  
         h s d - > p T x B u f f P t r   =   p D a t a ;  
         h s d - > T x X f e r S i z e   =   B L O C K S I Z E   *   N u m b e r O f B l o c k s ;  
  
         / *   E n a b l e   t r a n s f e r   i n t e r r u p t s   * /  
         _ _ H A L _ S D _ E N A B L E _ I T ( h s d ,   ( S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T   |   S D I O _ I T _ T X U N D E R R   |   S D I O _ I T _ D A T A E N D   |   S D I O _ F L A G _ T X F I F O H E ) ) ;  
  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
         {  
             a d d   * =   5 1 2 U ;  
         }  
  
         / *   W r i t e   B l o c k s   i n   P o l l i n g   m o d e   * /  
         i f ( N u m b e r O f B l o c k s   >   1 U )  
         {  
             h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K |   S D _ C O N T E X T _ I T ) ;  
  
             / *   W r i t e   M u l t i   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d W r i t e M u l t i B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         e l s e  
         {  
             h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ W R I T E _ S I N G L E _ B L O C K   |   S D _ C O N T E X T _ I T ) ;  
  
             / *   W r i t e   S i n g l e   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d W r i t e S i n g l e B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
         c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
         c o n f i g . D a t a L e n g t h         =   B L O C K S I Z E   *   N u m b e r O f B l o c k s ;  
         c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 5 1 2 B ;  
         c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ C A R D ;  
         c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
         c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
         ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   b l o c k ( s )   f r o m   a   s p e c i f i e d   a d d r e s s   i n   a   c a r d .   T h e   D a t a   t r a n s f e r  
     *                   i s   m a n a g e d   b y   D M A   m o d e .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ n o t e       Y o u   c o u l d   a l s o   c h e c k   t h e   D M A   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   R x  
     *                   i n t e r r u p t   e v e n t .  
     *   @ p a r a m     h s d :   P o i n t e r   S D   h a n d l e  
     *   @ p a r a m     p D a t a :   P o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   r e c e i v e d   d a t a  
     *   @ p a r a m     B l o c k A d d :   B l o c k   A d d r e s s   f r o m   w h e r e   d a t a   i s   t o   b e   r e a d  
     *   @ p a r a m     N u m b e r O f B l o c k s :   N u m b e r   o f   b l o c k s   t o   r e a d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ R e a d B l o c k s _ D M A ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   B l o c k A d d ,   u i n t 3 2 _ t   N u m b e r O f B l o c k s )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   a d d   =   B l o c k A d d ;  
  
     i f ( N U L L   = =   p D a t a )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( ( a d d   +   N u m b e r O f B l o c k s )   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   I n i t i a l i z e   d a t a   c o n t r o l   r e g i s t e r   * /  
         h s d - > I n s t a n c e - > D C T R L   =   0 U ;  
  
         _ _ H A L _ S D _ E N A B L E _ I T ( h s d ,   ( S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T   |   S D I O _ I T _ R X O V E R R   |   S D I O _ I T _ D A T A E N D ) ) ;  
  
         / *   S e t   t h e   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h s d - > h d m a r x - > X f e r C p l t C a l l b a c k   =   S D _ D M A R e c e i v e C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h s d - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   S D _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   A b o r t   c a l l b a c k   * /  
         h s d - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   F o r c e   D M A   D i r e c t i o n   * /  
         h s d - > h d m a r x - > I n i t . D i r e c t i o n   =   D M A _ P E R I P H _ T O _ M E M O R Y ;  
         M O D I F Y _ R E G ( h s d - > h d m a r x - > I n s t a n c e - > C C R ,   D M A _ C C R _ D I R ,   h s d - > h d m a r x - > I n i t . D i r e c t i o n ) ;  
  
         / *   E n a b l e   t h e   D M A   C h a n n e l   * /  
         i f ( H A L _ D M A _ S t a r t _ I T ( h s d - > h d m a r x ,   ( u i n t 3 2 _ t ) & h s d - > I n s t a n c e - > F I F O ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) ( B L O C K S I Z E   *   N u m b e r O f B l o c k s ) / 4 U )   ! =   H A L _ O K )  
         {  
             _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   ( S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T   |   S D I O _ I T _ R X O V E R R   |   S D I O _ I T _ D A T A E N D ) ) ;  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D M A ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
             / *   E n a b l e   S D   D M A   t r a n s f e r   * /  
             _ _ H A L _ S D _ D M A _ E N A B L E ( h s d ) ;  
  
             i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
             {  
                 a d d   * =   5 1 2 U ;  
             }  
  
             / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
             c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
             c o n f i g . D a t a L e n g t h         =   B L O C K S I Z E   *   N u m b e r O f B l o c k s ;  
             c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 5 1 2 B ;  
             c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ S D I O ;  
             c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
             c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
             ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
             / *   R e a d   B l o c k s   i n   D M A   m o d e   * /  
             i f ( N u m b e r O f B l o c k s   >   1 U )  
             {  
                 h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K   |   S D _ C O N T E X T _ D M A ) ;  
  
                 / *   R e a d   M u l t i   B l o c k   c o m m a n d   * /  
                 e r r o r s t a t e   =   S D M M C _ C m d R e a d M u l t i B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
             }  
             e l s e  
             {  
                 h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K   |   S D _ C O N T E X T _ D M A ) ;  
  
                 / *   R e a d   S i n g l e   B l o c k   c o m m a n d   * /  
                 e r r o r s t a t e   =   S D M M C _ C m d R e a d S i n g l e B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
             }  
             i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
             {  
                 / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                 _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                 h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
                 h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             r e t u r n   H A L _ O K ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   b l o c k ( s )   t o   a   s p e c i f i e d   a d d r e s s   i n   a   c a r d .   T h e   D a t a   t r a n s f e r  
     *                   i s   m a n a g e d   b y   D M A   m o d e .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ n o t e       Y o u   c o u l d   a l s o   c h e c k   t h e   D M A   t r a n s f e r   p r o c e s s   t h r o u g h   t h e   S D   T x  
     *                   i n t e r r u p t   e v e n t .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p D a t a :   P o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   d a t a   t o   t r a n s m i t  
     *   @ p a r a m     B l o c k A d d :   B l o c k   A d d r e s s   w h e r e   d a t a   w i l l   b e   w r i t t e n  
     *   @ p a r a m     N u m b e r O f B l o c k s :   N u m b e r   o f   b l o c k s   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ W r i t e B l o c k s _ D M A ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   B l o c k A d d ,   u i n t 3 2 _ t   N u m b e r O f B l o c k s )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   a d d   =   B l o c k A d d ;  
  
     i f ( N U L L   = =   p D a t a )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( ( a d d   +   N u m b e r O f B l o c k s )   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   I n i t i a l i z e   d a t a   c o n t r o l   r e g i s t e r   * /  
         h s d - > I n s t a n c e - > D C T R L   =   0 U ;  
  
         / *   E n a b l e   S D   E r r o r   i n t e r r u p t s   * /  
         _ _ H A L _ S D _ E N A B L E _ I T ( h s d ,   ( S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T   |   S D I O _ I T _ T X U N D E R R ) ) ;        
  
         / *   S e t   t h e   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h s d - > h d m a t x - > X f e r C p l t C a l l b a c k   =   S D _ D M A T r a n s m i t C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h s d - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   S D _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   A b o r t   c a l l b a c k   * /  
         h s d - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
         {  
             a d d   * =   5 1 2 U ;  
         }  
  
         / *   W r i t e   B l o c k s   i n   P o l l i n g   m o d e   * /  
         i f ( N u m b e r O f B l o c k s   >   1 U )  
         {  
             h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K   |   S D _ C O N T E X T _ D M A ) ;  
  
             / *   W r i t e   M u l t i   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d W r i t e M u l t i B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         e l s e  
         {  
             h s d - > C o n t e x t   =   ( S D _ C O N T E X T _ W R I T E _ S I N G L E _ B L O C K   |   S D _ C O N T E X T _ D M A ) ;  
  
             / *   W r i t e   S i n g l e   B l o c k   c o m m a n d   * /  
             e r r o r s t a t e   =   S D M M C _ C m d W r i t e S i n g l e B l o c k ( h s d - > I n s t a n c e ,   a d d ) ;  
         }  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   E n a b l e   S D I O   D M A   t r a n s f e r   * /  
         _ _ H A L _ S D _ D M A _ E N A B L E ( h s d ) ;  
  
         / *   F o r c e   D M A   D i r e c t i o n   * /  
         h s d - > h d m a t x - > I n i t . D i r e c t i o n   =   D M A _ M E M O R Y _ T O _ P E R I P H ;  
         M O D I F Y _ R E G ( h s d - > h d m a t x - > I n s t a n c e - > C C R ,   D M A _ C C R _ D I R ,   h s d - > h d m a t x - > I n i t . D i r e c t i o n ) ;  
  
         / *   E n a b l e   t h e   D M A   C h a n n e l   * /  
         i f ( H A L _ D M A _ S t a r t _ I T ( h s d - > h d m a t x ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h s d - > I n s t a n c e - > F I F O ,   ( u i n t 3 2 _ t ) ( B L O C K S I Z E   *   N u m b e r O f B l o c k s ) / 4 U )   ! =   H A L _ O K )  
         {  
             _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   ( S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T   |   S D I O _ I T _ T X U N D E R R ) ) ;        
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D M A ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
             / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
             c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
             c o n f i g . D a t a L e n g t h         =   B L O C K S I Z E   *   N u m b e r O f B l o c k s ;  
             c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 5 1 2 B ;  
             c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ C A R D ;  
             c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
             c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
             ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
             r e t u r n   H A L _ O K ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     E r a s e s   t h e   s p e c i f i e d   m e m o r y   a r e a   o f   t h e   g i v e n   S D   c a r d .  
     *   @ n o t e       T h i s   A P I   s h o u l d   b e   f o l l o w e d   b y   a   c h e c k   o n   t h e   c a r d   s t a t e   t h r o u g h  
     *                   H A L _ S D _ G e t C a r d S t a t e ( ) .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     B l o c k S t a r t A d d :   S t a r t   B l o c k   a d d r e s s  
     *   @ p a r a m     B l o c k E n d A d d :   E n d   B l o c k   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ E r a s e ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   B l o c k S t a r t A d d ,   u i n t 3 2 _ t   B l o c k E n d A d d )  
 {  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   s t a r t _ a d d   =   B l o c k S t a r t A d d ;  
     u i n t 3 2 _ t   e n d _ a d d   =   B l o c k E n d A d d ;  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
  
         i f ( e n d _ a d d   <   s t a r t _ a d d )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f ( e n d _ a d d   >   ( h s d - > S d C a r d . L o g B l o c k N b r ) )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ A D D R _ O U T _ O F _ R A N G E ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
         / *   C h e c k   i f   t h e   c a r d   c o m m a n d   c l a s s   s u p p o r t s   e r a s e   c o m m a n d   * /  
         i f ( ( ( h s d - > S d C a r d . C l a s s )   &   S D I O _ C C C C _ E R A S E )   = =   0 U )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ R E Q U E S T _ N O T _ A P P L I C A B L E ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f ( ( S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 )   &   S D M M C _ C A R D _ L O C K E D )   = =   S D M M C _ C A R D _ L O C K E D )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ L O C K _ U N L O C K _ F A I L E D ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   G e t   s t a r t   a n d   e n d   b l o c k   f o r   h i g h   c a p a c i t y   c a r d s   * /  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S D H C _ S D X C )  
         {  
             s t a r t _ a d d   * =   5 1 2 U ;  
             e n d _ a d d       * =   5 1 2 U ;  
         }  
  
         / *   A c c o r d i n g   t o   s d - c a r d   s p e c   1 . 0   E R A S E _ G R O U P _ S T A R T   ( C M D 3 2 )   a n d   e r a s e _ g r o u p _ e n d ( C M D 3 3 )   * /  
         i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
         {  
             / *   S e n d   C M D 3 2   S D _ E R A S E _ G R P _ S T A R T   w i t h   a r g u m e n t   a s   a d d r     * /  
             e r r o r s t a t e   =   S D M M C _ C m d S D E r a s e S t a r t A d d ( h s d - > I n s t a n c e ,   s t a r t _ a d d ) ;  
             i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
             {  
                 / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                 _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                 h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
                 h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   S e n d   C M D 3 3   S D _ E R A S E _ G R P _ E N D   w i t h   a r g u m e n t   a s   a d d r     * /  
             e r r o r s t a t e   =   S D M M C _ C m d S D E r a s e E n d A d d ( h s d - > I n s t a n c e ,   e n d _ a d d ) ;  
             i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
             {  
                 / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
                 _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
                 h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
                 h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   S e n d   C M D 3 8   E R A S E   * /  
         e r r o r s t a t e   =   S D M M C _ C m d E r a s e ( h s d - > I n s t a n c e ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   S D   c a r d   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ S D _ I R Q H a n d l e r ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   c o n t e x t   =   h s d - > C o n t e x t ;  
  
     / *   C h e c k   f o r   S D I O   i n t e r r u p t   f l a g s   * /  
     i f ( ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X F I F O H F )   ! =   R E S E T )   & &   ( ( c o n t e x t   &   S D _ C O N T E X T _ I T )   ! =   0 U ) )  
     {  
         S D _ R e a d _ I T ( h s d ) ;  
     }  
  
     e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D A T A E N D )   ! =   R E S E T )  
     {  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ F L A G _ D A T A E N D ) ;  
  
         _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   S D I O _ I T _ D A T A E N D     |   S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T | \  
                                                           S D I O _ I T _ T X U N D E R R   |   S D I O _ I T _ R X O V E R R     |   S D I O _ I T _ T X F I F O H E   | \  
                                                           S D I O _ I T _ R X F I F O H F ) ;  
  
         h s d - > I n s t a n c e - > D C T R L   & =   ~ ( S D I O _ D C T R L _ D T E N ) ;  
          
         i f ( ( c o n t e x t   &   S D _ C O N T E X T _ I T )   ! =   0 U )  
         {  
             i f ( ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
             {  
                 e r r o r s t a t e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
                 i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
                 {  
                     h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                     h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
                     H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
  
             / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
             i f ( ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
             {  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h s d - > R x C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
                 H A L _ S D _ R x C p l t C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e  
             {  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h s d - > T x C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
                 H A L _ S D _ T x C p l t C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
         e l s e   i f ( ( c o n t e x t   &   S D _ C O N T E X T _ D M A )   ! =   0 U )  
         {  
             i f ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K )   ! =   0 U )  
             {  
                 e r r o r s t a t e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
                 i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
                 {  
                     h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                     h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
                     H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
             i f ( ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K )   = =   0 U )   & &   ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K )   = =   0 U ) )  
             {  
                 / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A E N   b i t  
                 i n   t h e   S D   D C T R L   r e g i s t e r   * /  
                 h s d - > I n s t a n c e - > D C T R L   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) S D I O _ D C T R L _ D M A E N ) ;  
  
                 h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h s d - > T x C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
                 H A L _ S D _ T x C p l t C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
     }  
  
     e l s e   i f ( ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ T X F I F O H E )   ! =   R E S E T )   & &   ( ( c o n t e x t   &   S D _ C O N T E X T _ I T )   ! =   0 U ) )  
     {  
         S D _ W r i t e _ I T ( h s d ) ;  
     }  
  
     e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L   |   S D I O _ F L A G _ D T I M E O U T   |   S D I O _ F L A G _ R X O V E R R   |   S D I O _ F L A G _ T X U N D E R R )   ! =   R E S E T )  
     {  
         / *   S e t   E r r o r   c o d e   * /  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L )   ! =   R E S E T )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D A T A _ C R C _ F A I L ;  
         }  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D T I M E O U T )   ! =   R E S E T )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D A T A _ T I M E O U T ;  
         }  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R )   ! =   R E S E T )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ R X _ O V E R R U N ;  
         }  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ T X U N D E R R )   ! =   R E S E T )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ T X _ U N D E R R U N ;  
         }  
  
         / *   C l e a r   A l l   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S   |   S D I O _ F L A G _ S T B I T E R R ) ;  
  
         / *   D i s a b l e   a l l   i n t e r r u p t s   * /  
         _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   S D I O _ I T _ D A T A E N D   |   S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T | \  
                                                           S D I O _ I T _ T X U N D E R R |   S D I O _ I T _ R X O V E R R   |   S D I O _ I T _ S T B I T E R R ) ;  
  
         h s d - > E r r o r C o d e   | =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
  
         i f ( ( c o n t e x t   &   S D _ C O N T E X T _ I T )   ! =   0 U )  
         {  
             / *   S e t   t h e   S D   s t a t e   t o   r e a d y   t o   b e   a b l e   t o   s t a r t   a g a i n   t h e   p r o c e s s   * /  
             h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
             H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e   i f ( ( c o n t e x t   &   S D _ C O N T E X T _ D M A )   ! =   0 U )  
         {  
             / *   A b o r t   t h e   S D   D M A   c h a n n e l   * /  
             i f ( ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
             {  
                 / *   S e t   t h e   D M A   T x   a b o r t   c a l l b a c k   * /  
                 h s d - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   S D _ D M A T x A b o r t ;  
                 / *   A b o r t   D M A   i n   I T   m o d e   * /  
                 i f ( H A L _ D M A _ A b o r t _ I T ( h s d - > h d m a t x )   ! =   H A L _ O K )  
                 {  
                     S D _ D M A T x A b o r t ( h s d - > h d m a t x ) ;  
                 }  
             }  
             e l s e   i f ( ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
             {  
                 / *   S e t   t h e   D M A   R x   a b o r t   c a l l b a c k   * /  
                 h s d - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   S D _ D M A R x A b o r t ;  
                 / *   A b o r t   D M A   i n   I T   m o d e   * /  
                 i f ( H A L _ D M A _ A b o r t _ I T ( h s d - > h d m a r x )   ! =   H A L _ O K )  
                 {  
                     S D _ D M A R x A b o r t ( h s d - > h d m a r x ) ;  
                 }  
             }  
             e l s e  
             {  
                 h s d - > E r r o r C o d e   =   H A L _ S D _ E R R O R _ N O N E ;  
                 h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
                 h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h s d - > A b o r t C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
                 H A L _ S D _ A b o r t C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
     }  
     e l s e  
     {  
         / *   N o t h i n g   t o   d o   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f   r e t u r n   t h e   S D   s t a t e  
     *   @ p a r a m   h s d :   P o i n t e r   t o   s d   h a n d l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S D _ S t a t e T y p e D e f   H A L _ S D _ G e t S t a t e ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     r e t u r n   h s d - > S t a t e ;  
 }  
  
 / * *  
 *   @ b r i e f     R e t u r n   t h e   S D   e r r o r   c o d e  
 *   @ p a r a m     h s d   :   P o i n t e r   t o   a   S D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n .  
 *   @ r e t v a l   S D   E r r o r   C o d e  
 * /  
 u i n t 3 2 _ t   H A L _ S D _ G e t E r r o r ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     r e t u r n   h s d - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ b r i e f   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m   h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S D _ T x C p l t C a l l b a c k ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S D _ T x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s  
     *   @ p a r a m   h s d :   P o i n t e r   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S D _ R x C p l t C a l l b a c k ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S D _ R x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   S D   e r r o r   c a l l b a c k s  
     *   @ p a r a m   h s d :   P o i n t e r   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S D _ E r r o r C a l l b a c k ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S D _ E r r o r C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   S D   A b o r t   c a l l b a c k s  
     *   @ p a r a m   h s d :   P o i n t e r   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S D _ A b o r t C a l l b a c k ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S D _ A b o r t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   S D   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h s d   :   S D   h a n d l e  
     *   @ p a r a m   C a l l b a c k I D   :   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ S D _ T X _ C P L T _ C B _ I D         S D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ R X _ C P L T _ C B _ I D         S D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ E R R O R _ C B _ I D             S D   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ A B O R T _ C B _ I D             S D   A b o r t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ M S P _ I N I T _ C B _ I D       S D   M s p I n i t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ M S P _ D E I N I T _ C B _ I D   S D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   :   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ R e g i s t e r C a l l b a c k ( S D _ H a n d l e T y p e D e f   * h s d ,   H A L _ S D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p S D _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s d ) ;  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ S D _ T X _ C P L T _ C B _ I D   :  
             h s d - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ R X _ C P L T _ C B _ I D   :  
             h s d - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ E R R O R _ C B _ I D   :  
             h s d - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ A B O R T _ C B _ I D   :  
             h s d - > A b o r t C p l t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ M S P _ I N I T _ C B _ I D   :  
             h s d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ M S P _ D E I N I T _ C B _ I D   :  
             h s d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
             / *   u p d a t e   r e t u r n   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e   i f   ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ S D _ M S P _ I N I T _ C B _ I D   :  
             h s d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ M S P _ D E I N I T _ C B _ I D   :  
             h s d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
             / *   u p d a t e   r e t u r n   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   U s e r   S D   C a l l b a c k  
     *                   S D   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h s d   :   S D   h a n d l e  
     *   @ p a r a m   C a l l b a c k I D   :   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ S D _ T X _ C P L T _ C B _ I D         S D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ R X _ C P L T _ C B _ I D         S D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ E R R O R _ C B _ I D             S D   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ A B O R T _ C B _ I D             S D   A b o r t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ M S P _ I N I T _ C B _ I D       S D   M s p I n i t   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S D _ M S P _ D E I N I T _ C B _ I D   S D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ U n R e g i s t e r C a l l b a c k ( S D _ H a n d l e T y p e D e f   * h s d ,   H A L _ S D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s d ) ;  
  
     i f ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ S D _ T X _ C P L T _ C B _ I D   :  
             h s d - > T x C p l t C a l l b a c k   =   H A L _ S D _ T x C p l t C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ R X _ C P L T _ C B _ I D   :  
             h s d - > R x C p l t C a l l b a c k   =   H A L _ S D _ R x C p l t C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ E R R O R _ C B _ I D   :  
             h s d - > E r r o r C a l l b a c k   =   H A L _ S D _ E r r o r C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ A B O R T _ C B _ I D   :  
             h s d - > A b o r t C p l t C a l l b a c k   =   H A L _ S D _ A b o r t C a l l b a c k ;  
             b r e a k ;  
         c a s e   H A L _ S D _ M S P _ I N I T _ C B _ I D   :  
             h s d - > M s p I n i t C a l l b a c k   =   H A L _ S D _ M s p I n i t ;  
             b r e a k ;  
         c a s e   H A L _ S D _ M S P _ D E I N I T _ C B _ I D   :  
             h s d - > M s p D e I n i t C a l l b a c k   =   H A L _ S D _ M s p D e I n i t ;  
             b r e a k ;  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
             / *   u p d a t e   r e t u r n   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e   i f   ( h s d - > S t a t e   = =   H A L _ S D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ S D _ M S P _ I N I T _ C B _ I D   :  
             h s d - > M s p I n i t C a l l b a c k   =   H A L _ S D _ M s p I n i t ;  
             b r e a k ;  
         c a s e   H A L _ S D _ M S P _ D E I N I T _ C B _ I D   :  
             h s d - > M s p D e I n i t C a l l b a c k   =   H A L _ S D _ M s p D e I n i t ;  
             b r e a k ;  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
             / *   u p d a t e   r e t u r n   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s d ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
   *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s  
   *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   S D   c a r d  
         o p e r a t i o n s   a n d   g e t   t h e   r e l a t e d   i n f o r m a t i o n  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n s   i n f o r m a t i o n   t h e   i n f o r m a t i o n   o f   t h e   c a r d   w h i c h   a r e   s t o r e d   o n  
     *                   t h e   C I D   r e g i s t e r .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p C I D :   P o i n t e r   t o   a   H A L _ S D _ C a r d C I D T y p e D e f   s t r u c t u r e   t h a t      
     *                   c o n t a i n s   a l l   C I D   r e g i s t e r   p a r a m e t e r s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ G e t C a r d C I D ( S D _ H a n d l e T y p e D e f   * h s d ,   H A L _ S D _ C a r d C I D T y p e D e f   * p C I D )  
 {  
     p C I D - > M a n u f a c t u r e r I D   =   ( u i n t 8 _ t ) ( ( h s d - > C I D [ 0 ]   &   0 x F F 0 0 0 0 0 0 U )   > >   2 4 U ) ;  
  
     p C I D - > O E M _ A p p l i I D   =   ( u i n t 1 6 _ t ) ( ( h s d - > C I D [ 0 ]   &   0 x 0 0 F F F F 0 0 U )   > >   8 U ) ;  
  
     p C I D - > P r o d N a m e 1   =   ( ( ( h s d - > C I D [ 0 ]   &   0 x 0 0 0 0 0 0 F F U )   < <   2 4 U )   |   ( ( h s d - > C I D [ 1 ]   &   0 x F F F F F F 0 0 U )   > >   8 U ) ) ;  
  
     p C I D - > P r o d N a m e 2   =   ( u i n t 8 _ t ) ( h s d - > C I D [ 1 ]   &   0 x 0 0 0 0 0 0 F F U ) ;  
  
     p C I D - > P r o d R e v   =   ( u i n t 8 _ t ) ( ( h s d - > C I D [ 2 ]   &   0 x F F 0 0 0 0 0 0 U )   > >   2 4 U ) ;  
  
     p C I D - > P r o d S N   =   ( ( ( h s d - > C I D [ 2 ]   &   0 x 0 0 F F F F F F U )   < <   8 U )   |   ( ( h s d - > C I D [ 3 ]   &   0 x F F 0 0 0 0 0 0 U )   > >   2 4 U ) ) ;  
  
     p C I D - > R e s e r v e d 1   =   ( u i n t 8 _ t ) ( ( h s d - > C I D [ 3 ]   &   0 x 0 0 F 0 0 0 0 0 U )   > >   2 0 U ) ;  
  
     p C I D - > M a n u f a c t D a t e   =   ( u i n t 1 6 _ t ) ( ( h s d - > C I D [ 3 ]   &   0 x 0 0 0 F F F 0 0 U )   > >   8 U ) ;  
  
     p C I D - > C I D _ C R C   =   ( u i n t 8 _ t ) ( ( h s d - > C I D [ 3 ]   &   0 x 0 0 0 0 0 0 F E U )   > >   1 U ) ;  
  
     p C I D - > R e s e r v e d 2   =   1 U ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   i n f o r m a t i o n   t h e   i n f o r m a t i o n   o f   t h e   c a r d   w h i c h   a r e   s t o r e d   o n  
     *                   t h e   C S D   r e g i s t e r .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p C S D :   P o i n t e r   t o   a   H A L _ S D _ C a r d C S D T y p e D e f   s t r u c t u r e   t h a t      
     *                   c o n t a i n s   a l l   C S D   r e g i s t e r   p a r a m e t e r s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ G e t C a r d C S D ( S D _ H a n d l e T y p e D e f   * h s d ,   H A L _ S D _ C a r d C S D T y p e D e f   * p C S D )  
 {  
     p C S D - > C S D S t r u c t   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 0 ]   &   0 x C 0 0 0 0 0 0 0 U )   > >   3 0 U ) ;  
  
     p C S D - > S y s S p e c V e r s i o n   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 0 ]   &   0 x 3 C 0 0 0 0 0 0 U )   > >   2 6 U ) ;  
  
     p C S D - > R e s e r v e d 1   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 0 ]   &   0 x 0 3 0 0 0 0 0 0 U )   > >   2 4 U ) ;  
  
     p C S D - > T A A C   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 0 ]   &   0 x 0 0 F F 0 0 0 0 U )   > >   1 6 U ) ;  
  
     p C S D - > N S A C   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 0 ]   &   0 x 0 0 0 0 F F 0 0 U )   > >   8 U ) ;  
  
     p C S D - > M a x B u s C l k F r e c   =   ( u i n t 8 _ t ) ( h s d - > C S D [ 0 ]   &   0 x 0 0 0 0 0 0 F F U ) ;  
  
     p C S D - > C a r d C o m d C l a s s e s   =   ( u i n t 1 6 _ t ) ( ( h s d - > C S D [ 1 ]   &   0 x F F F 0 0 0 0 0 U )   > >   2 0 U ) ;  
  
     p C S D - > R d B l o c k L e n   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 F 0 0 0 0 U )   > >   1 6 U ) ;  
  
     p C S D - > P a r t B l o c k R e a d       =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 0 8 0 0 0 U )   > >   1 5 U ) ;  
  
     p C S D - > W r B l o c k M i s a l i g n   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 0 4 0 0 0 U )   > >   1 4 U ) ;  
  
     p C S D - > R d B l o c k M i s a l i g n   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 0 2 0 0 0 U )   > >   1 3 U ) ;  
  
     p C S D - > D S R I m p l   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 0 1 0 0 0 U )   > >   1 2 U ) ;  
  
     p C S D - > R e s e r v e d 2   =   0 U ;   / * ! <   R e s e r v e d   * /  
  
     i f ( h s d - > S d C a r d . C a r d T y p e   = =   C A R D _ S D S C )  
     {  
         p C S D - > D e v i c e S i z e   =   ( ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 0 0 3 F F U )   < <   2 U )   |   ( ( h s d - > C S D [ 2 ]   &   0 x C 0 0 0 0 0 0 0 U )   > >   3 0 U ) ) ;  
  
         p C S D - > M a x R d C u r r e n t V D D M i n   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 3 8 0 0 0 0 0 0 U )   > >   2 7 U ) ;  
  
         p C S D - > M a x R d C u r r e n t V D D M a x   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 0 7 0 0 0 0 0 0 U )   > >   2 4 U ) ;  
  
         p C S D - > M a x W r C u r r e n t V D D M i n   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 0 0 E 0 0 0 0 0 U )   > >   2 1 U ) ;  
  
         p C S D - > M a x W r C u r r e n t V D D M a x   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 0 0 1 C 0 0 0 0 U )   > >   1 8 U ) ;  
  
         p C S D - > D e v i c e S i z e M u l   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 0 0 0 3 8 0 0 0 U )   > >   1 5 U ) ;  
  
         h s d - > S d C a r d . B l o c k N b r     =   ( p C S D - > D e v i c e S i z e   +   1 U )   ;  
         h s d - > S d C a r d . B l o c k N b r   * =   ( 1 U L   < <   ( ( p C S D - > D e v i c e S i z e M u l   &   0 x 0 7 U )   +   2 U ) ) ;  
         h s d - > S d C a r d . B l o c k S i z e   =   ( 1 U L   < <   ( p C S D - > R d B l o c k L e n   &   0 x 0 F U ) ) ;  
  
         h s d - > S d C a r d . L o g B l o c k N b r   =     ( h s d - > S d C a r d . B l o c k N b r )   *   ( ( h s d - > S d C a r d . B l o c k S i z e )   /   5 1 2 U ) ;  
         h s d - > S d C a r d . L o g B l o c k S i z e   =   5 1 2 U ;  
     }  
     e l s e   i f ( h s d - > S d C a r d . C a r d T y p e   = =   C A R D _ S D H C _ S D X C )  
     {  
         / *   B y t e   7   * /  
         p C S D - > D e v i c e S i z e   =   ( ( ( h s d - > C S D [ 1 ]   &   0 x 0 0 0 0 0 0 3 F U )   < <   1 6 U )   |   ( ( h s d - > C S D [ 2 ]   &   0 x F F F F 0 0 0 0 U )   > >   1 6 U ) ) ;  
  
         h s d - > S d C a r d . B l o c k N b r   =   ( ( p C S D - > D e v i c e S i z e   +   1 U )   *   1 0 2 4 U ) ;  
         h s d - > S d C a r d . L o g B l o c k N b r   =   h s d - > S d C a r d . B l o c k N b r ;  
         h s d - > S d C a r d . B l o c k S i z e   =   5 1 2 U ;  
         h s d - > S d C a r d . L o g B l o c k S i z e   =   h s d - > S d C a r d . B l o c k S i z e ;  
     }  
     e l s e  
     {  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ U N S U P P O R T E D _ F E A T U R E ;  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     p C S D - > E r a s e G r S i z e   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 0 0 0 0 4 0 0 0 U )   > >   1 4 U ) ;  
  
     p C S D - > E r a s e G r M u l   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 2 ]   &   0 x 0 0 0 0 3 F 8 0 U )   > >   7 U ) ;  
  
     p C S D - > W r P r o t e c t G r S i z e   =   ( u i n t 8 _ t ) ( h s d - > C S D [ 2 ]   &   0 x 0 0 0 0 0 0 7 F U ) ;  
  
     p C S D - > W r P r o t e c t G r E n a b l e   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 8 0 0 0 0 0 0 0 U )   > >   3 1 U ) ;  
  
     p C S D - > M a n D e f l E C C   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 6 0 0 0 0 0 0 0 U )   > >   2 9 U ) ;  
  
     p C S D - > W r S p e e d F a c t   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 1 C 0 0 0 0 0 0 U )   > >   2 6 U ) ;  
  
     p C S D - > M a x W r B l o c k L e n =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 3 C 0 0 0 0 0 U )   > >   2 2 U ) ;  
  
     p C S D - > W r i t e B l o c k P a P a r t i a l   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 2 0 0 0 0 0 U )   > >   2 1 U ) ;  
  
     p C S D - > R e s e r v e d 3   =   0 ;  
  
     p C S D - > C o n t e n t P r o t e c t A p p l i   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 1 0 0 0 0 U )   > >   1 6 U ) ;  
  
     p C S D - > F i l e F o r m a t G r o u p   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 8 0 0 0 U )   > >   1 5 U ) ;  
  
     p C S D - > C o p y F l a g   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 4 0 0 0 U )   > >   1 4 U ) ;  
  
     p C S D - > P e r m W r P r o t e c t   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 2 0 0 0 U )   > >   1 3 U ) ;  
  
     p C S D - > T e m p W r P r o t e c t   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 1 0 0 0 U )   > >   1 2 U ) ;  
  
     p C S D - > F i l e F o r m a t   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 0 C 0 0 U )   > >   1 0 U ) ;  
  
     p C S D - > E C C =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 0 3 0 0 U )   > >   8 U ) ;  
  
     p C S D - > C S D _ C R C   =   ( u i n t 8 _ t ) ( ( h s d - > C S D [ 3 ]   &   0 x 0 0 0 0 0 0 F E U )   > >   1 U ) ;  
  
     p C S D - > R e s e r v e d 4   =   1 ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   S D   s t a t u s   i n f o .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p S t a t u s :   P o i n t e r   t o   t h e   H A L _ S D _ C a r d S t a t u s T y p e D e f   s t r u c t u r e   t h a t    
     *                   w i l l   c o n t a i n   t h e   S D   c a r d   s t a t u s   i n f o r m a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ G e t C a r d S t a t u s ( S D _ H a n d l e T y p e D e f   * h s d ,   H A L _ S D _ C a r d S t a t u s T y p e D e f   * p S t a t u s )  
 {  
     u i n t 3 2 _ t   s d _ s t a t u s [ 1 6 ] ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     e r r o r s t a t e   =   S D _ S e n d S D S t a t u s ( h s d ,   s d _ s t a t u s ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
         h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         p S t a t u s - > D a t a B u s W i d t h   =   ( u i n t 8 _ t ) ( ( s d _ s t a t u s [ 0 ]   &   0 x C 0 U )   > >   6 U ) ;  
  
         p S t a t u s - > S e c u r e d M o d e   =   ( u i n t 8 _ t ) ( ( s d _ s t a t u s [ 0 ]   &   0 x 2 0 U )   > >   5 U ) ;  
  
         p S t a t u s - > C a r d T y p e   =   ( u i n t 1 6 _ t ) ( ( ( s d _ s t a t u s [ 0 ]   &   0 x 0 0 F F 0 0 0 0 U )   > >   8 U )   |   ( ( s d _ s t a t u s [ 0 ]   &   0 x F F 0 0 0 0 0 0 U )   > >   2 4 U ) ) ;  
  
         p S t a t u s - > P r o t e c t e d A r e a S i z e   =   ( ( ( s d _ s t a t u s [ 1 ]   &   0 x F F U )   < <   2 4 U )         |   ( ( s d _ s t a t u s [ 1 ]   &   0 x F F 0 0 U )   < <   8 U )   |  
                                                                     ( ( s d _ s t a t u s [ 1 ]   &   0 x F F 0 0 0 0 U )   > >   8 U )   |   ( ( s d _ s t a t u s [ 1 ]   &   0 x F F 0 0 0 0 0 0 U )   > >   2 4 U ) ) ;  
  
         p S t a t u s - > S p e e d C l a s s   =   ( u i n t 8 _ t ) ( s d _ s t a t u s [ 2 ]   &   0 x F F U ) ;  
  
         p S t a t u s - > P e r f o r m a n c e M o v e   =   ( u i n t 8 _ t ) ( ( s d _ s t a t u s [ 2 ]   &   0 x F F 0 0 U )   > >   8 U ) ;  
  
         p S t a t u s - > A l l o c a t i o n U n i t S i z e   =   ( u i n t 8 _ t ) ( ( s d _ s t a t u s [ 2 ]   &   0 x F 0 0 0 0 0 U )   > >   2 0 U ) ;  
  
         p S t a t u s - > E r a s e S i z e   =   ( u i n t 1 6 _ t ) ( ( ( s d _ s t a t u s [ 2 ]   &   0 x F F 0 0 0 0 0 0 U )   > >   1 6 U )   |   ( s d _ s t a t u s [ 3 ]   &   0 x F F U ) ) ;  
  
         p S t a t u s - > E r a s e T i m e o u t   =   ( u i n t 8 _ t ) ( ( s d _ s t a t u s [ 3 ]   &   0 x F C 0 0 U )   > >   1 0 U ) ;  
  
         p S t a t u s - > E r a s e O f f s e t   =   ( u i n t 8 _ t ) ( ( s d _ s t a t u s [ 3 ]   &   0 x 0 3 0 0 U )   > >   8 U ) ;  
     }  
  
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /  
     e r r o r s t a t e   =   S D M M C _ C m d B l o c k L e n g t h ( h s d - > I n s t a n c e ,   B L O C K S I Z E ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
         h s d - > E r r o r C o d e   =   e r r o r s t a t e ;  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   S D   c a r d   i n f o .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p C a r d I n f o :   P o i n t e r   t o   t h e   H A L _ S D _ C a r d I n f o T y p e D e f   s t r u c t u r e   t h a t  
     *                   w i l l   c o n t a i n   t h e   S D   c a r d   s t a t u s   i n f o r m a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ G e t C a r d I n f o ( S D _ H a n d l e T y p e D e f   * h s d ,   H A L _ S D _ C a r d I n f o T y p e D e f   * p C a r d I n f o )  
 {  
     p C a r d I n f o - > C a r d T y p e           =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . C a r d T y p e ) ;  
     p C a r d I n f o - > C a r d V e r s i o n     =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . C a r d V e r s i o n ) ;  
     p C a r d I n f o - > C l a s s                 =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . C l a s s ) ;  
     p C a r d I n f o - > R e l C a r d A d d       =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . R e l C a r d A d d ) ;  
     p C a r d I n f o - > B l o c k N b r           =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . B l o c k N b r ) ;  
     p C a r d I n f o - > B l o c k S i z e         =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . B l o c k S i z e ) ;  
     p C a r d I n f o - > L o g B l o c k N b r     =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . L o g B l o c k N b r ) ;  
     p C a r d I n f o - > L o g B l o c k S i z e   =   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . L o g B l o c k S i z e ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   w i d e   b u s   o p e r a t i o n   f o r   t h e   r e q u e s t e d   c a r d   i f   s u p p o r t e d   b y  
     *                   c a r d .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     W i d e M o d e :   S p e c i f i e s   t h e   S D   c a r d   w i d e   b u s   m o d e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S D I O _ B U S _ W I D E _ 8 B :   8 - b i t   d a t a   t r a n s f e r  
     *                         @ a r g   S D I O _ B U S _ W I D E _ 4 B :   4 - b i t   d a t a   t r a n s f e r  
     *                         @ a r g   S D I O _ B U S _ W I D E _ 1 B :   1 - b i t   d a t a   t r a n s f e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ C o n f i g W i d e B u s O p e r a t i o n ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   W i d e M o d e )  
 {  
     S D I O _ I n i t T y p e D e f   I n i t ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ S D I O _ B U S _ W I D E ( W i d e M o d e ) ) ;  
  
     / *   C h a n g e   S t a t e   * /  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ B U S Y ;  
  
     i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
     {  
         i f ( W i d e M o d e   = =   S D I O _ B U S _ W I D E _ 8 B )  
         {  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ U N S U P P O R T E D _ F E A T U R E ;  
         }  
         e l s e   i f ( W i d e M o d e   = =   S D I O _ B U S _ W I D E _ 4 B )  
         {  
             e r r o r s t a t e   =   S D _ W i d e B u s _ E n a b l e ( h s d ) ;  
  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         }  
         e l s e   i f ( W i d e M o d e   = =   S D I O _ B U S _ W I D E _ 1 B )  
         {  
             e r r o r s t a t e   =   S D _ W i d e B u s _ D i s a b l e ( h s d ) ;  
  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         }  
         e l s e  
         {  
             / *   W i d e M o d e   i s   n o t   a   v a l i d   a r g u m e n t * /  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ P A R A M ;  
         }  
     }  
     e l s e  
     {  
         / *   M M C   C a r d   d o e s   n o t   s u p p o r t   t h i s   f e a t u r e   * /  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ U N S U P P O R T E D _ F E A T U R E ;  
     }  
  
     i f ( h s d - > E r r o r C o d e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         / *   C o n f i g u r e   t h e   S D I O   p e r i p h e r a l   * /  
         I n i t . C l o c k E d g e                       =   h s d - > I n i t . C l o c k E d g e ;  
         I n i t . C l o c k B y p a s s                   =   h s d - > I n i t . C l o c k B y p a s s ;  
         I n i t . C l o c k P o w e r S a v e             =   h s d - > I n i t . C l o c k P o w e r S a v e ;  
         I n i t . B u s W i d e                           =   W i d e M o d e ;  
         I n i t . H a r d w a r e F l o w C o n t r o l   =   h s d - > I n i t . H a r d w a r e F l o w C o n t r o l ;  
         I n i t . C l o c k D i v                         =   h s d - > I n i t . C l o c k D i v ;  
         ( v o i d ) S D I O _ I n i t ( h s d - > I n s t a n c e ,   I n i t ) ;  
     }  
  
     / *   S e t   B l o c k   S i z e   f o r   C a r d   * /  
     e r r o r s t a t e   =   S D M M C _ C m d B l o c k L e n g t h ( h s d - > I n s t a n c e ,   B L O C K S I Z E ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
         h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
  
     / *   C h a n g e   S t a t e   * /  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   c u r r e n t   s d   c a r d   d a t a   s t a t e .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   C a r d   s t a t e  
     * /  
 H A L _ S D _ C a r d S t a t e T y p e D e f   H A L _ S D _ G e t C a r d S t a t e ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   c a r d s t a t e ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   r e s p 1   =   0 ;  
  
     e r r o r s t a t e   =   S D _ S e n d S t a t u s ( h s d ,   & r e s p 1 ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
     }  
  
     c a r d s t a t e   =   ( ( r e s p 1   > >   9 U )   &   0 x 0 F U ) ;  
  
     r e t u r n   ( H A L _ S D _ C a r d S t a t e T y p e D e f ) c a r d s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   t h e   c u r r e n t   t r a n s f e r   a n d   d i s a b l e   t h e   S D .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   a   S D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ A b o r t ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     H A L _ S D _ C a r d S t a t e T y p e D e f   C a r d S t a t e ;  
     u i n t 3 2 _ t   c o n t e x t   =   h s d - > C o n t e x t ;  
  
     / *   D I s a b l e   A l l   i n t e r r u p t s   * /  
     _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   S D I O _ I T _ D A T A E N D   |   S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T | \  
                                                       S D I O _ I T _ T X U N D E R R |   S D I O _ I T _ R X O V E R R ) ;  
  
     / *   C l e a r   A l l   f l a g s   * /  
     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
     C L E A R _ B I T ( h s d - > I n s t a n c e - > D C T R L ,   S D I O _ D C T R L _ D T E N ) ;  
  
     i f   ( ( c o n t e x t   &   S D _ C O N T E X T _ D M A )   ! =   0 U )  
     {  
         / *   D i s a b l e   t h e   S D   D M A   r e q u e s t   * /  
         h s d - > I n s t a n c e - > D C T R L   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) S D I O _ D C T R L _ D M A E N ) ;  
  
         / *   A b o r t   t h e   S D   D M A   T x   c h a n n e l   * /  
         i f   ( ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
         {  
             i f ( H A L _ D M A _ A b o r t ( h s d - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D M A ;  
             }  
         }  
         / *   A b o r t   t h e   S D   D M A   R x   c h a n n e l   * /  
         e l s e   i f   ( ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
         {  
             i f ( H A L _ D M A _ A b o r t ( h s d - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D M A ;  
             }  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
     }  
  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
  
     / *   I n i t i a l i z e   t h e   S D   o p e r a t i o n   * /  
     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
  
     C a r d S t a t e   =   H A L _ S D _ G e t C a r d S t a t e ( h s d ) ;  
     i f ( ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ R E C E I V I N G )   | |   ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ S E N D I N G ) )  
     {  
         h s d - > E r r o r C o d e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
     }  
     i f ( h s d - > E r r o r C o d e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   t h e   c u r r e n t   t r a n s f e r   a n d   d i s a b l e   t h e   S D   ( I T   m o d e ) .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   a   S D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S D   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S D _ A b o r t _ I T ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     H A L _ S D _ C a r d S t a t e T y p e D e f   C a r d S t a t e ;  
     u i n t 3 2 _ t   c o n t e x t   =   h s d - > C o n t e x t ;  
  
     / *   D i s a b l e   A l l   i n t e r r u p t s   * /  
     _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   S D I O _ I T _ D A T A E N D   |   S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T | \  
                                                       S D I O _ I T _ T X U N D E R R |   S D I O _ I T _ R X O V E R R ) ;  
  
     C L E A R _ B I T ( h s d - > I n s t a n c e - > D C T R L ,   S D I O _ D C T R L _ D T E N ) ;  
  
     i f   ( ( c o n t e x t   &   S D _ C O N T E X T _ D M A )   ! =   0 U )  
     {  
         / *   D i s a b l e   t h e   S D   D M A   r e q u e s t   * /  
         h s d - > I n s t a n c e - > D C T R L   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) S D I O _ D C T R L _ D M A E N ) ;  
  
         / *   A b o r t   t h e   S D   D M A   T x   c h a n n e l   * /  
         i f   ( ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ W R I T E _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
         {  
             h s d - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   S D _ D M A T x A b o r t ;  
             i f ( H A L _ D M A _ A b o r t _ I T ( h s d - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 h s d - > h d m a t x   =   N U L L ;  
             }  
         }  
         / *   A b o r t   t h e   S D   D M A   R x   c h a n n e l   * /  
         e l s e   i f   ( ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ S I N G L E _ B L O C K )   ! =   0 U )   | |   ( ( c o n t e x t   &   S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K )   ! =   0 U ) )  
         {  
             h s d - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   S D _ D M A R x A b o r t ;  
             i f ( H A L _ D M A _ A b o r t _ I T ( h s d - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 h s d - > h d m a r x   =   N U L L ;  
             }  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
     }  
     / *   N o   t r a n s f e r   o n g o i n g   o n   b o t h   D M A   c h a n n e l s * /  
     e l s e  
     {  
         / *   C l e a r   A l l   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
         C a r d S t a t e   =   H A L _ S D _ G e t C a r d S t a t e ( h s d ) ;  
         h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
         h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
         i f ( ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ R E C E I V I N G )   | |   ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ S E N D I N G ) )  
         {  
             h s d - > E r r o r C o d e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
         }  
         i f ( h s d - > E r r o r C o d e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
         e l s e  
         {  
 # i f   d e f i n e d   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S )   & &   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h s d - > A b o r t C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
             H A L _ S D _ A b o r t C a l l b a c k ( h s d ) ;  
 # e n d i f   / *   U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
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
 / *   P r i v a t e   f u n c t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S D _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D M A   S D   t r a n s m i t   p r o c e s s   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S D _ H a n d l e T y p e D e f *   h s d   =   ( S D _ H a n d l e T y p e D e f *   ) ( h d m a - > P a r e n t ) ;  
  
     / *   E n a b l e   D A T A E N D   I n t e r r u p t   * /  
     _ _ H A L _ S D _ E N A B L E _ I T ( h s d ,   ( S D I O _ I T _ D A T A E N D ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S D   r e c e i v e   p r o c e s s   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S D _ H a n d l e T y p e D e f *   h s d   =   ( S D _ H a n d l e T y p e D e f *   ) ( h d m a - > P a r e n t ) ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
  
     / *   S e n d   s t o p   c o m m a n d   i n   m u l t i b l o c k   w r i t e   * /  
     i f ( h s d - > C o n t e x t   = =   ( S D _ C O N T E X T _ R E A D _ M U L T I P L E _ B L O C K   |   S D _ C O N T E X T _ D M A ) )  
     {  
         e r r o r s t a t e   =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             h s d - > E r r o r C o d e   | =   e r r o r s t a t e ;  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
             H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f  
         }  
     }  
  
     / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A E N   b i t  
     i n   t h e   S D   D C T R L   r e g i s t e r   * /  
     h s d - > I n s t a n c e - > D C T R L   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) S D I O _ D C T R L _ D M A E N ) ;  
  
     / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h s d - > R x C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
     H A L _ S D _ R x C p l t C a l l b a c k ( h s d ) ;  
 # e n d i f  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S D   c o m m u n i c a t i o n   e r r o r   c a l l b a c k  
     *   @ p a r a m     h d m a :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S D _ H a n d l e T y p e D e f *   h s d   =   ( S D _ H a n d l e T y p e D e f *   ) ( h d m a - > P a r e n t ) ;  
     H A L _ S D _ C a r d S t a t e T y p e D e f   C a r d S t a t e ;  
     u i n t 3 2 _ t   R x E r r o r C o d e ,   T x E r r o r C o d e ;  
  
         R x E r r o r C o d e   =   h s d - > h d m a r x - > E r r o r C o d e ;  
         T x E r r o r C o d e   =   h s d - > h d m a t x - > E r r o r C o d e ;      
         i f ( ( R x E r r o r C o d e   = =   H A L _ D M A _ E R R O R _ T E )   | |   ( T x E r r o r C o d e   = =   H A L _ D M A _ E R R O R _ T E ) )  
         {  
             / *   C l e a r   A l l   f l a g s   * /  
             _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ F L A G S ) ;  
  
             / *   D i s a b l e   A l l   i n t e r r u p t s   * /  
             _ _ H A L _ S D _ D I S A B L E _ I T ( h s d ,   S D I O _ I T _ D A T A E N D   |   S D I O _ I T _ D C R C F A I L   |   S D I O _ I T _ D T I M E O U T | \  
                 S D I O _ I T _ T X U N D E R R |   S D I O _ I T _ R X O V E R R ) ;  
  
             h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ D M A ;  
             C a r d S t a t e   =   H A L _ S D _ G e t C a r d S t a t e ( h s d ) ;  
             i f ( ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ R E C E I V I N G )   | |   ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ S E N D I N G ) )  
             {  
                 h s d - > E r r o r C o d e   | =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
             }  
  
             h s d - > S t a t e =   H A L _ S D _ S T A T E _ R E A D Y ;  
             h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
         }  
  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
         H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S D   T x   A b o r t   c a l l b a c k  
     *   @ p a r a m     h d m a :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ D M A T x A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S D _ H a n d l e T y p e D e f *   h s d   =   ( S D _ H a n d l e T y p e D e f *   ) ( h d m a - > P a r e n t ) ;  
     H A L _ S D _ C a r d S t a t e T y p e D e f   C a r d S t a t e ;  
  
     / *   C l e a r   A l l   f l a g s   * /  
     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
     C a r d S t a t e   =   H A L _ S D _ G e t C a r d S t a t e ( h s d ) ;  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
     i f ( ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ R E C E I V I N G )   | |   ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ S E N D I N G ) )  
     {  
         h s d - > E r r o r C o d e   | =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
     }  
  
     i f ( h s d - > E r r o r C o d e   = =   H A L _ S D _ E R R O R _ N O N E )  
     {  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h s d - > A b o r t C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
         H A L _ S D _ A b o r t C a l l b a c k ( h s d ) ;  
 # e n d i f  
     }  
     e l s e  
     {  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
         H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S D   R x   A b o r t   c a l l b a c k  
     *   @ p a r a m     h d m a :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ D M A R x A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S D _ H a n d l e T y p e D e f *   h s d   =   ( S D _ H a n d l e T y p e D e f *   ) ( h d m a - > P a r e n t ) ;  
     H A L _ S D _ C a r d S t a t e T y p e D e f   C a r d S t a t e ;  
  
     / *   C l e a r   A l l   f l a g s   * /  
     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
     C a r d S t a t e   =   H A L _ S D _ G e t C a r d S t a t e ( h s d ) ;  
     h s d - > S t a t e   =   H A L _ S D _ S T A T E _ R E A D Y ;  
     h s d - > C o n t e x t   =   S D _ C O N T E X T _ N O N E ;  
     i f ( ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ R E C E I V I N G )   | |   ( C a r d S t a t e   = =   H A L _ S D _ C A R D _ S E N D I N G ) )  
     {  
         h s d - > E r r o r C o d e   | =   S D M M C _ C m d S t o p T r a n s f e r ( h s d - > I n s t a n c e ) ;  
     }  
  
     i f ( h s d - > E r r o r C o d e   = =   H A L _ S D _ E R R O R _ N O N E )  
     {  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h s d - > A b o r t C p l t C a l l b a c k ( h s d ) ;  
 # e l s e  
         H A L _ S D _ A b o r t C a l l b a c k ( h s d ) ;  
 # e n d i f  
     }  
     e l s e  
     {  
 # i f   ( U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h s d - > E r r o r C a l l b a c k ( h s d ) ;  
 # e l s e  
         H A L _ S D _ E r r o r C a l l b a c k ( h s d ) ;  
 # e n d i f  
     }  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   s d   c a r d .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   S D   C a r d   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ I n i t C a r d ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     H A L _ S D _ C a r d C S D T y p e D e f   C S D ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 1 6 _ t   s d _ r c a   =   1 U ;  
  
     / *   C h e c k   t h e   p o w e r   S t a t e   * /  
     i f ( S D I O _ G e t P o w e r S t a t e ( h s d - > I n s t a n c e )   = =   0 U )  
     {  
         / *   P o w e r   o f f   * /  
         r e t u r n   H A L _ S D _ E R R O R _ R E Q U E S T _ N O T _ A P P L I C A B L E ;  
     }  
  
     i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
     {  
         / *   S e n d   C M D 2   A L L _ S E N D _ C I D   * /  
         e r r o r s t a t e   =   S D M M C _ C m d S e n d C I D ( h s d - > I n s t a n c e ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
         e l s e  
         {  
             / *   G e t   C a r d   i d e n t i f i c a t i o n   n u m b e r   d a t a   * /  
             h s d - > C I D [ 0 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 ) ;  
             h s d - > C I D [ 1 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 2 ) ;  
             h s d - > C I D [ 2 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 3 ) ;  
             h s d - > C I D [ 3 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 4 ) ;  
         }  
     }  
  
     i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
     {  
         / *   S e n d   C M D 3   S E T _ R E L _ A D D R   w i t h   a r g u m e n t   0   * /  
         / *   S D   C a r d   p u b l i s h e s   i t s   R C A .   * /  
         e r r o r s t a t e   =   S D M M C _ C m d S e t R e l A d d ( h s d - > I n s t a n c e ,   & s d _ r c a ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
     }  
     i f ( h s d - > S d C a r d . C a r d T y p e   ! =   C A R D _ S E C U R E D )  
     {  
         / *   G e t   t h e   S D   c a r d   R C A   * /  
         h s d - > S d C a r d . R e l C a r d A d d   =   s d _ r c a ;  
  
         / *   S e n d   C M D 9   S E N D _ C S D   w i t h   a r g u m e n t   a s   c a r d ' s   R C A   * /  
         e r r o r s t a t e   =   S D M M C _ C m d S e n d C S D ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . R e l C a r d A d d   < <   1 6 U ) ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
         e l s e  
         {  
             / *   G e t   C a r d   S p e c i f i c   D a t a   * /  
             h s d - > C S D [ 0 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 ) ;  
             h s d - > C S D [ 1 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 2 ) ;  
             h s d - > C S D [ 2 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 3 ) ;  
             h s d - > C S D [ 3 U ]   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 4 ) ;  
         }  
     }  
  
     / *   G e t   t h e   C a r d   C l a s s   * /  
     h s d - > S d C a r d . C l a s s   =   ( S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 2 )   > >   2 0 U ) ;  
  
     / *   G e t   C S D   p a r a m e t e r s   * /  
     i f   ( H A L _ S D _ G e t C a r d C S D ( h s d ,   & C S D )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ U N S U P P O R T E D _ F E A T U R E ;  
     }  
  
     / *   S e l e c t   t h e   C a r d   * /  
     e r r o r s t a t e   =   S D M M C _ C m d S e l D e s e l ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) h s d - > S d C a r d . R e l C a r d A d d )   < <   1 6 U ) ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   C o n f i g u r e   S D I O   p e r i p h e r a l   i n t e r f a c e   * /  
     ( v o i d ) S D I O _ I n i t ( h s d - > I n s t a n c e ,   h s d - > I n i t ) ;  
  
     / *   A l l   c a r d s   a r e   i n i t i a l i z e d   * /  
     r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     E n q u i r e s   c a r d s   a b o u t   t h e i r   o p e r a t i n g   v o l t a g e   a n d   c o n f i g u r e s   c l o c k  
     *                   c o n t r o l s   a n d   s t o r e s   S D   i n f o r m a t i o n   t h a t   w i l l   b e   n e e d e d   i n   f u t u r e  
     *                   i n   t h e   S D   h a n d l e .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ P o w e r O N ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     u i n t 3 2 _ t   r e s p o n s e   =   0 U ,   v a l i d v o l t a g e   =   0 U ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
  
     / *   C M D 0 :   G O _ I D L E _ S T A T E   * /  
     e r r o r s t a t e   =   S D M M C _ C m d G o I d l e S t a t e ( h s d - > I n s t a n c e ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   C M D 8 :   S E N D _ I F _ C O N D :   C o m m a n d   a v a i l a b l e   o n l y   o n   V 2 . 0   c a r d s   * /  
     e r r o r s t a t e   =   S D M M C _ C m d O p e r C o n d ( h s d - > I n s t a n c e ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > S d C a r d . C a r d V e r s i o n   =   C A R D _ V 1 _ X ;  
         / *   C M D 0 :   G O _ I D L E _ S T A T E   * /  
         e r r o r s t a t e   =   S D M M C _ C m d G o I d l e S t a t e ( h s d - > I n s t a n c e ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
  
     }  
     e l s e  
     {  
         h s d - > S d C a r d . C a r d V e r s i o n   =   C A R D _ V 2 _ X ;  
     }  
  
     i f (   h s d - > S d C a r d . C a r d V e r s i o n   = =   C A R D _ V 2 _ X )  
     {  
         / *   S E N D   C M D 5 5   A P P _ C M D   w i t h   R C A   a s   0   * /  
         e r r o r s t a t e   =   S D M M C _ C m d A p p C o m m a n d ( h s d - > I n s t a n c e ,   0 ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   H A L _ S D _ E R R O R _ U N S U P P O R T E D _ F E A T U R E ;  
         }  
     }  
     / *   S D   C A R D   * /  
     / *   S e n d   A C M D 4 1   S D _ A P P _ O P _ C O N D   w i t h   A r g u m e n t   0 x 8 0 1 0 0 0 0 0   * /  
     w h i l e ( ( c o u n t   <   S D M M C _ M A X _ V O L T _ T R I A L )   & &   ( v a l i d v o l t a g e   = =   0 U ) )  
     {  
         / *   S E N D   C M D 5 5   A P P _ C M D   w i t h   R C A   a s   0   * /  
         e r r o r s t a t e   =   S D M M C _ C m d A p p C o m m a n d ( h s d - > I n s t a n c e ,   0 ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
  
         / *   S e n d   C M D 4 1   * /  
         e r r o r s t a t e   =   S D M M C _ C m d A p p O p e r C o m m a n d ( h s d - > I n s t a n c e ,   S D M M C _ V O L T A G E _ W I N D O W _ S D   |   S D M M C _ H I G H _ C A P A C I T Y   |   S D _ S W I T C H _ 1 _ 8 V _ C A P A C I T Y ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   H A L _ S D _ E R R O R _ U N S U P P O R T E D _ F E A T U R E ;  
         }  
  
         / *   G e t   c o m m a n d   r e s p o n s e   * /  
         r e s p o n s e   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 ) ;  
  
         / *   G e t   o p e r a t i n g   v o l t a g e * /  
         v a l i d v o l t a g e   =   ( ( ( r e s p o n s e   > >   3 1 U )   = =   1 U )   ?   1 U   :   0 U ) ;  
  
         c o u n t + + ;  
     }  
  
     i f ( c o u n t   > =   S D M M C _ M A X _ V O L T _ T R I A L )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ I N V A L I D _ V O L T R A N G E ;  
     }  
  
     i f ( ( r e s p o n s e   &   S D M M C _ H I G H _ C A P A C I T Y )   = =   S D M M C _ H I G H _ C A P A C I T Y )   / *   ( r e s p o n s e   & =   S D _ H I G H _ C A P A C I T Y )   * /  
     {  
         h s d - > S d C a r d . C a r d T y p e   =   C A R D _ S D H C _ S D X C ;  
     }  
     e l s e  
     {  
         h s d - > S d C a r d . C a r d T y p e   =   C A R D _ S D S C ;  
     }  
  
  
     r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     T u r n s   t h e   S D I O   o u t p u t   s i g n a l s   o f f .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ P o w e r O F F ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     / *   S e t   P o w e r   S t a t e   t o   O F F   * /  
     ( v o i d ) S D I O _ P o w e r S t a t e _ O F F ( h s d - > I n s t a n c e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   S t a t u s   i n f o   c o m m a n d .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p S D s t a t u s :   P o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   S D   c a r d   s t a t u s  
     *                   S D   S t a t u s   r e g i s t e r )  
     *   @ r e t v a l   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ S e n d S D S t a t u s ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   * p S D s t a t u s )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     u i n t 3 2 _ t   c o u n t ;  
     u i n t 3 2 _ t   * p D a t a   =   p S D s t a t u s ;  
  
     / *   C h e c k   S D   r e s p o n s e   * /  
     i f ( ( S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 )   &   S D M M C _ C A R D _ L O C K E D )   = =   S D M M C _ C A R D _ L O C K E D )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ L O C K _ U N L O C K _ F A I L E D ;  
     }  
  
     / *   S e t   b l o c k   s i z e   f o r   c a r d   i f   i t   i s   n o t   e q u a l   t o   c u r r e n t   b l o c k   s i z e   f o r   c a r d   * /  
     e r r o r s t a t e   =   S D M M C _ C m d B l o c k L e n g t h ( h s d - > I n s t a n c e ,   6 4 U ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ N O N E ;  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   S e n d   C M D 5 5   * /  
     e r r o r s t a t e   =   S D M M C _ C m d A p p C o m m a n d ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . R e l C a r d A d d   < <   1 6 U ) ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ N O N E ;  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   C o n f i g u r e   t h e   S D   D P S M   ( D a t a   P a t h   S t a t e   M a c h i n e )   * /  
     c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
     c o n f i g . D a t a L e n g t h         =   6 4 U ;  
     c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 6 4 B ;  
     c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ S D I O ;  
     c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
     c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
     / *   S e n d   A C M D 1 3   ( S D _ A P P _ S T A U S )     w i t h   a r g u m e n t   a s   c a r d ' s   R C A   * /  
     e r r o r s t a t e   =   S D M M C _ C m d S t a t u s R e g i s t e r ( h s d - > I n s t a n c e ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         h s d - > E r r o r C o d e   | =   H A L _ S D _ E R R O R _ N O N E ;  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   G e t   s t a t u s   d a t a   * /  
     w h i l e ( ! _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R   |   S D I O _ F L A G _ D C R C F A I L   |   S D I O _ F L A G _ D T I M E O U T   |   S D I O _ F L A G _ D B C K E N D ) )  
     {  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X F I F O H F ) )  
         {  
             f o r ( c o u n t   =   0 U ;   c o u n t   <   8 U ;   c o u n t + + )  
             {  
                 * p D a t a   =   S D I O _ R e a d F I F O ( h s d - > I n s t a n c e ) ;  
                 p D a t a + + ;  
             }  
         }  
  
         i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   > =     S D M M C _ D A T A T I M E O U T )  
         {  
             r e t u r n   H A L _ S D _ E R R O R _ T I M E O U T ;  
         }  
     }  
  
     i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D T I M E O U T ) )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ D A T A _ T I M E O U T ;  
     }  
     e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L ) )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ D A T A _ C R C _ F A I L ;  
     }  
     e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R ) )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ R X _ O V E R R U N ;  
     }  
     e l s e  
     {  
         / *   N o t h i n g   t o   d o   * /  
     }  
  
     w h i l e   ( ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X D A V L ) ) )  
     {  
         * p D a t a   =   S D I O _ R e a d F I F O ( h s d - > I n s t a n c e ) ;  
         p D a t a + + ;  
  
         i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   > =     S D M M C _ D A T A T I M E O U T )  
         {  
             r e t u r n   H A L _ S D _ E R R O R _ T I M E O U T ;  
         }  
     }  
  
     / *   C l e a r   a l l   t h e   s t a t i c   s t a t u s   f l a g s * /  
     _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
     r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   c u r r e n t   c a r d ' s   s t a t u s .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p C a r d S t a t u s :   p o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   S D   c a r d  
     *                   s t a t u s   ( C a r d   S t a t u s   r e g i s t e r )  
     *   @ r e t v a l   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ S e n d S t a t u s ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   * p C a r d S t a t u s )  
 {  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
  
     i f ( p C a r d S t a t u s   = =   N U L L )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ P A R A M ;  
     }  
  
     / *   S e n d   S t a t u s   c o m m a n d   * /  
     e r r o r s t a t e   =   S D M M C _ C m d S e n d S t a t u s ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . R e l C a r d A d d   < <   1 6 U ) ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   G e t   S D   c a r d   s t a t u s   * /  
     * p C a r d S t a t u s   =   S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 ) ;  
  
     r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   S D I O   w i d e   b u s   m o d e .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ W i d e B u s _ E n a b l e ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   s c r [ 2 U ]   =   { 0 U ,   0 U } ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
  
     i f ( ( S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 )   &   S D M M C _ C A R D _ L O C K E D )   = =   S D M M C _ C A R D _ L O C K E D )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ L O C K _ U N L O C K _ F A I L E D ;  
     }  
  
     / *   G e t   S C R   R e g i s t e r   * /  
     e r r o r s t a t e   =   S D _ F i n d S C R ( h s d ,   s c r ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   I f   r e q u e s t e d   c a r d   s u p p o r t s   w i d e   b u s   o p e r a t i o n   * /  
     i f ( ( s c r [ 1 U ]   &   S D M M C _ W I D E _ B U S _ S U P P O R T )   ! =   S D M M C _ A L L Z E R O )  
     {  
         / *   S e n d   C M D 5 5   A P P _ C M D   w i t h   a r g u m e n t   a s   c a r d ' s   R C A . * /  
         e r r o r s t a t e   =   S D M M C _ C m d A p p C o m m a n d ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . R e l C a r d A d d   < <   1 6 U ) ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
  
         / *   S e n d   A C M D 6   A P P _ C M D   w i t h   a r g u m e n t   a s   2   f o r   w i d e   b u s   m o d e   * /  
         e r r o r s t a t e   =   S D M M C _ C m d B u s W i d t h ( h s d - > I n s t a n c e ,   2 U ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
  
         r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ R E Q U E S T _ N O T _ A P P L I C A B L E ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   S D I O   w i d e   b u s   m o d e .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ r e t v a l   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ W i d e B u s _ D i s a b l e ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   s c r [ 2 U ]   =   { 0 U ,   0 U } ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
  
     i f ( ( S D I O _ G e t R e s p o n s e ( h s d - > I n s t a n c e ,   S D I O _ R E S P 1 )   &   S D M M C _ C A R D _ L O C K E D )   = =   S D M M C _ C A R D _ L O C K E D )  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ L O C K _ U N L O C K _ F A I L E D ;  
     }  
  
     / *   G e t   S C R   R e g i s t e r   * /  
     e r r o r s t a t e   =   S D _ F i n d S C R ( h s d ,   s c r ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   I f   r e q u e s t e d   c a r d   s u p p o r t s   1   b i t   m o d e   o p e r a t i o n   * /  
     i f ( ( s c r [ 1 U ]   &   S D M M C _ S I N G L E _ B U S _ S U P P O R T )   ! =   S D M M C _ A L L Z E R O )  
     {  
         / *   S e n d   C M D 5 5   A P P _ C M D   w i t h   a r g u m e n t   a s   c a r d ' s   R C A   * /  
         e r r o r s t a t e   =   S D M M C _ C m d A p p C o m m a n d ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( h s d - > S d C a r d . R e l C a r d A d d   < <   1 6 U ) ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
  
         / *   S e n d   A C M D 6   A P P _ C M D   w i t h   a r g u m e n t   a s   0   f o r   s i n g l e   b u s   m o d e   * /  
         e r r o r s t a t e   =   S D M M C _ C m d B u s W i d t h ( h s d - > I n s t a n c e ,   0 U ) ;  
         i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
         {  
             r e t u r n   e r r o r s t a t e ;  
         }  
  
         r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ S D _ E R R O R _ R E Q U E S T _ N O T _ A P P L I C A B L E ;  
     }  
 }  
  
  
 / * *  
     *   @ b r i e f     F i n d s   t h e   S D   c a r d   S C R   r e g i s t e r   v a l u e .  
     *   @ p a r a m     h s d :   P o i n t e r   t o   S D   h a n d l e  
     *   @ p a r a m     p S C R :   p o i n t e r   t o   t h e   b u f f e r   t h a t   w i l l   c o n t a i n   t h e   S C R   v a l u e  
     *   @ r e t v a l   e r r o r   s t a t e  
     * /  
 s t a t i c   u i n t 3 2 _ t   S D _ F i n d S C R ( S D _ H a n d l e T y p e D e f   * h s d ,   u i n t 3 2 _ t   * p S C R )  
 {  
     S D I O _ D a t a I n i t T y p e D e f   c o n f i g ;  
     u i n t 3 2 _ t   e r r o r s t a t e ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     u i n t 3 2 _ t   i n d e x   =   0 U ;  
     u i n t 3 2 _ t   t e m p s c r [ 2 U ]   =   { 0 U ,   0 U } ;  
     u i n t 3 2 _ t   * s c r   =   p S C R ;  
  
     / *   S e t   B l o c k   S i z e   T o   8   B y t e s   * /  
     e r r o r s t a t e   =   S D M M C _ C m d B l o c k L e n g t h ( h s d - > I n s t a n c e ,   8 U ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     / *   S e n d   C M D 5 5   A P P _ C M D   w i t h   a r g u m e n t   a s   c a r d ' s   R C A   * /  
     e r r o r s t a t e   =   S D M M C _ C m d A p p C o m m a n d ( h s d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) ( ( h s d - > S d C a r d . R e l C a r d A d d )   < <   1 6 U ) ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     c o n f i g . D a t a T i m e O u t       =   S D M M C _ D A T A T I M E O U T ;  
     c o n f i g . D a t a L e n g t h         =   8 U ;  
     c o n f i g . D a t a B l o c k S i z e   =   S D I O _ D A T A B L O C K _ S I Z E _ 8 B ;  
     c o n f i g . T r a n s f e r D i r       =   S D I O _ T R A N S F E R _ D I R _ T O _ S D I O ;  
     c o n f i g . T r a n s f e r M o d e     =   S D I O _ T R A N S F E R _ M O D E _ B L O C K ;  
     c o n f i g . D P S M                     =   S D I O _ D P S M _ E N A B L E ;  
     ( v o i d ) S D I O _ C o n f i g D a t a ( h s d - > I n s t a n c e ,   & c o n f i g ) ;  
  
     / *   S e n d   A C M D 5 1   S D _ A P P _ S E N D _ S C R   w i t h   a r g u m e n t   a s   0   * /  
     e r r o r s t a t e   =   S D M M C _ C m d S e n d S C R ( h s d - > I n s t a n c e ) ;  
     i f ( e r r o r s t a t e   ! =   H A L _ S D _ E R R O R _ N O N E )  
     {  
         r e t u r n   e r r o r s t a t e ;  
     }  
  
     w h i l e ( ! _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R   |   S D I O _ F L A G _ D C R C F A I L   |   S D I O _ F L A G _ D T I M E O U T ) )  
     {  
         i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X D A V L ) )  
         {  
             * ( t e m p s c r   +   i n d e x )   =   S D I O _ R e a d F I F O ( h s d - > I n s t a n c e ) ;  
             i n d e x + + ;  
         }  
         e l s e   i f ( ! _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X A C T ) )  
         {  
             b r e a k ;  
         }  
  
         i f ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   > =     S D M M C _ D A T A T I M E O U T )  
         {  
             r e t u r n   H A L _ S D _ E R R O R _ T I M E O U T ;  
         }  
     }  
  
     i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D T I M E O U T ) )  
     {  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ F L A G _ D T I M E O U T ) ;  
  
         r e t u r n   H A L _ S D _ E R R O R _ D A T A _ T I M E O U T ;  
     }  
     e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L ) )  
     {  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ F L A G _ D C R C F A I L ) ;  
  
         r e t u r n   H A L _ S D _ E R R O R _ D A T A _ C R C _ F A I L ;  
     }  
     e l s e   i f ( _ _ H A L _ S D _ G E T _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R ) )  
     {  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ F L A G _ R X O V E R R ) ;  
  
         r e t u r n   H A L _ S D _ E R R O R _ R X _ O V E R R U N ;  
     }  
     e l s e  
     {  
         / *   N o   e r r o r   f l a g   s e t   * /  
         / *   C l e a r   a l l   t h e   s t a t i c   f l a g s   * /  
         _ _ H A L _ S D _ C L E A R _ F L A G ( h s d ,   S D I O _ S T A T I C _ D A T A _ F L A G S ) ;  
  
         * s c r   =   ( ( ( t e m p s c r [ 1 ]   &   S D M M C _ 0 T O 7 B I T S )   < <   2 4 )     |   ( ( t e m p s c r [ 1 ]   &   S D M M C _ 8 T O 1 5 B I T S )   < <   8 )   | \  
                         ( ( t e m p s c r [ 1 ]   &   S D M M C _ 1 6 T O 2 3 B I T S )   > >   8 )   |   ( ( t e m p s c r [ 1 ]   &   S D M M C _ 2 4 T O 3 1 B I T S )   > >   2 4 ) ) ;  
         s c r + + ;  
         * s c r   =   ( ( ( t e m p s c r [ 0 ]   &   S D M M C _ 0 T O 7 B I T S )   < <   2 4 )     |   ( ( t e m p s c r [ 0 ]   &   S D M M C _ 8 T O 1 5 B I T S )   < <   8 )   | \  
                         ( ( t e m p s c r [ 0 ]   &   S D M M C _ 1 6 T O 2 3 B I T S )   > >   8 )   |   ( ( t e m p s c r [ 0 ]   &   S D M M C _ 2 4 T O 3 1 B I T S )   > >   2 4 ) ) ;  
  
     }  
  
     r e t u r n   H A L _ S D _ E R R O R _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     W r a p   u p   r e a d i n g   i n   n o n - b l o c k i n g   m o d e .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   a   S D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ R e a d _ I T ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   c o u n t ,   d a t a ,   d a t a r e m a i n i n g ;  
     u i n t 8 _ t *   t m p ;  
  
     t m p   =   h s d - > p R x B u f f P t r ;  
     d a t a r e m a i n i n g   =   h s d - > R x X f e r S i z e ;  
  
     i f   ( d a t a r e m a i n i n g   >   0 U )  
     {  
         / *   R e a d   d a t a   f r o m   S D I O   R x   F I F O   * /  
         f o r ( c o u n t   =   0 U ;   c o u n t   <   8 U ;   c o u n t + + )  
         {  
             d a t a   =   S D I O _ R e a d F I F O ( h s d - > I n s t a n c e ) ;  
             * t m p   =   ( u i n t 8 _ t ) ( d a t a   &   0 x F F U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             * t m p   =   ( u i n t 8 _ t ) ( ( d a t a   > >   8 U )   &   0 x F F U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             * t m p   =   ( u i n t 8 _ t ) ( ( d a t a   > >   1 6 U )   &   0 x F F U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             * t m p   =   ( u i n t 8 _ t ) ( ( d a t a   > >   2 4 U )   &   0 x F F U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
         }  
  
         h s d - > p R x B u f f P t r   =   t m p ;  
         h s d - > R x X f e r S i z e   =   d a t a r e m a i n i n g ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r a p   u p   w r i t i n g   i n   n o n - b l o c k i n g   m o d e .  
     *   @ p a r a m     h s d :   p o i n t e r   t o   a   S D _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S D _ W r i t e _ I T ( S D _ H a n d l e T y p e D e f   * h s d )  
 {  
     u i n t 3 2 _ t   c o u n t ,   d a t a ,   d a t a r e m a i n i n g ;  
     u i n t 8 _ t *   t m p ;  
  
     t m p   =   h s d - > p T x B u f f P t r ;  
     d a t a r e m a i n i n g   =   h s d - > T x X f e r S i z e ;  
  
     i f   ( d a t a r e m a i n i n g   >   0 U )  
     {  
         / *   W r i t e   d a t a   t o   S D I O   T x   F I F O   * /  
         f o r ( c o u n t   =   0 U ;   c o u n t   <   8 U ;   c o u n t + + )  
         {  
             d a t a   =   ( u i n t 3 2 _ t ) ( * t m p ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             d a t a   | =   ( ( u i n t 3 2 _ t ) ( * t m p )   < <   8 U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             d a t a   | =   ( ( u i n t 3 2 _ t ) ( * t m p )   < <   1 6 U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             d a t a   | =   ( ( u i n t 3 2 _ t ) ( * t m p )   < <   2 4 U ) ;  
             t m p + + ;  
             d a t a r e m a i n i n g - - ;  
             ( v o i d ) S D I O _ W r i t e F I F O ( h s d - > I n s t a n c e ,   & d a t a ) ;  
         }  
  
         h s d - > p T x B u f f P t r   =   t m p ;  
         h s d - > T x X f e r S i z e   =   d a t a r e m a i n i n g ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ S D _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   S D I O   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  