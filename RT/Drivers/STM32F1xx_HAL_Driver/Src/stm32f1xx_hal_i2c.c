??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ i 2 c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       I 2 C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   I n t e r   I n t e g r a t e d   C i r c u i t   ( I 2 C )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e ,   M o d e   a n d   E r r o r   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h e   I 2 C   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w s :  
  
         ( # )   D e c l a r e   a   I 2 C _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e ,   f o r   e x a m p l e :  
                 I 2 C _ H a n d l e T y p e D e f     h i 2 c ;  
  
         ( # ) I n i t i a l i z e   t h e   I 2 C   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   @ r e f   H A L _ I 2 C _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   I 2 C x   i n t e r f a c e   c l o c k  
                 ( # # )   I 2 C   p i n s   c o n f i g u r a t i o n  
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   I 2 C   G P I O s  
                         ( + + + )   C o n f i g u r e   I 2 C   p i n s   a s   a l t e r n a t e   f u n c t i o n   o p e n - d r a i n  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s  
                         ( + + + )   C o n f i g u r e   t h e   I 2 C x   i n t e r r u p t   p r i o r i t y  
                         ( + + + )   E n a b l e   t h e   N V I C   I 2 C   I R Q   C h a n n e l  
                 ( # # )   D M A   C o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   D M A   p r o c e s s  
                         ( + + + )   D e c l a r e   a   D M A _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e   f o r   t h e   t r a n s m i t   o r   r e c e i v e   c h a n n e l  
                         ( + + + )   E n a b l e   t h e   D M A x   i n t e r f a c e   c l o c k   u s i n g  
                         ( + + + )   C o n f i g u r e   t h e   D M A   h a n d l e   p a r a m e t e r s  
                         ( + + + )   C o n f i g u r e   t h e   D M A   T x   o r   R x   c h a n n e l  
                         ( + + + )   A s s o c i a t e   t h e   i n i t i a l i z e d   D M A   h a n d l e   t o   t h e   h i 2 c   D M A   T x   o r   R x   h a n d l e  
                         ( + + + )   C o n f i g u r e   t h e   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   f o r   t h e   t r a n s f e r   c o m p l e t e   i n t e r r u p t   o n  
                                     t h e   D M A   T x   o r   R x   c h a n n e l  
  
         ( # )   C o n f i g u r e   t h e   C o m m u n i c a t i o n   S p e e d ,   D u t y   c y c l e ,   A d d r e s s i n g   m o d e ,   O w n   A d d r e s s 1 ,  
                 D u a l   A d d r e s s i n g   m o d e ,   O w n   A d d r e s s 2 ,   G e n e r a l   c a l l   a n d   N o s t r e t c h   m o d e   i n   t h e   h i 2 c   I n i t   s t r u c t u r e .  
  
         ( # )   I n i t i a l i z e   t h e   I 2 C   r e g i s t e r s   b y   c a l l i n g   t h e   @ r e f   H A L _ I 2 C _ I n i t ( ) ,   c o n f i g u r e s   a l s o   t h e   l o w   l e v e l   H a r d w a r e  
                 ( G P I O ,   C L O C K ,   N V I C . . . e t c )   b y   c a l l i n g   t h e   c u s t o m i z e d   @ r e f   H A L _ I 2 C _ M s p I n i t ( )   A P I .  
  
         ( # )   T o   c h e c k   i f   t a r g e t   d e v i c e   i s   r e a d y   f o r   c o m m u n i c a t i o n ,   u s e   t h e   f u n c t i o n   @ r e f   H A L _ I 2 C _ I s D e v i c e R e a d y ( )  
  
         ( # )   F o r   I 2 C   I O   a n d   I O   M E M   o p e r a t i o n s ,   t h r e e   o p e r a t i o n   m o d e s   a r e   a v a i l a b l e   w i t h i n   t h i s   d r i v e r   :  
  
         * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   T r a n s m i t   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ T r a n s m i t ( )  
             ( + )   R e c e i v e   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ R e c e i v e ( )  
             ( + )   T r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ T r a n s m i t ( )  
             ( + )   R e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ R e c e i v e ( )  
  
         * * *   P o l l i n g   m o d e   I O   M E M   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   W r i t e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   t o   a   s p e c i f i c   m e m o r y   a d d r e s s   u s i n g   @ r e f   H A L _ I 2 C _ M e m _ W r i t e ( )  
             ( + )   R e a d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   f r o m   a   s p e c i f i c   m e m o r y   a d d r e s s   u s i n g   @ r e f   H A L _ I 2 C _ M e m _ R e a d ( )  
  
  
         * * *   I n t e r r u p t   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   T r a n s m i t   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ T r a n s m i t _ I T ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )  
             ( + )   R e c e i v e   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ R e c e i v e _ I T ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )  
             ( + )   T r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ T r a n s m i t _ I T ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )  
             ( + )   R e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ R e c e i v e _ I T ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )  
             ( + )   A b o r t   a   m a s t e r   I 2 C   p r o c e s s   c o m m u n i c a t i o n   w i t h   I n t e r r u p t   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ A b o r t _ I T ( )  
             ( + )   E n d   o f   a b o r t   p r o c e s s ,   @ r e f   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )  
  
         * * *   I n t e r r u p t   m o d e   o r   D M A   m o d e   I O   s e q u e n t i a l   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( @ )   T h e s e   i n t e r f a c e s   a l l o w   t o   m a n a g e   a   s e q u e n t i a l   t r a n s f e r   w i t h   a   r e p e a t e d   s t a r t   c o n d i t i o n  
                     w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
         [ . . ]  
             ( + )   A   s p e c i f i c   o p t i o n   f i e l d   m a n a g e   t h e   d i f f e r e n t   s t e p s   o f   a   s e q u e n t i a l   t r a n s f e r  
             ( + )   O p t i o n   f i e l d   v a l u e s   a r e   d e f i n e d   t h r o u g h   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n   a n d   a r e   l i s t e d   b e l o w :  
             ( + + )   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E :   N o   s e q u e n t i a l   u s a g e ,   f u n c t i o n a l   i s   s a m e   a s   a s s o c i a t e d   i n t e r f a c e s   i n   n o   s e q u e n t i a l   m o d e  
             ( + + )   I 2 C _ F I R S T _ F R A M E :   S e q u e n t i a l   u s a g e ,   t h i s   o p t i o n   a l l o w   t o   m a n a g e   a   s e q u e n c e   w i t h   s t a r t   c o n d i t i o n ,   a d d r e s s  
                                                         a n d   d a t a   t o   t r a n s f e r   w i t h o u t   a   f i n a l   s t o p   c o n d i t i o n  
             ( + + )   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E :   S e q u e n t i a l   u s a g e   ( M a s t e r   o n l y ) ,   t h i s   o p t i o n   a l l o w   t o   m a n a g e   a   s e q u e n c e   w i t h   s t a r t   c o n d i t i o n ,   a d d r e s s  
                                                         a n d   d a t a   t o   t r a n s f e r   w i t h o u t   a   f i n a l   s t o p   c o n d i t i o n ,   a n   t h e n   p e r m i t   a   c a l l   t h e   s a m e   m a s t e r   s e q u e n t i a l   i n t e r f a c e  
                                                         s e v e r a l   t i m e s   ( l i k e   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( )   t h e n   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( )  
                                                         o r   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( )   t h e n   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( ) )  
             ( + + )   I 2 C _ N E X T _ F R A M E :   S e q u e n t i a l   u s a g e ,   t h i s   o p t i o n   a l l o w   t o   m a n a g e   a   s e q u e n c e   w i t h   a   r e s t a r t   c o n d i t i o n ,   a d d r e s s  
                                                         a n d   w i t h   n e w   d a t a   t o   t r a n s f e r   i f   t h e   d i r e c t i o n   c h a n g e   o r   m a n a g e   o n l y   t h e   n e w   d a t a   t o   t r a n s f e r  
                                                         i f   n o   d i r e c t i o n   c h a n g e   a n d   w i t h o u t   a   f i n a l   s t o p   c o n d i t i o n   i n   b o t h   c a s e s  
             ( + + )   I 2 C _ L A S T _ F R A M E :   S e q u e n t i a l   u s a g e ,   t h i s   o p t i o n   a l l o w   t o   m a n a g e   a   s e q u a n c e   w i t h   a   r e s t a r t   c o n d i t i o n ,   a d d r e s s  
                                                         a n d   w i t h   n e w   d a t a   t o   t r a n s f e r   i f   t h e   d i r e c t i o n   c h a n g e   o r   m a n a g e   o n l y   t h e   n e w   d a t a   t o   t r a n s f e r  
                                                         i f   n o   d i r e c t i o n   c h a n g e   a n d   w i t h   a   f i n a l   s t o p   c o n d i t i o n   i n   b o t h   c a s e s  
             ( + + )   I 2 C _ L A S T _ F R A M E _ N O _ S T O P :   S e q u e n t i a l   u s a g e   ( M a s t e r   o n l y ) ,   t h i s   o p t i o n   a l l o w   t o   m a n a g e   a   r e s t a r t   c o n d i t i o n   a f t e r   s e v e r a l   c a l l   o f   t h e   s a m e   m a s t e r   s e q u e n t i a l  
                                                         i n t e r f a c e   s e v e r a l   t i m e s   ( l i n k   w i t h   o p t i o n   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E ) .  
                                                         U s a g e   c a n ,   t r a n s f e r   s e v e r a l   b y t e s   o n e   b y   o n e   u s i n g   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( o p t i o n   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E   t h e n   I 2 C _ N E X T _ F R A M E )  
                                                             o r   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T ( o p t i o n   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E   t h e n   I 2 C _ N E X T _ F R A M E )  
                                                             o r   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( o p t i o n   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E   t h e n   I 2 C _ N E X T _ F R A M E )  
                                                             o r   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A ( o p t i o n   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E   t h e n   I 2 C _ N E X T _ F R A M E ) .  
                                                         T h e n   u s a g e   o f   t h i s   o p t i o n   I 2 C _ L A S T _ F R A M E _ N O _ S T O P   a t   t h e   l a s t   T r a n s m i t   o r   R e c e i v e   s e q u e n c e   p e r m i t   t o   c a l l   t h e   o p p o s i t e   i n t e r f a c e   R e c e i v e   o r   T r a n s m i t  
                                                             w i t h o u t   s t o p p i n g   t h e   c o m m u n i c a t i o n   a n d   s o   g e n e r a t e   a   r e s t a r t   c o n d i t i o n .  
             ( + + )   I 2 C _ O T H E R _ F R A M E :   S e q u e n t i a l   u s a g e   ( M a s t e r   o n l y ) ,   t h i s   o p t i o n   a l l o w   t o   m a n a g e   a   r e s t a r t   c o n d i t i o n   a f t e r   e a c h   c a l l   o f   t h e   s a m e   m a s t e r   s e q u e n t i a l  
                                                         i n t e r f a c e .  
                                                         U s a g e   c a n ,   t r a n s f e r   s e v e r a l   b y t e s   o n e   b y   o n e   w i t h   a   r e s t a r t   w i t h   s l a v e   a d d r e s s   b e t w e e n   e a c h   b y t e s   u s i n g   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( o p t i o n   I 2 C _ F I R S T _ F R A M E   t h e n   I 2 C _ O T H E R _ F R A M E )  
                                                             o r   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T ( o p t i o n   I 2 C _ F I R S T _ F R A M E   t h e n   I 2 C _ O T H E R _ F R A M E )  
                                                             o r   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( o p t i o n   I 2 C _ F I R S T _ F R A M E   t h e n   I 2 C _ O T H E R _ F R A M E )  
                                                             o r   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A ( o p t i o n   I 2 C _ F I R S T _ F R A M E   t h e n   I 2 C _ O T H E R _ F R A M E ) .  
                                                         T h e n   u s a g e   o f   t h i s   o p t i o n   I 2 C _ O T H E R _ A N D _ L A S T _ F R A M E   a t   t h e   l a s t   f r a m e   t o   h e l p   a u t o m a t i c   g e n e r a t i o n   o f   S T O P   c o n d i t i o n .  
  
             ( + )   D i f f e r e n t   s e q u e n t i a l   I 2 C   i n t e r f a c e s   a r e   l i s t e d   b e l o w :  
             ( + + )   S e q u e n t i a l   t r a n s m i t   i n   m a s t e r   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( )  
                         o r   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( )  
             ( + + + )   A t   t r a n s m i s s i o n   e n d   o f   c u r r e n t   f r a m e   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )  
             ( + + )   S e q u e n t i a l   r e c e i v e   i n   m a s t e r   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T ( )  
                         o r   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A ( )  
             ( + + + )   A t   r e c e p t i o n   e n d   o f   c u r r e n t   f r a m e   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )  
             ( + + )   A b o r t   a   m a s t e r   I T   o r   D M A   I 2 C   p r o c e s s   c o m m u n i c a t i o n   w i t h   I n t e r r u p t   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ A b o r t _ I T ( )  
             ( + + + )   E n d   o f   a b o r t   p r o c e s s ,   @ r e f   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )  
             ( + + )   E n a b l e / d i s a b l e   t h e   A d d r e s s   l i s t e n   m o d e   i n   s l a v e   I 2 C   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ E n a b l e L i s t e n _ I T ( )   @ r e f   H A L _ I 2 C _ D i s a b l e L i s t e n _ I T ( )  
             ( + + + )   W h e n   a d d r e s s   s l a v e   I 2 C   m a t c h ,   @ r e f   H A L _ I 2 C _ A d d r C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   t o   c h e c k   t h e   A d d r e s s   M a t c h   C o d e   a n d   t h e   t r a n s m i s s i o n   d i r e c t i o n   r e q u e s t   b y   m a s t e r   ( W r i t e / R e a d ) .  
             ( + + + )   A t   L i s t e n   m o d e   e n d   @ r e f   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( )  
             ( + + )   S e q u e n t i a l   t r a n s m i t   i n   s l a v e   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ I T ( )  
                         o r   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ D M A ( )  
             ( + + + )   A t   t r a n s m i s s i o n   e n d   o f   c u r r e n t   f r a m e   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )  
             ( + + )   S e q u e n t i a l   r e c e i v e   i n   s l a v e   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ I T ( )  
                         o r   u s i n g   @ r e f   H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ D M A ( )  
             ( + + + )   A t   r e c e p t i o n   e n d   o f   c u r r e n t   f r a m e   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )  
             ( + + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )  
  
         * * *   I n t e r r u p t   m o d e   I O   M E M   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   W r i t e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t   t o   a   s p e c i f i c   m e m o r y   a d d r e s s   u s i n g  
                     @ r e f   H A L _ I 2 C _ M e m _ W r i t e _ I T ( )  
             ( + )   A t   M e m o r y   e n d   o f   w r i t e   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( )  
             ( + )   R e a d   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t   f r o m   a   s p e c i f i c   m e m o r y   a d d r e s s   u s i n g  
                     @ r e f   H A L _ I 2 C _ M e m _ R e a d _ I T ( )  
             ( + )   A t   M e m o r y   e n d   o f   r e a d   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( )  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )  
  
         * * *   D M A   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   T r a n s m i t   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   ( D M A )   u s i n g  
                     @ r e f   H A L _ I 2 C _ M a s t e r _ T r a n s m i t _ D M A ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )  
             ( + )   R e c e i v e   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   ( D M A )   u s i n g  
                     @ r e f   H A L _ I 2 C _ M a s t e r _ R e c e i v e _ D M A ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )  
             ( + )   T r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   ( D M A )   u s i n g  
                     @ r e f   H A L _ I 2 C _ S l a v e _ T r a n s m i t _ D M A ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )  
             ( + )   R e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   ( D M A )   u s i n g  
                     @ r e f   H A L _ I 2 C _ S l a v e _ R e c e i v e _ D M A ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )  
             ( + )   A b o r t   a   m a s t e r   I 2 C   p r o c e s s   c o m m u n i c a t i o n   w i t h   I n t e r r u p t   u s i n g   @ r e f   H A L _ I 2 C _ M a s t e r _ A b o r t _ I T ( )  
             ( + )   E n d   o f   a b o r t   p r o c e s s ,   @ r e f   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )  
  
         * * *   D M A   m o d e   I O   M E M   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   W r i t e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A   t o   a   s p e c i f i c   m e m o r y   a d d r e s s   u s i n g  
                     @ r e f   H A L _ I 2 C _ M e m _ W r i t e _ D M A ( )  
             ( + )   A t   M e m o r y   e n d   o f   w r i t e   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( )  
             ( + )   R e a d   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A   f r o m   a   s p e c i f i c   m e m o r y   a d d r e s s   u s i n g  
                     @ r e f   H A L _ I 2 C _ M e m _ R e a d _ D M A ( )  
             ( + )   A t   M e m o r y   e n d   o f   r e a d   t r a n s f e r ,   @ r e f   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( )   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( )  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   @ r e f   H A L _ I 2 C _ E r r o r C a l l b a c k ( )  
  
  
           * * *   I 2 C   H A L   d r i v e r   m a c r o s   l i s t   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   I 2 C   H A L   d r i v e r .  
  
             ( + )   @ r e f   _ _ H A L _ I 2 C _ E N A B L E :           E n a b l e   t h e   I 2 C   p e r i p h e r a l  
             ( + )   @ r e f   _ _ H A L _ I 2 C _ D I S A B L E :         D i s a b l e   t h e   I 2 C   p e r i p h e r a l  
             ( + )   @ r e f   _ _ H A L _ I 2 C _ G E T _ F L A G :       C h e c k s   w h e t h e r   t h e   s p e c i f i e d   I 2 C   f l a g   i s   s e t   o r   n o t  
             ( + )   @ r e f   _ _ H A L _ I 2 C _ C L E A R _ F L A G :   C l e a r   t h e   s p e c i f i e d   I 2 C   p e n d i n g   f l a g  
             ( + )   @ r e f   _ _ H A L _ I 2 C _ E N A B L E _ I T :     E n a b l e   t h e   s p e c i f i e d   I 2 C   i n t e r r u p t  
             ( + )   @ r e f   _ _ H A L _ I 2 C _ D I S A B L E _ I T :   D i s a b l e   t h e   s p e c i f i e d   I 2 C   i n t e r r u p t  
  
           * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
           T h e   c o m p i l a t i o n   f l a g   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
           a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
           U s e   F u n c t i o n s   @ r e f   H A L _ I 2 C _ R e g i s t e r C a l l b a c k ( )   o r   @ r e f   H A L _ I 2 C _ R e g i s t e r A d d r C a l l b a c k ( )  
           t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
         [ . . ]  
           F u n c t i o n   @ r e f   H A L _ I 2 C _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
               ( + )   M a s t e r T x C p l t C a l l b a c k   :   c a l l b a c k   f o r   M a s t e r   t r a n s m i s s i o n   e n d   o f   t r a n s f e r .  
               ( + )   M a s t e r R x C p l t C a l l b a c k   :   c a l l b a c k   f o r   M a s t e r   r e c e p t i o n   e n d   o f   t r a n s f e r .  
               ( + )   S l a v e T x C p l t C a l l b a c k     :   c a l l b a c k   f o r   S l a v e   t r a n s m i s s i o n   e n d   o f   t r a n s f e r .  
               ( + )   S l a v e R x C p l t C a l l b a c k     :   c a l l b a c k   f o r   S l a v e   r e c e p t i o n   e n d   o f   t r a n s f e r .  
               ( + )   L i s t e n C p l t C a l l b a c k       :   c a l l b a c k   f o r   e n d   o f   l i s t e n   m o d e .  
               ( + )   M e m T x C p l t C a l l b a c k         :   c a l l b a c k   f o r   M e m o r y   t r a n s m i s s i o n   e n d   o f   t r a n s f e r .  
               ( + )   M e m R x C p l t C a l l b a c k         :   c a l l b a c k   f o r   M e m o r y   r e c e p t i o n   e n d   o f   t r a n s f e r .  
               ( + )   E r r o r C a l l b a c k                 :   c a l l b a c k   f o r   e r r o r   d e t e c t i o n .  
               ( + )   A b o r t C p l t C a l l b a c k         :   c a l l b a c k   f o r   a b o r t   c o m p l e t i o n   p r o c e s s .  
               ( + )   M s p I n i t C a l l b a c k             :   c a l l b a c k   f o r   M s p   I n i t .  
               ( + )   M s p D e I n i t C a l l b a c k         :   c a l l b a c k   f o r   M s p   D e I n i t .  
           T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
           a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
         [ . . ]  
           F o r   s p e c i f i c   c a l l b a c k   A d d r C a l l b a c k   u s e   d e d i c a t e d   r e g i s t e r   c a l l b a c k s   :   @ r e f   H A L _ I 2 C _ R e g i s t e r A d d r C a l l b a c k ( ) .  
         [ . . ]  
           U s e   f u n c t i o n   @ r e f   H A L _ I 2 C _ U n R e g i s t e r C a l l b a c k   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
           w e a k   f u n c t i o n .  
           @ r e f   H A L _ I 2 C _ U n R e g i s t e r C a l l b a c k   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
           a n d   t h e   C a l l b a c k   I D .  
           T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
               ( + )   M a s t e r T x C p l t C a l l b a c k   :   c a l l b a c k   f o r   M a s t e r   t r a n s m i s s i o n   e n d   o f   t r a n s f e r .  
               ( + )   M a s t e r R x C p l t C a l l b a c k   :   c a l l b a c k   f o r   M a s t e r   r e c e p t i o n   e n d   o f   t r a n s f e r .  
               ( + )   S l a v e T x C p l t C a l l b a c k     :   c a l l b a c k   f o r   S l a v e   t r a n s m i s s i o n   e n d   o f   t r a n s f e r .  
               ( + )   S l a v e R x C p l t C a l l b a c k     :   c a l l b a c k   f o r   S l a v e   r e c e p t i o n   e n d   o f   t r a n s f e r .  
               ( + )   L i s t e n C p l t C a l l b a c k       :   c a l l b a c k   f o r   e n d   o f   l i s t e n   m o d e .  
               ( + )   M e m T x C p l t C a l l b a c k         :   c a l l b a c k   f o r   M e m o r y   t r a n s m i s s i o n   e n d   o f   t r a n s f e r .  
               ( + )   M e m R x C p l t C a l l b a c k         :   c a l l b a c k   f o r   M e m o r y   r e c e p t i o n   e n d   o f   t r a n s f e r .  
               ( + )   E r r o r C a l l b a c k                 :   c a l l b a c k   f o r   e r r o r   d e t e c t i o n .  
               ( + )   A b o r t C p l t C a l l b a c k         :   c a l l b a c k   f o r   a b o r t   c o m p l e t i o n   p r o c e s s .  
               ( + )   M s p I n i t C a l l b a c k             :   c a l l b a c k   f o r   M s p   I n i t .  
               ( + )   M s p D e I n i t C a l l b a c k         :   c a l l b a c k   f o r   M s p   D e I n i t .  
         [ . . ]  
           F o r   c a l l b a c k   A d d r C a l l b a c k   u s e   d e d i c a t e d   r e g i s t e r   c a l l b a c k s   :   @ r e f   H A L _ I 2 C _ U n R e g i s t e r A d d r C a l l b a c k ( ) .  
         [ . . ]  
           B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ I 2 C _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   @ r e f   H A L _ I 2 C _ S T A T E _ R E S E T  
           a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s :  
           e x a m p l e s   @ r e f   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( ) ,   @ r e f   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( ) .  
           E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e  
           r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n s   i n   t h e   @ r e f   H A L _ I 2 C _ I n i t ( ) /   @ r e f   H A L _ I 2 C _ D e I n i t ( )   o n l y   w h e n  
           t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
           I f   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ I 2 C _ I n i t ( ) /   @ r e f   H A L _ I 2 C _ D e I n i t ( )  
           k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )   w h a t e v e r   t h e   s t a t e .  
         [ . . ]  
           C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   @ r e f   H A L _ I 2 C _ S T A T E _ R E A D Y   s t a t e   o n l y .  
           E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   f u n c t i o n s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
           i n   @ r e f   H A L _ I 2 C _ S T A T E _ R E A D Y   o r   @ r e f   H A L _ I 2 C _ S T A T E _ R E S E T   s t a t e ,  
           t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
           T h e n ,   t h e   u s e r   f i r s t   r e g i s t e r s   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
           u s i n g   @ r e f   H A L _ I 2 C _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ I 2 C _ D e I n i t ( )  
           o r   @ r e f   H A L _ I 2 C _ I n i t ( )   f u n c t i o n .  
         [ . . ]  
           W h e n   t h e   c o m p i l a t i o n   f l a g   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
           n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s  
           a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s .  
  
  
           * * *   I 2 C   W o r k a r o u n d s   l i n k e d   t o   S i l i c o n   L i m i t a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               B e l o w   t h e   l i s t   o f   a l l   s i l i c o n   l i m i t a t i o n s   i m p l e m e n t e d   f o r   H A L   o n   S T M 3 2 F 1 x x   p r o d u c t .  
               ( @ )   S e e   E r r a t a S h e e t   t o   k n o w   f u l l   s i l i c o n   l i m i t a t i o n   l i s t   o f   y o u r   p r o d u c t .  
  
               ( + )   W o r k a r o u n d s   I m p l e m e n t e d   i n s i d e   I 2 C   H A L   D r i v e r  
                     ( + + )   W r o n g   d a t a   r e a d   i n t o   d a t a   r e g i s t e r   ( P o l l i n g   a n d   I n t e r r u p t   m o d e )  
                     ( + + )   S t a r t   c a n n o t   b e   g e n e r a t e d   a f t e r   a   m i s p l a c e d   S t o p  
                     ( + + )   S o m e   s o f t w a r e   e v e n t s   m u s t   b e   m a n a g e d   b e f o r e   t h e   c u r r e n t   b y t e   i s   b e i n g   t r a n s f e r r e d :  
                               W o r k a r o u n d :   U s e   D M A   i n   g e n e r a l ,   e x c e p t   w h e n   t h e   M a s t e r   i s   r e c e i v i n g   a   s i n g l e   b y t e .  
                               F o r   I n t e r u p t   m o d e ,   I 2 C   s h o u l d   h a v e   t h e   h i g h e s t   p r i o r i t y   i n   t h e   a p p l i c a t i o n .  
                     ( + + )   M i s m a t c h   o n   t h e   " S e t u p   t i m e   f o r   a   r e p e a t e d   S t a r t   c o n d i t i o n "   t i m i n g   p a r a m e t e r :  
                               W o r k a r o u n d :   R e d u c e   t h e   f r e q u e n c y   d o w n   t o   8 8   k H z   o r   u s e   t h e   I 2 C   F a s t - m o d e   i f  
                               s u p p o r t e d   b y   t h e   s l a v e .  
                     ( + + )   D a t a   v a l i d   t i m e   ( t V D ; D A T )   v i o l a t e d   w i t h o u t   t h e   O V R   f l a g   b e i n g   s e t :  
                               W o r k a r o u n d :   I f   t h e   s l a v e   d e v i c e   a l l o w s   i t ,   u s e   t h e   c l o c k   s t r e t c h i n g   m e c h a n i s m  
                               b y   p r o g r a m m i n g   N o S t r e t c h M o d e   =   I 2 C _ N O S T R E T C H _ D I S A B L E   i n   @ r e f   H A L _ I 2 C _ I n i t .  
  
           [ . . ]  
               ( @ )   Y o u   c a n   r e f e r   t o   t h e   I 2 C   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
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
 / * *   @ d e f g r o u p   I 2 C   I 2 C  
     *   @ b r i e f   I 2 C   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ I 2 C _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   I 2 C _ P r i v a t e _ D e f i n e  
     *   @ {  
     * /  
 # d e f i n e   I 2 C _ T I M E O U T _ F L A G                     3 5 U                   / * ! <   T i m e o u t   3 5   m s                           * /  
 # d e f i n e   I 2 C _ T I M E O U T _ B U S Y _ F L A G           2 5 U                   / * ! <   T i m e o u t   2 5   m s                           * /  
 # d e f i n e   I 2 C _ T I M E O U T _ S T O P _ F L A G           5 U                     / * ! <   T i m e o u t   5   m s                             * /  
 # d e f i n e   I 2 C _ N O _ O P T I O N _ F R A M E               0 x F F F F 0 0 0 0 U   / * ! <   X f e r O p t i o n s   d e f a u l t   v a l u e   * /  
  
 / *   P r i v a t e   d e f i n e   f o r   @ r e f   P r e v i o u s S t a t e   u s a g e   * /  
 # d e f i n e   I 2 C _ S T A T E _ M S K                           ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) ( ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ T X   |   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ R X )   &   ( u i n t 3 2 _ t ) ( ~ ( ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ R E A D Y ) ) ) )   / * ! <   M a s k   S t a t e   d e f i n e ,   k e e p   o n l y   R X   a n d   T X   b i t s                         * /  
 # d e f i n e   I 2 C _ S T A T E _ N O N E                         ( ( u i n t 3 2 _ t ) ( H A L _ I 2 C _ M O D E _ N O N E ) )                                                                                                                 / * ! <   D e f a u l t   V a l u e                                                                                     * /  
 # d e f i n e   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X     ( ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ T X   &   I 2 C _ S T A T E _ M S K )   |   ( u i n t 3 2 _ t ) H A L _ I 2 C _ M O D E _ M A S T E R ) )                         / * ! <   M a s t e r   B u s y   T X ,   c o m b i n a i s o n   o f   S t a t e   L S B   a n d   M o d e   e n u m   * /  
 # d e f i n e   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X     ( ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ R X   &   I 2 C _ S T A T E _ M S K )   |   ( u i n t 3 2 _ t ) H A L _ I 2 C _ M O D E _ M A S T E R ) )                         / * ! <   M a s t e r   B u s y   R X ,   c o m b i n a i s o n   o f   S t a t e   L S B   a n d   M o d e   e n u m   * /  
 # d e f i n e   I 2 C _ S T A T E _ S L A V E _ B U S Y _ T X       ( ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ T X   &   I 2 C _ S T A T E _ M S K )   |   ( u i n t 3 2 _ t ) H A L _ I 2 C _ M O D E _ S L A V E ) )                           / * ! <   S l a v e   B u s y   T X ,   c o m b i n a i s o n   o f   S t a t e   L S B   a n d   M o d e   e n u m     * /  
 # d e f i n e   I 2 C _ S T A T E _ S L A V E _ B U S Y _ R X       ( ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ R X   &   I 2 C _ S T A T E _ M S K )   |   ( u i n t 3 2 _ t ) H A L _ I 2 C _ M O D E _ S L A V E ) )                           / * ! <   S l a v e   B u s y   R X ,   c o m b i n a i s o n   o f   S t a t e   L S B   a n d   M o d e   e n u m     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   I 2 C _ P r i v a t e _ F u n c t i o n s   I 2 C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 / *   P r i v a t e   f u n c t i o n s   t o   h a n d l e   D M A   t r a n s f e r   * /  
 s t a t i c   v o i d   I 2 C _ D M A X f e r C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I 2 C _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I 2 C _ D M A A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
  
 s t a t i c   v o i d   I 2 C _ I T E r r o r ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ M a s t e r R e q u e s t W r i t e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ M a s t e r R e q u e s t R e a d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ R e q u e s t M e m o r y W r i t e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ R e q u e s t M e m o r y R e a d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
  
 / *   P r i v a t e   f u n c t i o n s   t o   h a n d l e   f l a g s   d u r i n g   p o l l i n g   t r a n s f e r   * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   F l a g ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n B T F F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n S T O P F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n S T O P R e q u e s t T h r o u g h I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ I s A c k n o w l e d g e F a i l e d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
  
 / *   P r i v a t e   f u n c t i o n s   f o r   I 2 C   t r a n s f e r   I R Q   h a n d l e r   * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r T r a n s m i t _ T X E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ M a s t e r T r a n s m i t _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ M a s t e r R e c e i v e _ R X N E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ M a s t e r R e c e i v e _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ M a s t e r _ S B ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ M a s t e r _ A D D 1 0 ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ M a s t e r _ A D D R ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
  
 s t a t i c   v o i d   I 2 C _ S l a v e T r a n s m i t _ T X E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ S l a v e T r a n s m i t _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ S l a v e R e c e i v e _ R X N E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ S l a v e R e c e i v e _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ S l a v e _ A D D R ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   I T 2 F l a g s ) ;  
 s t a t i c   v o i d   I 2 C _ S l a v e _ S T O P F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 s t a t i c   v o i d   I 2 C _ S l a v e _ A F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
  
 s t a t i c   v o i d   I 2 C _ M e m o r y T r a n s m i t _ T X E _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
  
 / *   P r i v a t e   f u n c t i o n   t o   C o n v e r t   S p e c i f i c   o p t i o n s   * /  
 s t a t i c   v o i d   I 2 C _ C o n v e r t O t h e r X f e r O p t i o n s ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   I 2 C _ E x p o r t e d _ F u n c t i o n s   I 2 C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I 2 C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   a n d  
                     d e i n i t i a l i z e   t h e   I 2 C x   p e r i p h e r a l :  
  
             ( + )   U s e r   m u s t   I m p l e m e n t   H A L _ I 2 C _ M s p I n i t ( )   f u n c t i o n   i n   w h i c h   h e   c o n f i g u r e s  
                     a l l   r e l a t e d   p e r i p h e r a l s   r e s o u r c e s   ( C L O C K ,   G P I O ,   D M A ,   I T   a n d   N V I C ) .  
  
             ( + )   C a l l   t h e   f u n c t i o n   H A L _ I 2 C _ I n i t ( )   t o   c o n f i g u r e   t h e   s e l e c t e d   d e v i c e   w i t h  
                     t h e   s e l e c t e d   c o n f i g u r a t i o n :  
                 ( + + )   C o m m u n i c a t i o n   S p e e d  
                 ( + + )   D u t y   c y c l e  
                 ( + + )   A d d r e s s i n g   m o d e  
                 ( + + )   O w n   A d d r e s s   1  
                 ( + + )   D u a l   A d d r e s s i n g   m o d e  
                 ( + + )   O w n   A d d r e s s   2  
                 ( + + )   G e n e r a l   c a l l   m o d e  
                 ( + + )   N o s t r e t c h   m o d e  
  
             ( + )   C a l l   t h e   f u n c t i o n   H A L _ I 2 C _ D e I n i t ( )   t o   r e s t o r e   t h e   d e f a u l t   c o n f i g u r a t i o n  
                     o f   t h e   s e l e c t e d   I 2 C x   p e r i p h e r a l .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   I 2 C   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s  
     *                   i n   t h e   I 2 C _ I n i t T y p e D e f   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ I n i t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     u i n t 3 2 _ t   f r e q r a n g e ;  
     u i n t 3 2 _ t   p c l k 1 ;  
  
     / *   C h e c k   t h e   I 2 C   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i 2 c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ A L L _ I N S T A N C E ( h i 2 c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ C L O C K _ S P E E D ( h i 2 c - > I n i t . C l o c k S p e e d ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ D U T Y _ C Y C L E ( h i 2 c - > I n i t . D u t y C y c l e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ O W N _ A D D R E S S 1 ( h i 2 c - > I n i t . O w n A d d r e s s 1 ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ A D D R E S S I N G _ M O D E ( h i 2 c - > I n i t . A d d r e s s i n g M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ D U A L _ A D D R E S S ( h i 2 c - > I n i t . D u a l A d d r e s s M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ O W N _ A D D R E S S 2 ( h i 2 c - > I n i t . O w n A d d r e s s 2 ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ G E N E R A L _ C A L L ( h i 2 c - > I n i t . G e n e r a l C a l l M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I 2 C _ N O _ S T R E T C H ( h i 2 c - > I n i t . N o S t r e t c h M o d e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h i 2 c - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   I n i t   t h e   I 2 C   C a l l b a c k   s e t t i n g s   * /  
         h i 2 c - > M a s t e r T x C p l t C a l l b a c k   =   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   M a s t e r T x C p l t C a l l b a c k   * /  
         h i 2 c - > M a s t e r R x C p l t C a l l b a c k   =   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   M a s t e r R x C p l t C a l l b a c k   * /  
         h i 2 c - > S l a v e T x C p l t C a l l b a c k     =   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ;     / *   L e g a c y   w e a k   S l a v e T x C p l t C a l l b a c k     * /  
         h i 2 c - > S l a v e R x C p l t C a l l b a c k     =   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ;     / *   L e g a c y   w e a k   S l a v e R x C p l t C a l l b a c k     * /  
         h i 2 c - > L i s t e n C p l t C a l l b a c k       =   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ;       / *   L e g a c y   w e a k   L i s t e n C p l t C a l l b a c k       * /  
         h i 2 c - > M e m T x C p l t C a l l b a c k         =   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ;         / *   L e g a c y   w e a k   M e m T x C p l t C a l l b a c k         * /  
         h i 2 c - > M e m R x C p l t C a l l b a c k         =   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ;         / *   L e g a c y   w e a k   M e m R x C p l t C a l l b a c k         * /  
         h i 2 c - > E r r o r C a l l b a c k                 =   H A L _ I 2 C _ E r r o r C a l l b a c k ;                 / *   L e g a c y   w e a k   E r r o r C a l l b a c k                 * /  
         h i 2 c - > A b o r t C p l t C a l l b a c k         =   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ;         / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k         * /  
         h i 2 c - > A d d r C a l l b a c k                   =   H A L _ I 2 C _ A d d r C a l l b a c k ;                   / *   L e g a c y   w e a k   A d d r C a l l b a c k                   * /  
  
         i f   ( h i 2 c - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h i 2 c - > M s p I n i t C a l l b a c k   =   H A L _ I 2 C _ M s p I n i t ;   / *   L e g a c y   w e a k   M s p I n i t     * /  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * /  
         h i 2 c - > M s p I n i t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * /  
         H A L _ I 2 C _ M s p I n i t ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   s e l e c t e d   I 2 C   p e r i p h e r a l   * /  
     _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
     / * R e s e t   I 2 C * /  
     h i 2 c - > I n s t a n c e - > C R 1   | =   I 2 C _ C R 1 _ S W R S T ;  
     h i 2 c - > I n s t a n c e - > C R 1   & =   ~ I 2 C _ C R 1 _ S W R S T ;  
  
     / *   G e t   P C L K 1   f r e q u e n c y   * /  
     p c l k 1   =   H A L _ R C C _ G e t P C L K 1 F r e q ( ) ;  
  
     / *   C h e c k   t h e   m i n i m u m   a l l o w e d   P C L K 1   f r e q u e n c y   * /  
     i f   ( I 2 C _ M I N _ P C L K _ F R E Q ( p c l k 1 ,   h i 2 c - > I n i t . C l o c k S p e e d )   = =   1 U )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C a l c u l a t e   f r e q u e n c y   r a n g e   * /  
     f r e q r a n g e   =   I 2 C _ F R E Q R A N G E ( p c l k 1 ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 C x   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C o n f i g u r e   I 2 C x :   F r e q u e n c y   r a n g e   * /  
     M O D I F Y _ R E G ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ F R E Q ,   f r e q r a n g e ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 C x   T R I S E   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
     / *   C o n f i g u r e   I 2 C x :   R i s e   T i m e   * /  
     M O D I F Y _ R E G ( h i 2 c - > I n s t a n c e - > T R I S E ,   I 2 C _ T R I S E _ T R I S E ,   I 2 C _ R I S E _ T I M E ( f r e q r a n g e ,   h i 2 c - > I n i t . C l o c k S p e e d ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 C x   C C R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C o n f i g u r e   I 2 C x :   S p e e d   * /  
     M O D I F Y _ R E G ( h i 2 c - > I n s t a n c e - > C C R ,   ( I 2 C _ C C R _ F S   |   I 2 C _ C C R _ D U T Y   |   I 2 C _ C C R _ C C R ) ,   I 2 C _ S P E E D ( p c l k 1 ,   h i 2 c - > I n i t . C l o c k S p e e d ,   h i 2 c - > I n i t . D u t y C y c l e ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 C x   C R 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C o n f i g u r e   I 2 C x :   G e n e r a l c a l l   a n d   N o S t r e t c h   m o d e   * /  
     M O D I F Y _ R E G ( h i 2 c - > I n s t a n c e - > C R 1 ,   ( I 2 C _ C R 1 _ E N G C   |   I 2 C _ C R 1 _ N O S T R E T C H ) ,   ( h i 2 c - > I n i t . G e n e r a l C a l l M o d e   |   h i 2 c - > I n i t . N o S t r e t c h M o d e ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 C x   O A R 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C o n f i g u r e   I 2 C x :   O w n   A d d r e s s 1   a n d   a d d r e s s i n g   m o d e   * /  
     M O D I F Y _ R E G ( h i 2 c - > I n s t a n c e - > O A R 1 ,   ( I 2 C _ O A R 1 _ A D D M O D E   |   I 2 C _ O A R 1 _ A D D 8 _ 9   |   I 2 C _ O A R 1 _ A D D 1 _ 7   |   I 2 C _ O A R 1 _ A D D 0 ) ,   ( h i 2 c - > I n i t . A d d r e s s i n g M o d e   |   h i 2 c - > I n i t . O w n A d d r e s s 1 ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 C x   O A R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C o n f i g u r e   I 2 C x :   D u a l   m o d e   a n d   O w n   A d d r e s s 2   * /  
     M O D I F Y _ R E G ( h i 2 c - > I n s t a n c e - > O A R 2 ,   ( I 2 C _ O A R 2 _ E N D U A L   |   I 2 C _ O A R 2 _ A D D 2 ) ,   ( h i 2 c - > I n i t . D u a l A d d r e s s M o d e   |   h i 2 c - > I n i t . O w n A d d r e s s 2 ) ) ;  
  
     / *   E n a b l e   t h e   s e l e c t e d   I 2 C   p e r i p h e r a l   * /  
     _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
  
     h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
     h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
     h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
     h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   I 2 C   p e r i p h e r a l .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ D e I n i t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   C h e c k   t h e   I 2 C   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i 2 c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ A L L _ I N S T A N C E ( h i 2 c - > I n s t a n c e ) ) ;  
  
     h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   I 2 C   P e r i p h e r a l   C l o c k   * /  
     _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h i 2 c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h i 2 c - > M s p D e I n i t C a l l b a c k   =   H A L _ I 2 C _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t     * /  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   * /  
     h i 2 c - > M s p D e I n i t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   * /  
     H A L _ I 2 C _ M s p D e I n i t ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h i 2 c - > E r r o r C o d e           =   H A L _ I 2 C _ E R R O R _ N O N E ;  
     h i 2 c - > S t a t e                   =   H A L _ I 2 C _ S T A T E _ R E S E T ;  
     h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
     h i 2 c - > M o d e                     =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   I 2 C   M S P .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ M s p I n i t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   I 2 C   M S P .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ M s p D e I n i t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   I 2 C   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M A S T E R _ T X _ C O M P L E T E _ C B _ I D   M a s t e r   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M A S T E R _ R X _ C O M P L E T E _ C B _ I D   M a s t e r   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ S L A V E _ T X _ C O M P L E T E _ C B _ I D   S l a v e   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ S L A V E _ R X _ C O M P L E T E _ C B _ I D   S l a v e   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ L I S T E N _ C O M P L E T E _ C B _ I D   L i s t e n   C o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M E M _ T X _ C O M P L E T E _ C B _ I D   M e m o r y   T x   T r a n s f e r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M E M _ R X _ C O M P L E T E _ C B _ I D   M e m o r y   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ E R R O R _ C B _ I D   E r r o r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ A B O R T _ C B _ I D   A b o r t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ R e g i s t e r C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   H A L _ I 2 C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p I 2 C _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 c ) ;  
  
     i f   ( H A L _ I 2 C _ S T A T E _ R E A D Y   = =   h i 2 c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 C _ M A S T E R _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M a s t e r T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M A S T E R _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M a s t e r R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ S L A V E _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > S l a v e T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ S L A V E _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > S l a v e R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ L I S T E N _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > L i s t e n C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M E M _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M e m T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M E M _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M e m R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ E R R O R _ C B _ I D   :  
                 h i 2 c - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ A B O R T _ C B _ I D   :  
                 h i 2 c - > A b o r t C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M S P I N I T _ C B _ I D   :  
                 h i 2 c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ I 2 C _ S T A T E _ R E S E T   = =   h i 2 c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 C _ M S P I N I T _ C B _ I D   :  
                 h i 2 c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   I 2 C   C a l l b a c k  
     *                   I 2 C   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M A S T E R _ T X _ C O M P L E T E _ C B _ I D   M a s t e r   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M A S T E R _ R X _ C O M P L E T E _ C B _ I D   M a s t e r   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ S L A V E _ T X _ C O M P L E T E _ C B _ I D   S l a v e   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ S L A V E _ R X _ C O M P L E T E _ C B _ I D   S l a v e   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ L I S T E N _ C O M P L E T E _ C B _ I D   L i s t e n   C o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M E M _ T X _ C O M P L E T E _ C B _ I D   M e m o r y   T x   T r a n s f e r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M E M _ R X _ C O M P L E T E _ C B _ I D   M e m o r y   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ E R R O R _ C B _ I D   E r r o r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ A B O R T _ C B _ I D   A b o r t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ I 2 C _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ U n R e g i s t e r C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   H A L _ I 2 C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 c ) ;  
  
     i f   ( H A L _ I 2 C _ S T A T E _ R E A D Y   = =   h i 2 c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 C _ M A S T E R _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M a s t e r T x C p l t C a l l b a c k   =   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   M a s t e r T x C p l t C a l l b a c k   * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M A S T E R _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M a s t e r R x C p l t C a l l b a c k   =   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   M a s t e r R x C p l t C a l l b a c k   * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ S L A V E _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > S l a v e T x C p l t C a l l b a c k   =   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ;       / *   L e g a c y   w e a k   S l a v e T x C p l t C a l l b a c k     * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ S L A V E _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > S l a v e R x C p l t C a l l b a c k   =   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ;       / *   L e g a c y   w e a k   S l a v e R x C p l t C a l l b a c k     * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ L I S T E N _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > L i s t e n C p l t C a l l b a c k   =   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ;           / *   L e g a c y   w e a k   L i s t e n C p l t C a l l b a c k       * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M E M _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M e m T x C p l t C a l l b a c k   =   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ;               / *   L e g a c y   w e a k   M e m T x C p l t C a l l b a c k         * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M E M _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i 2 c - > M e m R x C p l t C a l l b a c k   =   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ;               / *   L e g a c y   w e a k   M e m R x C p l t C a l l b a c k         * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ E R R O R _ C B _ I D   :  
                 h i 2 c - > E r r o r C a l l b a c k   =   H A L _ I 2 C _ E r r o r C a l l b a c k ;                               / *   L e g a c y   w e a k   E r r o r C a l l b a c k                 * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ A B O R T _ C B _ I D   :  
                 h i 2 c - > A b o r t C p l t C a l l b a c k   =   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ;               / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k         * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M S P I N I T _ C B _ I D   :  
                 h i 2 c - > M s p I n i t C a l l b a c k   =   H A L _ I 2 C _ M s p I n i t ;                                       / *   L e g a c y   w e a k   M s p I n i t                             * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 c - > M s p D e I n i t C a l l b a c k   =   H A L _ I 2 C _ M s p D e I n i t ;                               / *   L e g a c y   w e a k   M s p D e I n i t                         * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ I 2 C _ S T A T E _ R E S E T   = =   h i 2 c - > S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I 2 C _ M S P I N I T _ C B _ I D   :  
                 h i 2 c - > M s p I n i t C a l l b a c k   =   H A L _ I 2 C _ M s p I n i t ;                                       / *   L e g a c y   w e a k   M s p I n i t                             * /  
                 b r e a k ;  
  
             c a s e   H A L _ I 2 C _ M S P D E I N I T _ C B _ I D   :  
                 h i 2 c - > M s p D e I n i t C a l l b a c k   =   H A L _ I 2 C _ M s p D e I n i t ;                               / *   L e g a c y   w e a k   M s p D e I n i t                         * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   t h e   S l a v e   A d d r e s s   M a t c h   I 2 C   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ I 2 C _ A d d r C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   A d d r e s s   M a t c h   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ R e g i s t e r A d d r C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   p I 2 C _ A d d r C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 c ) ;  
  
     i f   ( H A L _ I 2 C _ S T A T E _ R E A D Y   = =   h i 2 c - > S t a t e )  
     {  
         h i 2 c - > A d d r C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n R e g i s t e r   t h e   S l a v e   A d d r e s s   M a t c h   I 2 C   C a l l b a c k  
     *                   I n f o   R e a d y   I 2 C   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   H A L _ I 2 C _ A d d r C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ U n R e g i s t e r A d d r C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i 2 c ) ;  
  
     i f   ( H A L _ I 2 C _ S T A T E _ R E A D Y   = =   h i 2 c - > S t a t e )  
     {  
         h i 2 c - > A d d r C a l l b a c k   =   H A L _ I 2 C _ A d d r C a l l b a c k ;   / *   L e g a c y   w e a k   A d d r C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
   *     @ b r i e f       D a t a   t r a n s f e r s   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   I 2 C   d a t a  
         t r a n s f e r s .  
  
         ( # )   T h e r e   a r e   t w o   m o d e s   o f   t r a n s f e r :  
               ( + + )   B l o c k i n g   m o d e   :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   i n   t h e   p o l l i n g   m o d e .  
                         T h e   s t a t u s   o f   a l l   d a t a   p r o c e s s i n g   i s   r e t u r n e d   b y   t h e   s a m e   f u n c t i o n  
                         a f t e r   f i n i s h i n g   t r a n s f e r .  
               ( + + )   N o - B l o c k i n g   m o d e   :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   u s i n g   I n t e r r u p t s  
                         o r   D M A .   T h e s e   f u n c t i o n s   r e t u r n   t h e   s t a t u s   o f   t h e   t r a n s f e r   s t a r t u p .  
                         T h e   e n d   o f   t h e   d a t a   p r o c e s s i n g   w i l l   b e   i n d i c a t e d   t h r o u g h   t h e  
                         d e d i c a t e d   I 2 C   I R Q   w h e n   u s i n g   I n t e r r u p t   m o d e   o r   t h e   D M A   I R Q   w h e n  
                         u s i n g   D M A   m o d e .  
  
         ( # )   B l o c k i n g   m o d e   f u n c t i o n s   a r e   :  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ T r a n s m i t ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ R e c e i v e ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ T r a n s m i t ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ R e c e i v e ( )  
                 ( + + )   H A L _ I 2 C _ M e m _ W r i t e ( )  
                 ( + + )   H A L _ I 2 C _ M e m _ R e a d ( )  
                 ( + + )   H A L _ I 2 C _ I s D e v i c e R e a d y ( )  
  
         ( # )   N o - B l o c k i n g   m o d e   f u n c t i o n s   w i t h   I n t e r r u p t   a r e   :  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ R e c e i v e _ I T ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ R e c e i v e _ I T ( )  
                 ( + + )   H A L _ I 2 C _ M e m _ W r i t e _ I T ( )  
                 ( + + )   H A L _ I 2 C _ M e m _ R e a d _ I T ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ I T ( )  
                 ( + + )   H A L _ I 2 C _ E n a b l e L i s t e n _ I T ( )  
                 ( + + )   H A L _ I 2 C _ D i s a b l e L i s t e n _ I T ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ A b o r t _ I T ( )  
  
         ( # )   N o - B l o c k i n g   m o d e   f u n c t i o n s   w i t h   D M A   a r e   :  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ R e c e i v e _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ R e c e i v e _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ M e m _ W r i t e _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ M e m _ R e a d _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ D M A ( )  
  
         ( # )   A   s e t   o f   T r a n s f e r   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d   i n   n o n   B l o c k i n g   m o d e :  
                 ( + + )   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ A d d r C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ E r r o r C a l l b a c k ( )  
                 ( + + )   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( )  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     T r a n s m i t s   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ T r a n s m i t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ B U S Y ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e               =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e                 =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e       =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   S e n d   S l a v e   A d d r e s s   * /  
         i f   ( I 2 C _ M a s t e r R e q u e s t W r i t e ( h i 2 c ,   D e v A d d r e s s ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         w h i l e   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
                 {  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
                 }  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   W r i t e   d a t a   t o   D R   * /  
             h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
             h i 2 c - > X f e r S i z e - - ;  
  
             i f   ( ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )   & &   ( h i 2 c - > X f e r S i z e   ! =   0 U ) )  
             {  
                 / *   W r i t e   d a t a   t o   D R   * /  
                 h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r C o u n t - - ;  
                 h i 2 c - > X f e r S i z e - - ;  
             }  
  
             / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n B T F F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
                 {  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
                 }  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         / *   G e n e r a t e   S t o p   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     R e c e i v e s   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ R e c e i v e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ B U S Y ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e               =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e                 =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e       =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   S e n d   S l a v e   A d d r e s s   * /  
         i f   ( I 2 C _ M a s t e r R e q u e s t R e a d ( h i 2 c ,   D e v A d d r e s s ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f   ( h i 2 c - > X f e r S i z e   = =   0 U )  
         {  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
         e l s e   i f   ( h i 2 c - > X f e r S i z e   = =   1 U )  
         {  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
             s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
             _ _ d i s a b l e _ i r q ( ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
             / *   R e - e n a b l e   I R Q s   * /  
             _ _ e n a b l e _ i r q ( ) ;  
         }  
         e l s e   i f   ( h i 2 c - > X f e r S i z e   = =   2 U )  
         {  
             / *   E n a b l e   P o s   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
             / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
             s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
             _ _ d i s a b l e _ i r q ( ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   R e - e n a b l e   I R Q s   * /  
             _ _ e n a b l e _ i r q ( ) ;  
         }  
         e l s e  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
         }  
  
         w h i l e   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > X f e r S i z e   < =   3 U )  
             {  
                 / *   O n e   b y t e   * /  
                 i f   ( h i 2 c - > X f e r S i z e   = =   1 U )  
                 {  
                     / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   * /  
                     i f   ( I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                     {  
                         r e t u r n   H A L _ E R R O R ;  
                     }  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
                 / *   T w o   b y t e s   * /  
                 e l s e   i f   ( h i 2 c - > X f e r S i z e   = =   2 U )  
                 {  
                     / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
                     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B T F ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                     {  
                         r e t u r n   H A L _ E R R O R ;  
                     }  
  
                     / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
                           s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
                     _ _ d i s a b l e _ i r q ( ) ;  
  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
  
                     / *   R e - e n a b l e   I R Q s   * /  
                     _ _ e n a b l e _ i r q ( ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
                 / *   3   L a s t   b y t e s   * /  
                 e l s e  
                 {  
                     / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
                     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B T F ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                     {  
                         r e t u r n   H A L _ E R R O R ;  
                     }  
  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
                           s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
                     _ _ d i s a b l e _ i r q ( ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
  
                     / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
                     c o u n t   =   I 2 C _ T I M E O U T _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
                     d o  
                     {  
                         c o u n t - - ;  
                         i f   ( c o u n t   = =   0 U )  
                         {  
                             h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                             h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                             h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                             / *   R e - e n a b l e   I R Q s   * /  
                             _ _ e n a b l e _ i r q ( ) ;  
  
                             / *   P r o c e s s   U n l o c k e d   * /  
                             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                             r e t u r n   H A L _ E R R O R ;  
                         }  
                     }  
                     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   R E S E T ) ;  
  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
  
                     / *   R e - e n a b l e   I R Q s   * /  
                     _ _ e n a b l e _ i r q ( ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
             }  
             e l s e  
             {  
                 / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   * /  
                 i f   ( I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
  
                 / *   R e a d   d a t a   f r o m   D R   * /  
                 * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r S i z e - - ;  
                 h i 2 c - > X f e r C o u n t - - ;  
  
                 i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )  
                 {  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
             }  
         }  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     T r a n s m i t s   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ T r a n s m i t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e               =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e                 =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e       =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         / *   I f   1 0 b i t   a d d r e s s i n g   m o d e   i s   s e l e c t e d   * /  
         i f   ( h i 2 c - > I n i t . A d d r e s s i n g M o d e   = =   I 2 C _ A D D R E S S I N G M O D E _ 1 0 B I T )  
         {  
             / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
         }  
  
         w h i l e   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 / *   D i s a b l e   A d d r e s s   A c k n o w l e d g e   * /  
                 C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   W r i t e   d a t a   t o   D R   * /  
             h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
             h i 2 c - > X f e r S i z e - - ;  
  
             i f   ( ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )   & &   ( h i 2 c - > X f e r S i z e   ! =   0 U ) )  
             {  
                 / *   W r i t e   d a t a   t o   D R   * /  
                 h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r C o u n t - - ;  
                 h i 2 c - > X f e r S i z e - - ;  
             }  
         }  
  
         / *   W a i t   u n t i l   A F   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A F ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C l e a r   A F   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
         / *   D i s a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     R e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ R e c e i v e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   ( u i n t 1 6 _ t ) 0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e               =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e                 =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e       =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         w h i l e   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 / *   D i s a b l e   A d d r e s s   A c k n o w l e d g e   * /  
                 C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   R e a d   d a t a   f r o m   D R   * /  
             * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r S i z e - - ;  
             h i 2 c - > X f e r C o u n t - - ;  
  
             i f   ( ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )   & &   ( h i 2 c - > X f e r S i z e   ! =   0 U ) )  
             {  
                 / *   R e a d   d a t a   f r o m   D R   * /  
                 * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r S i z e - - ;  
                 h i 2 c - > X f e r C o u n t - - ;  
             }  
         }  
  
         / *   W a i t   u n t i l   S T O P   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n S T O P F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             / *   D i s a b l e   A d d r e s s   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C l e a r   S T O P   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ S T O P F L A G ( h i 2 c ) ;  
  
         / *   D i s a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     T r a n s m i t   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ T r a n s m i t _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                             p r o c e s s   u n l o c k   * /  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
         / *   G e n e r a t e   S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
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
     *   @ b r i e f     R e c e i v e   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ R e c e i v e _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
         t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
         p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
         / *   E n a b l e   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   G e n e r a t e   S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
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
     *   @ b r i e f     T r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ T r a n s m i t _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                             p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     R e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ R e c e i v e _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                             p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     T r a n s m i t   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ T r a n s m i t _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
                 h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
                 / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
                 h i 2 c - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
                 / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
                 h i 2 c - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
                 h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
                 / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
                 d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a t x ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   h i 2 c - > X f e r S i z e ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
             {  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                 t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                 p r o c e s s   u n l o c k   * /  
  
                 / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
                 / *   E n a b l e   D M A   R e q u e s t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
                 / *   E n a b l e   A c k n o w l e d g e   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 / *   G e n e r a t e   S t a r t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   G e n e r a t e   S t a r t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
  
             / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     R e c e i v e   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ R e c e i v e _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
                 h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
                 / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
                 h i 2 c - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
                 / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
                 h i 2 c - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
                 h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
                 / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
                 d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   h i 2 c - > X f e r S i z e ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
             {  
                 / *   E n a b l e   A c k n o w l e d g e   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 / *   G e n e r a t e   S t a r t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                 t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                 p r o c e s s   u n l o c k   * /  
  
                 / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
                 / *   E n a b l e   D M A   R e q u e s t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
  
             / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   G e n e r a t e   S t a r t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
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
     *   @ b r i e f     T r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ T r a n s m i t _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
             h i 2 c - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
             / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
             h i 2 c - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
             h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
             d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a t x ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   h i 2 c - > X f e r S i z e ) ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
         {  
             / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
             / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
             / *   E n a b l e   D M A   R e q u e s t   * /  
             h i 2 c - > I n s t a n c e - > C R 2   | =   I 2 C _ C R 2 _ D M A E N ;  
  
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ R e c e i v e _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
             h i 2 c - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
             / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
             h i 2 c - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
             h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
             d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   h i 2 c - > X f e r S i z e ) ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
         {  
             / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
             / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
             / *   E n a b l e   D M A   R e q u e s t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   t o   a   s p e c i f i c   m e m o r y   a d d r e s s  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M e m _ W r i t e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ M E M A D D _ S I Z E ( M e m A d d S i z e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ B U S Y ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M E M ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   S e n d   S l a v e   A d d r e s s   a n d   M e m o r y   A d d r e s s   * /  
         i f   ( I 2 C _ R e q u e s t M e m o r y W r i t e ( h i 2 c ,   D e v A d d r e s s ,   M e m A d d r e s s ,   M e m A d d S i z e ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         w h i l e   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
                 {  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
                 }  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   W r i t e   d a t a   t o   D R   * /  
             h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r S i z e - - ;  
             h i 2 c - > X f e r C o u n t - - ;  
  
             i f   ( ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )   & &   ( h i 2 c - > X f e r S i z e   ! =   0 U ) )  
             {  
                 / *   W r i t e   d a t a   t o   D R   * /  
                 h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r S i z e - - ;  
                 h i 2 c - > X f e r C o u n t - - ;  
             }  
         }  
  
         / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n B T F F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
             {  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
             }  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   G e n e r a t e   S t o p   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     R e a d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   f r o m   a   s p e c i f i c   m e m o r y   a d d r e s s  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M e m _ R e a d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ M E M A D D _ S I Z E ( M e m A d d S i z e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ B U S Y ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M E M ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   S e n d   S l a v e   A d d r e s s   a n d   M e m o r y   A d d r e s s   * /  
         i f   ( I 2 C _ R e q u e s t M e m o r y R e a d ( h i 2 c ,   D e v A d d r e s s ,   M e m A d d r e s s ,   M e m A d d S i z e ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f   ( h i 2 c - > X f e r S i z e   = =   0 U )  
         {  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
         e l s e   i f   ( h i 2 c - > X f e r S i z e   = =   1 U )  
         {  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
                   s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
             _ _ d i s a b l e _ i r q ( ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
             / *   R e - e n a b l e   I R Q s   * /  
             _ _ e n a b l e _ i r q ( ) ;  
         }  
         e l s e   i f   ( h i 2 c - > X f e r S i z e   = =   2 U )  
         {  
             / *   E n a b l e   P o s   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
             / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
                   s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
             _ _ d i s a b l e _ i r q ( ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   R e - e n a b l e   I R Q s   * /  
             _ _ e n a b l e _ i r q ( ) ;  
         }  
         e l s e  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
         }  
  
         w h i l e   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > X f e r S i z e   < =   3 U )  
             {  
                 / *   O n e   b y t e   * /  
                 i f   ( h i 2 c - > X f e r S i z e   = =   1 U )  
                 {  
                     / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   * /  
                     i f   ( I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                     {  
                         r e t u r n   H A L _ E R R O R ;  
                     }  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
                 / *   T w o   b y t e s   * /  
                 e l s e   i f   ( h i 2 c - > X f e r S i z e   = =   2 U )  
                 {  
                     / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
                     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B T F ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                     {  
                         r e t u r n   H A L _ E R R O R ;  
                     }  
  
                     / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
                           s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
                     _ _ d i s a b l e _ i r q ( ) ;  
  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
  
                     / *   R e - e n a b l e   I R Q s   * /  
                     _ _ e n a b l e _ i r q ( ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
                 / *   3   L a s t   b y t e s   * /  
                 e l s e  
                 {  
                     / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
                     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B T F ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                     {  
                         r e t u r n   H A L _ E R R O R ;  
                     }  
  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     / *   D i s a b l e   a l l   a c t i v e   I R Q s   a r o u n d   A D D R   c l e a r i n g   a n d   S T O P   p r o g r a m m i n g   b e c a u s e   t h e   E V 6 _ 3  
                           s o f t w a r e   s e q u e n c e   m u s t   c o m p l e t e   b e f o r e   t h e   c u r r e n t   b y t e   e n d   o f   t r a n s f e r   * /  
                     _ _ d i s a b l e _ i r q ( ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
  
                     / *   W a i t   u n t i l   B T F   f l a g   i s   s e t   * /  
                     c o u n t   =   I 2 C _ T I M E O U T _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
                     d o  
                     {  
                         c o u n t - - ;  
                         i f   ( c o u n t   = =   0 U )  
                         {  
                             h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                             h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                             h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                             / *   R e - e n a b l e   I R Q s   * /  
                             _ _ e n a b l e _ i r q ( ) ;  
  
                             / *   P r o c e s s   U n l o c k e d   * /  
                             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                             r e t u r n   H A L _ E R R O R ;  
                         }  
                     }  
                     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   R E S E T ) ;  
  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
  
                     / *   R e - e n a b l e   I R Q s   * /  
                     _ _ e n a b l e _ i r q ( ) ;  
  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
             }  
             e l s e  
             {  
                 / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   * /  
                 i f   ( I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
  
                 / *   R e a d   d a t a   f r o m   D R   * /  
                 * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r S i z e - - ;  
                 h i 2 c - > X f e r C o u n t - - ;  
  
                 i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )  
                 {  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
  
                     / *   U p d a t e   c o u n t e r   * /  
                     h i 2 c - > X f e r S i z e - - ;  
                     h i 2 c - > X f e r C o u n t - - ;  
                 }  
             }  
         }  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     W r i t e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t   t o   a   s p e c i f i c   m e m o r y   a d d r e s s  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M e m _ W r i t e _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ M E M A D D _ S I Z E ( M e m A d d S i z e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M E M ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
         h i 2 c - > M e m a d d r e s s     =   M e m A d d r e s s ;  
         h i 2 c - > M e m a d d S i z e     =   M e m A d d S i z e ;  
         h i 2 c - > E v e n t C o u n t     =   0 U ;  
  
         / *   G e n e r a t e   S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
         t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
         p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     R e a d   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t   f r o m   a   s p e c i f i c   m e m o r y   a d d r e s s  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M e m _ R e a d _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ M E M A D D _ S I Z E ( M e m A d d S i z e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M E M ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
         h i 2 c - > M e m a d d r e s s     =   M e m A d d r e s s ;  
         h i 2 c - > M e m a d d S i z e     =   M e m A d d S i z e ;  
         h i 2 c - > E v e n t C o u n t     =   0 U ;  
  
         / *   E n a b l e   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   G e n e r a t e   S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
  
             / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
         }  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A   t o   a   s p e c i f i c   m e m o r y   a d d r e s s  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M e m _ W r i t e _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ M E M A D D _ S I Z E ( M e m A d d S i z e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M E M ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
                 h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
                 / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
                 h i 2 c - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
                 / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
                 h i 2 c - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
                 h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
                 / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
                 d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a t x ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   h i 2 c - > X f e r S i z e ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
             {  
                 / *   S e n d   S l a v e   A d d r e s s   a n d   M e m o r y   A d d r e s s   * /  
                 i f   ( I 2 C _ R e q u e s t M e m o r y W r i t e ( h i 2 c ,   D e v A d d r e s s ,   M e m A d d r e s s ,   M e m A d d S i z e ,   I 2 C _ T I M E O U T _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
                 {  
                     / *   A b o r t   t h e   o n g o i n g   D M A   * /  
                     d m a x f e r s t a t u s   =   H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a t x ) ;  
  
                     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   a n d   M I S R A   w a r n i n g   * /  
                     U N U S E D ( d m a x f e r s t a t u s ) ;  
  
                     / *   S e t   t h e   u n u s e d   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   t o   N U L L   * /  
                     h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     h i 2 c - > X f e r S i z e   =   0 U ;  
                     h i 2 c - > X f e r C o u n t   =   0 U ;  
  
                     / *   D i s a b l e   I 2 C   p e r i p h e r a l   t o   p r e v e n t   d u m m y   d a t a   i n   b u f f e r   * /  
                     _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
  
                 / *   C l e a r   A D D R   f l a g   * /  
                 _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                 t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                 p r o c e s s   u n l o c k   * /  
                 / *   E n a b l e   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E R R ) ;  
  
                 / *   E n a b l e   D M A   R e q u e s t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
                 r e t u r n   H A L _ O K ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ S I Z E ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A   f r o m   a   s p e c i f i c   m e m o r y   a d d r e s s .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   r e a d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M e m _ R e a d _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ M E M A D D _ S I Z E ( M e m A d d S i z e ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
         d o  
         {  
             c o u n t - - ;  
             i f   ( c o u n t   = =   0 U )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M E M ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
                 h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
                 / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
                 h i 2 c - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
                 / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
                 h i 2 c - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
                 h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
                 / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
                 d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   h i 2 c - > X f e r S i z e ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
             {  
                 / *   S e n d   S l a v e   A d d r e s s   a n d   M e m o r y   A d d r e s s   * /  
                 i f   ( I 2 C _ R e q u e s t M e m o r y R e a d ( h i 2 c ,   D e v A d d r e s s ,   M e m A d d r e s s ,   M e m A d d S i z e ,   I 2 C _ T I M E O U T _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
                 {  
                     / *   A b o r t   t h e   o n g o i n g   D M A   * /  
                     d m a x f e r s t a t u s   =   H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a r x ) ;  
  
                     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   a n d   M I S R A   w a r n i n g   * /  
                     U N U S E D ( d m a x f e r s t a t u s ) ;  
  
                     / *   S e t   t h e   u n u s e d   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   t o   N U L L   * /  
                     h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     h i 2 c - > X f e r S i z e   =   0 U ;  
                     h i 2 c - > X f e r C o u n t   =   0 U ;  
  
                     / *   D i s a b l e   I 2 C   p e r i p h e r a l   t o   p r e v e n t   d u m m y   d a t a   i n   b u f f e r   * /  
                     _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
  
                 i f   ( h i 2 c - > X f e r S i z e   = =   1 U )  
                 {  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
                 }  
                 e l s e  
                 {  
                     / *   E n a b l e   L a s t   D M A   b i t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
                 }  
  
                 / *   C l e a r   A D D R   f l a g   * /  
                 _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                 t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                 p r o c e s s   u n l o c k   * /  
                 / *   E n a b l e   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E R R ) ;  
  
                 / *   E n a b l e   D M A   R e q u e s t   * /  
                 h i 2 c - > I n s t a n c e - > C R 2   | =   I 2 C _ C R 2 _ D M A E N ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   S e n d   S l a v e   A d d r e s s   a n d   M e m o r y   A d d r e s s   * /  
             i f   ( I 2 C _ R e q u e s t M e m o r y R e a d ( h i 2 c ,   D e v A d d r e s s ,   M e m A d d r e s s ,   M e m A d d S i z e ,   I 2 C _ T I M E O U T _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
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
     *   @ b r i e f     C h e c k s   i f   t a r g e t   d e v i c e   i s   r e a d y   f o r   c o m m u n i c a t i o n .  
     *   @ n o t e       T h i s   f u n c t i o n   i s   u s e d   w i t h   M e m o r y   d e v i c e s  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     T r i a l s   N u m b e r   o f   t r i a l s  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ I s D e v i c e R e a d y ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 3 2 _ t   T r i a l s ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   G e t   t i c k   * /  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
     u i n t 3 2 _ t   I 2 C _ T r i a l s   =   1 U ;  
     F l a g S t a t u s   t m p 1 ;  
     F l a g S t a t u s   t m p 2 ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ B U S Y ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ B U S Y ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         d o  
         {  
             / *   G e n e r a t e   S t a r t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
             / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
             i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   t i c k s t a r t )   ! =   H A L _ O K )  
             {  
                 i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
                 {  
                     h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
                 }  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
  
             / *   S e n d   s l a v e   a d d r e s s   * /  
             h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ W R I T E ( D e v A d d r e s s ) ;  
  
             / *   W a i t   u n t i l   A D D R   o r   A F   f l a g   a r e   s e t   * /  
             / *   G e t   t i c k   * /  
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
             t m p 1   =   _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A D D R ) ;  
             t m p 2   =   _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
             w h i l e   ( ( h i 2 c - > S t a t e   ! =   H A L _ I 2 C _ S T A T E _ T I M E O U T )   & &   ( t m p 1   = =   R E S E T )   & &   ( t m p 2   = =   R E S E T ) )  
             {  
                 i f   ( ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
                 {  
                     h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ T I M E O U T ;  
                 }  
                 t m p 1   =   _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A D D R ) ;  
                 t m p 2   =   _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
             }  
  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
             / *   C h e c k   i f   t h e   A D D R   f l a g   h a s   b e e n   s e t   * /  
             i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A D D R )   = =   S E T )  
             {  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                 / *   C l e a r   A D D R   F l a g   * /  
                 _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                 / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
                 i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ O K ;  
             }  
             e l s e  
             {  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                 / *   C l e a r   A F   F l a g   * /  
                 _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
                 / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
                 i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ B U S Y ,   S E T ,   I 2 C _ T I M E O U T _ B U S Y _ F L A G ,   t i c k s t a r t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
  
             / *   I n c r e m e n t   T r i a l s   * /  
             I 2 C _ T r i a l s + + ;  
         }  
         w h i l e   ( I 2 C _ T r i a l s   <   T r i a l s ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S e q u e n t i a l   t r a n s m i t   i n   m a s t e r   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t .  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     _ _ I O   u i n t 3 2 _ t   P r e v _ S t a t e   =   0 x 0 0 U ;  
     _ _ I O   u i n t 3 2 _ t   c o u n t             =   0 x 0 0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   C h e c k   B u s y   F l a g   o n l y   i f   F I R S T   c a l l   o f   M a s t e r   i n t e r f a c e   * /  
         i f   ( ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P )   = =   I 2 C _ C R 1 _ S T O P )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E ) )  
         {  
             / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
             c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
             d o  
             {  
                 c o u n t - - ;  
                 i f   ( c o u n t   = =   0 U )  
                 {  
                     h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                     h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                     h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                     h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                     / *   P r o c e s s   U n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
             w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         P r e v _ S t a t e   =   h i 2 c - > P r e v i o u s S t a t e ;  
  
         / *   I f   t r a n s f e r   d i r e c t i o n   n o t   c h a n g e   a n d   t h e r e   i s   n o   r e q u e s t   t o   s t a r t   a n o t h e r   f r a m e ,   d o   n o t   g e n e r a t e   R e s t a r t   C o n d i t i o n   * /  
         / *   M e a n   P r e v i o u s   s t a t e   i s   s a m e   a s   c u r r e n t   s t a t e   * /  
         i f   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X )   | |   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s )   = =   1 ) )  
         {  
             / *   G e n e r a t e   S t a r t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
         }  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
         t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
         p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     S e q u e n t i a l   t r a n s m i t   i n   m a s t e r   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A .  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     _ _ I O   u i n t 3 2 _ t   P r e v _ S t a t e   =   0 x 0 0 U ;  
     _ _ I O   u i n t 3 2 _ t   c o u n t             =   0 x 0 0 U ;  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   C h e c k   B u s y   F l a g   o n l y   i f   F I R S T   c a l l   o f   M a s t e r   i n t e r f a c e   * /  
         i f   ( ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P )   = =   I 2 C _ C R 1 _ S T O P )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E ) )  
         {  
             / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
             c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
             d o  
             {  
                 c o u n t - - ;  
                 i f   ( c o u n t   = =   0 U )  
                 {  
                     h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                     h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                     h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                     h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                     / *   P r o c e s s   U n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
             w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         P r e v _ S t a t e   =   h i 2 c - > P r e v i o u s S t a t e ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
                 h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
                 / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
                 h i 2 c - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
                 / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
                 h i 2 c - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
                 h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
                 / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
                 d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a t x ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   h i 2 c - > X f e r S i z e ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
  
             i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
             {  
                 / *   E n a b l e   A c k n o w l e d g e   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 / *   I f   t r a n s f e r   d i r e c t i o n   n o t   c h a n g e   a n d   t h e r e   i s   n o   r e q u e s t   t o   s t a r t   a n o t h e r   f r a m e ,   d o   n o t   g e n e r a t e   R e s t a r t   C o n d i t i o n   * /  
                 / *   M e a n   P r e v i o u s   s t a t e   i s   s a m e   a s   c u r r e n t   s t a t e   * /  
                 i f   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X )   | |   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s )   = =   1 ) )  
                 {  
                     / *   G e n e r a t e   S t a r t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
                 }  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                 t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                 p r o c e s s   u n l o c k   * /  
  
                 / *   I f   X f e r O p t i o n s   i s   n o t   a s s o c i a t e d   t o   a   n e w   f r a m e ,   m e a n   n o   s t a r t   b i t   i s   r e q u e s t ,   e n a b l e   d i r e c t l y   t h e   D M A   r e q u e s t   * /  
                 / *   I n   o t h e r   c a s e s ,   D M A   r e q u e s t   i s   e n a b l e d   a f t e r   S l a v e   a d d r e s s   t r e a t m e n t   i n   I R Q H a n d l e r   * /  
                 i f   ( ( X f e r O p t i o n s   = =   I 2 C _ N E X T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) )  
                 {  
                     / *   E n a b l e   D M A   R e q u e s t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
                 }  
  
                 / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   I f   t r a n s f e r   d i r e c t i o n   n o t   c h a n g e   a n d   t h e r e   i s   n o   r e q u e s t   t o   s t a r t   a n o t h e r   f r a m e ,   d o   n o t   g e n e r a t e   R e s t a r t   C o n d i t i o n   * /  
             / *   M e a n   P r e v i o u s   s t a t e   i s   s a m e   a s   c u r r e n t   s t a t e   * /  
             i f   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X )   | |   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s )   = =   1 ) )  
             {  
                 / *   G e n e r a t e   S t a r t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
             }  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
  
             / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     S e q u e n t i a l   r e c e i v e   i n   m a s t e r   I 2 C   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     _ _ I O   u i n t 3 2 _ t   P r e v _ S t a t e   =   0 x 0 0 U ;  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     u i n t 3 2 _ t   e n a b l e I T   =   ( I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   C h e c k   B u s y   F l a g   o n l y   i f   F I R S T   c a l l   o f   M a s t e r   i n t e r f a c e   * /  
         i f   ( ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P )   = =   I 2 C _ C R 1 _ S T O P )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E ) )  
         {  
             / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
             c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
             d o  
             {  
                 c o u n t - - ;  
                 i f   ( c o u n t   = =   0 U )  
                 {  
                     h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                     h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                     h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                     h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                     / *   P r o c e s s   U n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
             w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         P r e v _ S t a t e   =   h i 2 c - > P r e v i o u s S t a t e ;  
  
         i f   ( ( h i 2 c - > X f e r C o u n t   = =   2 U )   & &   ( ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) ) )  
         {  
             i f   ( P r e v _ S t a t e   = =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )  
             {  
                 / *   D i s a b l e   A c k n o w l e d g e   * /  
                 C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 / *   E n a b l e   P o s   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
                 / *   R e m o v e   E n a b l i n g   o f   I T _ B U F ,   m e a n   R X N E   t r e a t m e n t ,   t r e a t   t h e   2   b y t e s   t h r o u g h   B T F   * /  
                 e n a b l e I T   & =   ~ I 2 C _ I T _ B U F ;  
             }  
             e l s e  
             {  
                 / *   E n a b l e   A c k n o w l e d g e   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
             }  
         }  
         e l s e  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
         }  
  
         / *   I f   t r a n s f e r   d i r e c t i o n   n o t   c h a n g e   a n d   t h e r e   i s   n o   r e q u e s t   t o   s t a r t   a n o t h e r   f r a m e ,   d o   n o t   g e n e r a t e   R e s t a r t   C o n d i t i o n   * /  
         / *   M e a n   P r e v i o u s   s t a t e   i s   s a m e   a s   c u r r e n t   s t a t e   * /  
         i f   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )   | |   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s )   = =   1 ) )  
         {  
             / *   G e n e r a t e   S t a r t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
         }  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
         t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
         p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   i n t e r r u p t s   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   e n a b l e I T ) ;  
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
     *   @ b r i e f     S e q u e n t i a l   r e c e i v e   i n   m a s t e r   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     _ _ I O   u i n t 3 2 _ t   P r e v _ S t a t e   =   0 x 0 0 U ;  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     u i n t 3 2 _ t   e n a b l e I T   =   ( I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         / *   C h e c k   B u s y   F l a g   o n l y   i f   F I R S T   c a l l   o f   M a s t e r   i n t e r f a c e   * /  
         i f   ( ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P )   = =   I 2 C _ C R 1 _ S T O P )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E ) )  
         {  
             / *   W a i t   u n t i l   B U S Y   f l a g   i s   r e s e t   * /  
             c o u n t   =   I 2 C _ T I M E O U T _ B U S Y _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
             d o  
             {  
                 c o u n t - - ;  
                 i f   ( c o u n t   = =   0 U )  
                 {  
                     h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                     h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                     h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                     h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                     / *   P r o c e s s   U n l o c k e d   * /  
                     _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                     r e t u r n   H A L _ E R R O R ;  
                 }  
             }  
             w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T ) ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         / *   C l e a r   L a s t   D M A   b i t   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ M A S T E R ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
         h i 2 c - > D e v a d d r e s s     =   D e v A d d r e s s ;  
  
         P r e v _ S t a t e   =   h i 2 c - > P r e v i o u s S t a t e ;  
  
         i f   ( h i 2 c - > X f e r S i z e   >   0 U )  
         {  
             i f   ( ( h i 2 c - > X f e r C o u n t   = =   2 U )   & &   ( ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) ) )  
             {  
                 i f   ( P r e v _ S t a t e   = =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )  
                 {  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     / *   E n a b l e   P o s   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
                     / *   E n a b l e   L a s t   D M A   b i t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
                 }  
                 e l s e  
                 {  
                     / *   E n a b l e   A c k n o w l e d g e   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
                 }  
             }  
             e l s e  
             {  
                 / *   E n a b l e   A c k n o w l e d g e   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 i f   ( ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ O T H E R _ A N D _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) )  
                 {  
                     / *   E n a b l e   L a s t   D M A   b i t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
                 }  
             }  
             i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
                 h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
                 / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
                 h i 2 c - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
                 / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
                 h i 2 c - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
                 h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
                 / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
                 d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   h i 2 c - > X f e r S i z e ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
             i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
             {  
                 / *   I f   t r a n s f e r   d i r e c t i o n   n o t   c h a n g e   a n d   t h e r e   i s   n o   r e q u e s t   t o   s t a r t   a n o t h e r   f r a m e ,   d o   n o t   g e n e r a t e   R e s t a r t   C o n d i t i o n   * /  
                 / *   M e a n   P r e v i o u s   s t a t e   i s   s a m e   a s   c u r r e n t   s t a t e   * /  
                 i f   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )   | |   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s )   = =   1 ) )  
                 {  
                     / *   G e n e r a t e   S t a r t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
                     / *   U p d a t e   i n t e r r u p t   f o r   o n l y   E V T   a n d   E R R   * /  
                     e n a b l e I T   =   ( I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
                 }  
                 e l s e  
                 {  
                     / *   U p d a t e   i n t e r r u p t   f o r   o n l y   E R R   * /  
                     e n a b l e I T   =   I 2 C _ I T _ E R R ;  
                 }  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                 t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                 p r o c e s s   u n l o c k   * /  
  
                 / *   I f   X f e r O p t i o n s   i s   n o t   a s s o c i a t e d   t o   a   n e w   f r a m e ,   m e a n   n o   s t a r t   b i t   i s   r e q u e s t ,   e n a b l e   d i r e c t l y   t h e   D M A   r e q u e s t   * /  
                 / *   I n   o t h e r   c a s e s ,   D M A   r e q u e s t   i s   e n a b l e d   a f t e r   S l a v e   a d d r e s s   t r e a t m e n t   i n   I R Q H a n d l e r   * /  
                 i f   ( ( X f e r O p t i o n s   = =   I 2 C _ N E X T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E )   | |   ( X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) )  
                 {  
                     / *   E n a b l e   D M A   R e q u e s t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
                 }  
  
                 / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   e n a b l e I T ) ;  
             }  
             e l s e  
             {  
                 / *   U p d a t e   I 2 C   s t a t e   * /  
                 h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
         e l s e  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   I f   t r a n s f e r   d i r e c t i o n   n o t   c h a n g e   a n d   t h e r e   i s   n o   r e q u e s t   t o   s t a r t   a n o t h e r   f r a m e ,   d o   n o t   g e n e r a t e   R e s t a r t   C o n d i t i o n   * /  
             / *   M e a n   P r e v i o u s   s t a t e   i s   s a m e   a s   c u r r e n t   s t a t e   * /  
             i f   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )   | |   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s )   = =   1 ) )  
             {  
                 / *   G e n e r a t e   S t a r t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
             }  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
  
             / *   E n a b l e   i n t e r r u p t s   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   e n a b l e I T ) ;  
         }  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S e q u e n t i a l   t r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) h i 2 c - > S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                             p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     S e q u e n t i a l   t r a n s m i t   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) h i 2 c - > S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   D i s a b l e   I n t e r r u p t s ,   t o   p r e v e n t   p r e e m p t i o n   d u r i n g   t r e a t m e n t   i n   c a s e   o f   m u l t i c a l l   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
         / *   I 2 C   c a n n o t   m a n a g e   f u l l   d u p l e x   e x c h a n g e   s o   d i s a b l e   p r e v i o u s   I T   e n a b l e d   i f   a n y   * /  
         / *   a n d   t h e n   t o g g l e   t h e   H A L   s l a v e   R X   s t a t e   t o   T X   s t a t e   * /  
         i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N )  
         {  
             i f   ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
             {  
                 / *   A b o r t   D M A   X f e r   i f   a n y   * /  
                 i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
                 {  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
                     / *   S e t   t h e   I 2 C   D M A   A b o r t   c a l l b a c k   :  
                       w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                     h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
                     / *   A b o r t   D M A   R X   * /  
                     i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a r x )   ! =   H A L _ O K )  
                     {  
                         / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                         h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a r x ) ;  
                     }  
                 }  
             }  
         }  
         e l s e   i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N )  
         {  
             i f   ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
             {  
                 C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
                 / *   A b o r t   D M A   X f e r   i f   a n y   * /  
                 i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
                 {  
                     / *   S e t   t h e   I 2 C   D M A   A b o r t   c a l l b a c k   :  
                       w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                     h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
                     / *   A b o r t   D M A   T X   * /  
                     i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a t x )   ! =   H A L _ O K )  
                     {  
                         / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                         h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a t x ) ;  
                     }  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
  
         i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
             h i 2 c - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
             / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
             h i 2 c - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
             h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
             d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a t x ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   h i 2 c - > X f e r S i z e ) ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
         {  
             / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
             / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
             / *   E n a b l e   D M A   R e q u e s t   * /  
             h i 2 c - > I n s t a n c e - > C R 2   | =   I 2 C _ C R 2 _ D M A E N ;  
  
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S e q u e n t i a l   r e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   I n t e r r u p t  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) h i 2 c - > S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
                             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
                             p r o c e s s   u n l o c k   * /  
  
         / *   E n a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     S e q u e n t i a l   r e c e i v e   i n   s l a v e   m o d e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e   w i t h   D M A  
     *   @ n o t e       T h i s   i n t e r f a c e   a l l o w   t o   m a n a g e   r e p e a t e d   s t a r t   c o n d i t i o n   w h e n   a   d i r e c t i o n   c h a n g e   d u r i n g   t r a n s f e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     p D a t a   P o i n t e r   t o   d a t a   b u f f e r  
     *   @ p a r a m     S i z e   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ p a r a m     X f e r O p t i o n s   O p t i o n s   o f   T r a n s f e r ,   v a l u e   o f   @ r e f   I 2 C _ X f e r O p t i o n s _ d e f i n i t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ D M A ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   X f e r O p t i o n s )  
 {  
     H A L _ S t a t u s T y p e D e f   d m a x f e r s t a t u s ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I 2 C _ T R A N S F E R _ O P T I O N S _ R E Q U E S T ( X f e r O p t i o n s ) ) ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) h i 2 c - > S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         / *   D i s a b l e   I n t e r r u p t s ,   t o   p r e v e n t   p r e e m p t i o n   d u r i n g   t r e a t m e n t   i n   c a s e   o f   m u l t i c a l l   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
         / *   I 2 C   c a n n o t   m a n a g e   f u l l   d u p l e x   e x c h a n g e   s o   d i s a b l e   p r e v i o u s   I T   e n a b l e d   i f   a n y   * /  
         / *   a n d   t h e n   t o g g l e   t h e   H A L   s l a v e   R X   s t a t e   t o   T X   s t a t e   * /  
         i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N )  
         {  
             i f   ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
             {  
                 / *   A b o r t   D M A   X f e r   i f   a n y   * /  
                 i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
                 {  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
                     / *   S e t   t h e   I 2 C   D M A   A b o r t   c a l l b a c k   :  
                       w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                     h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
                     / *   A b o r t   D M A   R X   * /  
                     i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a r x )   ! =   H A L _ O K )  
                     {  
                         / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                         h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a r x ) ;  
                     }  
                 }  
             }  
         }  
         e l s e   i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N )  
         {  
             i f   ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
             {  
                 C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
                 / *   A b o r t   D M A   X f e r   i f   a n y   * /  
                 i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
                 {  
                     / *   S e t   t h e   I 2 C   D M A   A b o r t   c a l l b a c k   :  
                       w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                     h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
                     / *   A b o r t   D M A   T X   * /  
                     i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a t x )   ! =   H A L _ O K )  
                     {  
                         / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                         h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a t x ) ;  
                     }  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o   * /  
         }  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   D i s a b l e   P o s   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
         h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N ;  
         h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ S L A V E ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   P r e p a r e   t r a n s f e r   p a r a m e t e r s   * /  
         h i 2 c - > p B u f f P t r         =   p D a t a ;  
         h i 2 c - > X f e r C o u n t       =   S i z e ;  
         h i 2 c - > X f e r S i z e         =   h i 2 c - > X f e r C o u n t ;  
         h i 2 c - > X f e r O p t i o n s   =   X f e r O p t i o n s ;  
  
         i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I 2 C   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
             h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I 2 C _ D M A X f e r C p l t ;  
  
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
             h i 2 c - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I 2 C _ D M A E r r o r ;  
  
             / *   S e t   t h e   u n u s e d   D M A   c a l l b a c k s   t o   N U L L   * /  
             h i 2 c - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
             h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
             d m a x f e r s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h i 2 c - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i 2 c - > I n s t a n c e - > D R ,   ( u i n t 3 2 _ t ) h i 2 c - > p B u f f P t r ,   h i 2 c - > X f e r S i z e ) ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A _ P A R A M ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         i f   ( d m a x f e r s t a t u s   = =   H A L _ O K )  
         {  
             / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             / *   E n a b l e   D M A   R e q u e s t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
             / *   N o t e   :   T h e   I 2 C   i n t e r r u p t s   m u s t   b e   e n a b l e d   a f t e r   u n l o c k i n g   c u r r e n t   p r o c e s s  
             t o   a v o i d   t h e   r i s k   o f   I 2 C   i n t e r r u p t   h a n d l e   e x e c u t i o n   b e f o r e   c u r r e n t  
             p r o c e s s   u n l o c k   * /  
             / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   U p d a t e   I 2 C   s t a t e   * /  
             h i 2 c - > S t a t e           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e             =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   U p d a t e   I 2 C   e r r o r   c o d e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   A d d r e s s   l i s t e n   m o d e   w i t h   I n t e r r u p t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ E n a b l e L i s t e n _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ R E A D Y )  
     {  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
  
         / *   C h e c k   i f   t h e   I 2 C   i s   a l r e a d y   e n a b l e d   * /  
         i f   ( ( h i 2 c - > I n s t a n c e - > C R 1   &   I 2 C _ C R 1 _ P E )   ! =   I 2 C _ C R 1 _ P E )  
         {  
             / *   E n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
         }  
  
         / *   E n a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     D i s a b l e   t h e   A d d r e s s   l i s t e n   m o d e   w i t h   I n t e r r u p t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ D i s a b l e L i s t e n _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t m p   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     u i n t 3 2 _ t   t m p ;  
  
     / *   D i s a b l e   A d d r e s s   l i s t e n   m o d e   o n l y   i f   a   t r a n s f e r   i s   n o t   o n g o i n g   * /  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         t m p   =   ( u i n t 3 2 _ t ) ( h i 2 c - > S t a t e )   &   I 2 C _ S T A T E _ M S K ;  
         h i 2 c - > P r e v i o u s S t a t e   =   t m p   |   ( u i n t 3 2 _ t ) ( h i 2 c - > M o d e ) ;  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   D i s a b l e   A d d r e s s   A c k n o w l e d g e   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   D i s a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
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
     *   @ b r i e f     A b o r t   a   m a s t e r   I 2 C   I T   o r   D M A   p r o c e s s   c o m m u n i c a t i o n   w i t h   I n t e r r u p t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I 2 C _ M a s t e r _ A b o r t _ I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e       =   h i 2 c - > M o d e ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( D e v A d d r e s s ) ;  
  
     / *   A b o r t   M a s t e r   t r a n s f e r   d u r i n g   R e c e i v e   o r   T r a n s m i t   p r o c e s s         * /  
     i f   ( ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B U S Y )   ! =   R E S E T )   & &   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M A S T E R ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i 2 c ) ;  
  
         h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ A B O R T ;  
  
         / *   D i s a b l e   A c k n o w l e d g e   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         / *   G e n e r a t e   S t o p   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
         h i 2 c - > X f e r C o u n t   =   0 U ;  
  
         / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
         I 2 C _ I T E r r o r ( h i 2 c ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         / *   W r o n g   u s a g e   o f   a b o r t   f u n c t i o n   * /  
         / *   T h i s   f u n c t i o n   s h o u l d   b e   u s e d   o n l y   i n   c a s e   o f   a b o r t   m o n i t o r e d   b y   m a s t e r   d e v i c e   * /  
         / *   O r   p e r i p h a l   i s   n o t   i n   b u s y   s t a t e ,   m e a n   t h e r e   i s   n o   a c t i v e   s e q u e n c e   t o   b e   a b o r t   * /  
         r e t u r n   H A L _ E R R O R ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 C _ I R Q _ H a n d l e r _ a n d _ C a l l b a c k s   I R Q   H a n d l e r   a n d   C a l l b a c k s  
   *   @ {  
   * /  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   e v e n t   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ I 2 C _ E V _ I R Q H a n d l e r ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     u i n t 3 2 _ t   s r 1 i t f l a g s ;  
     u i n t 3 2 _ t   s r 2 i t f l a g s                               =   0 U ;  
     u i n t 3 2 _ t   i t s o u r c e s                                 =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > C R 2 ) ;  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s               =   h i 2 c - > X f e r O p t i o n s ;  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e       =   h i 2 c - > M o d e ;  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
  
     / *   M a s t e r   o r   M e m o r y   m o d e   s e l e c t e d   * /  
     i f   ( ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M A S T E R )   | |   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M E M ) )  
     {  
         s r 2 i t f l a g s       =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 2 ) ;  
         s r 1 i t f l a g s       =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 1 ) ;  
  
         / *   E x i t   I R Q   e v e n t   u n t i l   S t a r t   B i t   d e t e c t e d   i n   c a s e   o f   O t h e r   f r a m e   r e q u e s t e d   * /  
         i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ S B )   = =   R E S E T )   & &   ( I S _ I 2 C _ T R A N S F E R _ O T H E R _ O P T I O N S _ R E Q U E S T ( C u r r e n t X f e r O p t i o n s )   = =   1 U ) )  
         {  
             r e t u r n ;  
         }  
  
         / *   S B   S e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ S B )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
         {  
             / *   C o n v e r t   O T H E R _ x x x   X f e r O p t i o n s   i f   a n y   * /  
             I 2 C _ C o n v e r t O t h e r X f e r O p t i o n s ( h i 2 c ) ;  
  
             I 2 C _ M a s t e r _ S B ( h i 2 c ) ;  
         }  
         / *   A D D 1 0   S e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ A D D 1 0 )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
         {  
             I 2 C _ M a s t e r _ A D D 1 0 ( h i 2 c ) ;  
         }  
         / *   A D D R   S e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ A D D R )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
         {  
             I 2 C _ M a s t e r _ A D D R ( h i 2 c ) ;  
         }  
         / *   I 2 C   i n   m o d e   T r a n s m i t t e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e   i f   ( I 2 C _ C H E C K _ F L A G ( s r 2 i t f l a g s ,   I 2 C _ F L A G _ T R A )   ! =   R E S E T )  
         {  
             / *   D o   n o t   c h e c k   b u f f e r   a n d   B T F   f l a g   i f   a   X f e r   D M A   i s   o n   g o i n g   * /  
             i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N )   ! =   I 2 C _ C R 2 _ D M A E N )  
             {  
                 / *   T X E   s e t   a n d   B T F   r e s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
                 i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ T X E )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ B U F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   = =   R E S E T ) )  
                 {  
                     I 2 C _ M a s t e r T r a n s m i t _ T X E ( h i 2 c ) ;  
                 }  
                 / *   B T F   s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
                 e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
                 {  
                     i f   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )  
                     {  
                         I 2 C _ M a s t e r T r a n s m i t _ B T F ( h i 2 c ) ;  
                     }  
                     e l s e   / *   H A L _ I 2 C _ M O D E _ M E M   * /  
                     {  
                         i f   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
                         {  
                             I 2 C _ M e m o r y T r a n s m i t _ T X E _ B T F ( h i 2 c ) ;  
                         }  
                     }  
                 }  
                 e l s e  
                 {  
                     / *   D o   n o t h i n g   * /  
                 }  
             }  
         }  
         / *   I 2 C   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e  
         {  
             / *   D o   n o t   c h e c k   b u f f e r   a n d   B T F   f l a g   i f   a   X f e r   D M A   i s   o n   g o i n g   * /  
             i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N )   ! =   I 2 C _ C R 2 _ D M A E N )  
             {  
                 / *   R X N E   s e t   a n d   B T F   r e s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
                 i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ R X N E )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ B U F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   = =   R E S E T ) )  
                 {  
                     I 2 C _ M a s t e r R e c e i v e _ R X N E ( h i 2 c ) ;  
                 }  
                 / *   B T F   s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
                 e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
                 {  
                     I 2 C _ M a s t e r R e c e i v e _ B T F ( h i 2 c ) ;  
                 }  
                 e l s e  
                 {  
                     / *   D o   n o t h i n g   * /  
                 }  
             }  
         }  
     }  
     / *   S l a v e   m o d e   s e l e c t e d   * /  
     e l s e  
     {  
         / *   I f   a n   e r r o r   i s   d e t e c t e d ,   r e a d   o n l y   S R 1   r e g i s t e r   t o   p r e v e n t   * /  
         / *   a   c l e a r   o f   A D D R   f l a g s   b y   r e a d i n g   S R 2   a f t e r   r e a d i n g   S R 1   i n   E r r o r   t r e a t m e n t   * /  
         i f   ( h i 2 c - > E r r o r C o d e   ! =   H A L _ I 2 C _ E R R O R _ N O N E )  
         {  
             s r 1 i t f l a g s       =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 1 ) ;  
         }  
         e l s e  
         {  
             s r 2 i t f l a g s       =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 2 ) ;  
             s r 1 i t f l a g s       =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 1 ) ;  
         }  
  
         / *   A D D R   s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ A D D R )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
         {  
             / *   N o w   t i m e   t o   r e a d   S R 2 ,   t h i s   w i l l   c l e a r   A D D R   f l a g   a u t o m a t i c a l l y   * /  
             i f   ( h i 2 c - > E r r o r C o d e   ! =   H A L _ I 2 C _ E R R O R _ N O N E )  
             {  
                 s r 2 i t f l a g s       =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 2 ) ;  
             }  
             I 2 C _ S l a v e _ A D D R ( h i 2 c ,   s r 2 i t f l a g s ) ;  
         }  
         / *   S T O P F   s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ S T O P F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
         {  
             I 2 C _ S l a v e _ S T O P F ( h i 2 c ) ;  
         }  
         / *   I 2 C   i n   m o d e   T r a n s m i t t e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e   i f   ( ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )   | |   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N ) )  
         {  
             / *   T X E   s e t   a n d   B T F   r e s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ T X E )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ B U F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   = =   R E S E T ) )  
             {  
                 I 2 C _ S l a v e T r a n s m i t _ T X E ( h i 2 c ) ;  
             }  
             / *   B T F   s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
             {  
                 I 2 C _ S l a v e T r a n s m i t _ B T F ( h i 2 c ) ;  
             }  
             e l s e  
             {  
                 / *   D o   n o t h i n g   * /  
             }  
         }  
         / *   I 2 C   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         e l s e  
         {  
             / *   R X N E   s e t   a n d   B T F   r e s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ R X N E )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ B U F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   = =   R E S E T ) )  
             {  
                 I 2 C _ S l a v e R e c e i v e _ R X N E ( h i 2 c ) ;  
             }  
             / *   B T F   s e t   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             e l s e   i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B T F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E V T )   ! =   R E S E T ) )  
             {  
                 I 2 C _ S l a v e R e c e i v e _ B T F ( h i 2 c ) ;  
             }  
             e l s e  
             {  
                 / *   D o   n o t h i n g   * /  
             }  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   e r r o r   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ I 2 C _ E R _ I R Q H a n d l e r ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     H A L _ I 2 C _ M o d e T y p e D e f   t m p 1 ;  
     u i n t 3 2 _ t   t m p 2 ;  
     H A L _ I 2 C _ S t a t e T y p e D e f   t m p 3 ;  
     u i n t 3 2 _ t   t m p 4 ;  
     u i n t 3 2 _ t   s r 1 i t f l a g s   =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > S R 1 ) ;  
     u i n t 3 2 _ t   i t s o u r c e s     =   R E A D _ R E G ( h i 2 c - > I n s t a n c e - > C R 2 ) ;  
     u i n t 3 2 _ t   e r r o r             =   H A L _ I 2 C _ E R R O R _ N O N E ;  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e       =   h i 2 c - > M o d e ;  
  
     / *   I 2 C   B u s   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ B E R R )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E R R )   ! =   R E S E T ) )  
     {  
         e r r o r   | =   H A L _ I 2 C _ E R R O R _ B E R R ;  
  
         / *   C l e a r   B E R R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B E R R ) ;  
  
         / *   W o r k a r o u n d :   S t a r t   c a n n o t   b e   g e n e r a t e d   a f t e r   a   m i s p l a c e d   S t o p   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S W R S T ) ;  
     }  
  
     / *   I 2 C   A r b i t r a t i o n   L o s t   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ A R L O )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E R R )   ! =   R E S E T ) )  
     {  
         e r r o r   | =   H A L _ I 2 C _ E R R O R _ A R L O ;  
  
         / *   C l e a r   A R L O   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A R L O ) ;  
     }  
  
     / *   I 2 C   A c k n o w l e d g e   f a i l u r e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ A F )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E R R )   ! =   R E S E T ) )  
     {  
         t m p 1   =   C u r r e n t M o d e ;  
         t m p 2   =   h i 2 c - > X f e r C o u n t ;  
         t m p 3   =   h i 2 c - > S t a t e ;  
         t m p 4   =   h i 2 c - > P r e v i o u s S t a t e ;  
         i f   ( ( t m p 1   = =   H A L _ I 2 C _ M O D E _ S L A V E )   & &   ( t m p 2   = =   0 U )   & &   \  
                 ( ( t m p 3   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )   | |   ( t m p 3   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N )   | |   \  
                   ( ( t m p 3   = =   H A L _ I 2 C _ S T A T E _ L I S T E N )   & &   ( t m p 4   = =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ T X ) ) ) )  
         {  
             I 2 C _ S l a v e _ A F ( h i 2 c ) ;  
         }  
         e l s e  
         {  
             / *   C l e a r   A F   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
             e r r o r   | =   H A L _ I 2 C _ E R R O R _ A F ;  
  
             / *   D o   n o t   g e n e r a t e   a   S T O P   i n   c a s e   o f   S l a v e   r e c e i v e   n o n   a c k n o w l e d g e   d u r i n g   t r a n s f e r   ( m e a n   n o t   a t   t h e   e n d   o f   t r a n s f e r )   * /  
             i f   ( ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M A S T E R )   | |   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M E M ) )  
             {  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
             }  
         }  
     }  
  
     / *   I 2 C   O v e r - R u n / U n d e r - R u n   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( I 2 C _ C H E C K _ F L A G ( s r 1 i t f l a g s ,   I 2 C _ F L A G _ O V R )   ! =   R E S E T )   & &   ( I 2 C _ C H E C K _ I T _ S O U R C E ( i t s o u r c e s ,   I 2 C _ I T _ E R R )   ! =   R E S E T ) )  
     {  
         e r r o r   | =   H A L _ I 2 C _ E R R O R _ O V R ;  
         / *   C l e a r   O V R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ O V R ) ;  
     }  
  
     / *   C a l l   t h e   E r r o r   C a l l b a c k   i n   c a s e   o f   E r r o r   d e t e c t e d   - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( e r r o r   ! =   H A L _ I 2 C _ E R R O R _ N O N E )  
     {  
         h i 2 c - > E r r o r C o d e   | =   e r r o r ;  
         I 2 C _ I T E r r o r ( h i 2 c ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     M a s t e r   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     M a s t e r   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *   @ b r i e f     S l a v e   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S l a v e   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S l a v e   A d d r e s s   M a t c h   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     T r a n s f e r D i r e c t i o n   M a s t e r   r e q u e s t   T r a n s f e r   D i r e c t i o n   ( W r i t e / R e a d ) ,   v a l u e   o f   @ r e f   I 2 C _ X f e r D i r e c t i o n _ d e f i n i t i o n  
     *   @ p a r a m     A d d r M a t c h C o d e   A d d r e s s   M a t c h   C o d e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ A d d r C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 8 _ t   T r a n s f e r D i r e c t i o n ,   u i n t 1 6 _ t   A d d r M a t c h C o d e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
     U N U S E D ( T r a n s f e r D i r e c t i o n ) ;  
     U N U S E D ( A d d r M a t c h C o d e ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ A d d r C a l l b a c k ( )   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     L i s t e n   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( )   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     M e m o r y   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ M e m T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     M e m o r y   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ M e m R x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I 2 C   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ E r r o r C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I 2 C   a b o r t   c a l l b a c k .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i 2 c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I 2 C _ A b o r t C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I 2 C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e ,   M o d e   a n d   E r r o r   f u n c t i o n s  
   *     @ b r i e f       P e r i p h e r a l   S t a t e ,   M o d e   a n d   E r r o r   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   P e r i p h e r a l   S t a t e ,   M o d e   a n d   E r r o r   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   I 2 C   h a n d l e   s t a t e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ I 2 C _ S t a t e T y p e D e f   H A L _ I 2 C _ G e t S t a t e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   R e t u r n   I 2 C   h a n d l e   s t a t e   * /  
     r e t u r n   h i 2 c - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   I 2 C   M a s t e r ,   S l a v e ,   M e m o r y   o r   n o   m o d e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   H A L   m o d e  
     * /  
 H A L _ I 2 C _ M o d e T y p e D e f   H A L _ I 2 C _ G e t M o d e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     r e t u r n   h i 2 c - > M o d e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   I 2 C   e r r o r   c o d e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   I 2 C   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ I 2 C _ G e t E r r o r ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     r e t u r n   h i 2 c - > E r r o r C o d e ;  
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
 / * *   @ a d d t o g r o u p   I 2 C _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     H a n d l e   T X E   f l a g   f o r   M a s t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r T r a n s m i t _ T X E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e       =   h i 2 c - > M o d e ;  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s               =   h i 2 c - > X f e r O p t i o n s ;  
  
     i f   ( ( h i 2 c - > X f e r S i z e   = =   0 U )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ) )  
     {  
         / *   C a l l   T x C p l t C a l l b a c k ( )   d i r e c t l y   i f   n o   s t o p   m o d e   i s   s e t   * /  
         i f   ( ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ L A S T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ N O _ O P T I O N _ F R A M E ) )  
         {  
             _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X ;  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e   / *   G e n e r a t e   S t o p   c o n d i t i o n   t h e n   C a l l   T x C p l t C a l l b a c k ( )   * /  
         {  
             / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
             i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
             {  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > M e m T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e  
             {  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
     }  
     e l s e   i f   ( ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )   | |   \  
                       ( ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ) ) )  
     {  
         i f   ( h i 2 c - > X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   B U F   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ B U F ) ;  
         }  
         e l s e  
         {  
             i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
             {  
                 I 2 C _ M e m o r y T r a n s m i t _ T X E _ B T F ( h i 2 c ) ;  
             }  
             e l s e  
             {  
                 / *   W r i t e   d a t a   t o   D R   * /  
                 h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r C o u n t - - ;  
             }  
         }  
     }  
     e l s e  
     {  
         / *   D o   n o t h i n g   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   B T F   f l a g   f o r   M a s t e r   t r a n s m i t t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r T r a n s m i t _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s   =   h i 2 c - > X f e r O p t i o n s ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )  
     {  
         i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
         {  
             / *   W r i t e   d a t a   t o   D R   * /  
             h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
         }  
         e l s e  
         {  
             / *   C a l l   T x C p l t C a l l b a c k ( )   d i r e c t l y   i f   n o   s t o p   m o d e   i s   s e t   * /  
             i f   ( ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ L A S T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ N O _ O P T I O N _ F R A M E ) )  
             {  
                 _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
                 h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X ;  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e   / *   G e n e r a t e   S t o p   c o n d i t i o n   t h e n   C a l l   T x C p l t C a l l b a c k ( )   * /  
             {  
                 / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
                 h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
                 {  
                     h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     h i 2 c - > M e m T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                     H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
                 e l s e  
                 {  
                     h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     h i 2 c - > M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                     H A L _ I 2 C _ M a s t e r T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
         }  
     }  
     e l s e  
     {  
         / *   D o   n o t h i n g   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   T X E   a n d   B T F   f l a g   f o r   M e m o r y   t r a n s m i t t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M e m o r y T r a n s m i t _ T X E _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
  
     i f   ( h i 2 c - > E v e n t C o u n t   = =   0 U )  
     {  
         / *   I f   M e m o r y   a d d r e s s   s i z e   i s   8 B i t   * /  
         i f   ( h i 2 c - > M e m a d d S i z e   = =   I 2 C _ M E M A D D _ S I Z E _ 8 B I T )  
         {  
             / *   S e n d   M e m o r y   A d d r e s s   * /  
             h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ L S B ( h i 2 c - > M e m a d d r e s s ) ;  
  
             h i 2 c - > E v e n t C o u n t   + =   2 U ;  
         }  
         / *   I f   M e m o r y   a d d r e s s   s i z e   i s   1 6 B i t   * /  
         e l s e  
         {  
             / *   S e n d   M S B   o f   M e m o r y   A d d r e s s   * /  
             h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ M S B ( h i 2 c - > M e m a d d r e s s ) ;  
  
             h i 2 c - > E v e n t C o u n t + + ;  
         }  
     }  
     e l s e   i f   ( h i 2 c - > E v e n t C o u n t   = =   1 U )  
     {  
         / *   S e n d   L S B   o f   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ L S B ( h i 2 c - > M e m a d d r e s s ) ;  
  
         h i 2 c - > E v e n t C o u n t + + ;  
     }  
     e l s e   i f   ( h i 2 c - > E v e n t C o u n t   = =   2 U )  
     {  
         i f   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X )  
         {  
             / *   G e n e r a t e   R e s t a r t   * /  
             h i 2 c - > I n s t a n c e - > C R 1   | =   I 2 C _ C R 1 _ S T A R T ;  
  
             h i 2 c - > E v e n t C o u n t + + ;  
         }  
         e l s e   i f   ( ( h i 2 c - > X f e r C o u n t   >   0 U )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ) )  
         {  
             / *   W r i t e   d a t a   t o   D R   * /  
             h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
         }  
         e l s e   i f   ( ( h i 2 c - > X f e r C o u n t   = =   0 U )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X ) )  
         {  
             / *   G e n e r a t e   S t o p   c o n d i t i o n   t h e n   C a l l   T x C p l t C a l l b a c k ( )   * /  
             / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > M e m T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ M e m T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e  
         {  
             / *   D o   n o t h i n g   * /  
         }  
     }  
     e l s e  
     {  
         / *   D o   n o t h i n g   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   R X N E   f l a g   f o r   M a s t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r R e c e i v e _ R X N E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X )  
     {  
         u i n t 3 2 _ t   t m p ;  
  
         t m p   =   h i 2 c - > X f e r C o u n t ;  
         i f   ( t m p   >   3 U )  
         {  
             / *   R e a d   d a t a   f r o m   D R   * /  
             * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
  
             i f   ( h i 2 c - > X f e r C o u n t   = =   ( u i n t 1 6 _ t ) 3 )  
             {  
                 / *   D i s a b l e   B U F   i n t e r r u p t ,   t h i s   h e l p   t o   t r e a t   c o r r e c t l y   t h e   l a s t   4   b y t e s  
                 o n   B T F   s u b r o u t i n e   * /  
                 / *   D i s a b l e   B U F   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ B U F ) ;  
             }  
         }  
         e l s e   i f   ( ( h i 2 c - > X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E )   & &   ( ( t m p   = =   1 U )   | |   ( t m p   = =   0 U ) ) )  
         {  
             i f   ( I 2 C _ W a i t O n S T O P R e q u e s t T h r o u g h I T ( h i 2 c )   = =   H A L _ O K )  
             {  
                 / *   D i s a b l e   A c k n o w l e d g e   * /  
                 C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
                 / *   R e a d   d a t a   f r o m   D R   * /  
                 * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r C o u n t - - ;  
  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
                 i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
                 {  
                     h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
                     h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     h i 2 c - > M e m R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                     H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
                 e l s e  
                 {  
                     h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
                     h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     h i 2 c - > M a s t e r R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                     H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
             e l s e  
             {  
                 / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
                 _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
                 / *   R e a d   d a t a   f r o m   D R   * /  
                 * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                 / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                 h i 2 c - > p B u f f P t r + + ;  
  
                 / *   U p d a t e   c o u n t e r   * /  
                 h i 2 c - > X f e r C o u n t - - ;  
  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
                 / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
         e l s e  
         {  
             / *   D o   n o t h i n g   * /  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   B T F   f l a g   f o r   M a s t e r   r e c e i v e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r R e c e i v e _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s   =   h i 2 c - > X f e r O p t i o n s ;  
  
     i f   ( h i 2 c - > X f e r C o u n t   = =   4 U )  
     {  
         / *   D i s a b l e   B U F   i n t e r r u p t ,   t h i s   h e l p   t o   t r e a t   c o r r e c t l y   t h e   l a s t   2   b y t e s  
               o n   B T F   s u b r o u t i n e   i f   t h e r e   i s   a   r e c e p t i o n   d e l a y   b e t w e e n   N - 1   a n d   N   b y t e   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ B U F ) ;  
  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
     }  
     e l s e   i f   ( h i 2 c - > X f e r C o u n t   = =   3 U )  
     {  
         / *   D i s a b l e   B U F   i n t e r r u p t ,   t h i s   h e l p   t o   t r e a t   c o r r e c t l y   t h e   l a s t   2   b y t e s  
               o n   B T F   s u b r o u t i n e   i f   t h e r e   i s   a   r e c e p t i o n   d e l a y   b e t w e e n   N - 1   a n d   N   b y t e   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ B U F ) ;  
  
         i f   ( ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ N E X T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E ) )  
         {  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
         }  
  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
     }  
     e l s e   i f   ( h i 2 c - > X f e r C o u n t   = =   2 U )  
     {  
         / *   P r e p a r e   n e x t   t r a n s f e r   o r   s t o p   c u r r e n t   t r a n s f e r   * /  
         i f   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) )  
         {  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
         }  
         e l s e   i f   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N E X T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E ) )  
         {  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
         }  
         e l s e   i f   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P )  
         {  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
         e l s e  
         {  
             / *   D o   n o t h i n g   * /  
         }  
  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
  
         / *   D i s a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
         {  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > M e m R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e  
         {  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X ;  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > M a s t e r R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
     e l s e  
     {  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   S B   f l a g   f o r   M a s t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r _ S B ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
     {  
         i f   ( h i 2 c - > E v e n t C o u n t   = =   0 U )  
         {  
             / *   S e n d   s l a v e   a d d r e s s   * /  
             h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ W R I T E ( h i 2 c - > D e v a d d r e s s ) ;  
         }  
         e l s e  
         {  
             h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ R E A D ( h i 2 c - > D e v a d d r e s s ) ;  
         }  
     }  
     e l s e  
     {  
         i f   ( h i 2 c - > I n i t . A d d r e s s i n g M o d e   = =   I 2 C _ A D D R E S S I N G M O D E _ 7 B I T )  
         {  
             / *   S e n d   s l a v e   7   B i t s   a d d r e s s   * /  
             i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )  
             {  
                 h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ W R I T E ( h i 2 c - > D e v a d d r e s s ) ;  
             }  
             e l s e  
             {  
                 h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ R E A D ( h i 2 c - > D e v a d d r e s s ) ;  
             }  
  
             i f   ( ( ( h i 2 c - > h d m a t x   ! =   N U L L )   & &   ( h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   ! =   N U L L ) )  
                     | |   ( ( h i 2 c - > h d m a r x   ! =   N U L L )   & &   ( h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   ! =   N U L L ) ) )  
             {  
                 / *   E n a b l e   D M A   R e q u e s t   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
             }  
         }  
         e l s e  
         {  
             i f   ( h i 2 c - > E v e n t C o u n t   = =   0 U )  
             {  
                 / *   S e n d   h e a d e r   o f   s l a v e   a d d r e s s   * /  
                 h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ H E A D E R _ W R I T E ( h i 2 c - > D e v a d d r e s s ) ;  
             }  
             e l s e   i f   ( h i 2 c - > E v e n t C o u n t   = =   1 U )  
             {  
                 / *   S e n d   h e a d e r   o f   s l a v e   a d d r e s s   * /  
                 h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ H E A D E R _ R E A D ( h i 2 c - > D e v a d d r e s s ) ;  
             }  
             e l s e  
             {  
                 / *   D o   n o t h i n g   * /  
             }  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   A D D 1 0   f l a g   f o r   M a s t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r _ A D D 1 0 ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   S e n d   s l a v e   a d d r e s s   * /  
     h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ A D D R E S S ( h i 2 c - > D e v a d d r e s s ) ;  
  
     i f   ( ( ( h i 2 c - > h d m a t x   ! =   N U L L )   & &   ( h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   ! =   N U L L ) )  
             | |   ( ( h i 2 c - > h d m a r x   ! =   N U L L )   & &   ( h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   ! =   N U L L ) ) )  
     {  
         / *   E n a b l e   D M A   R e q u e s t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   A D D R   f l a g   f o r   M a s t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ M a s t e r _ A D D R ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e               =   h i 2 c - > M o d e ;  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s                       =   h i 2 c - > X f e r O p t i o n s ;  
     u i n t 3 2 _ t   P r e v _ S t a t e                                       =   h i 2 c - > P r e v i o u s S t a t e ;  
  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X )  
     {  
         i f   ( ( h i 2 c - > E v e n t C o u n t   = =   0 U )   & &   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M E M ) )  
         {  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
         }  
         e l s e   i f   ( ( h i 2 c - > E v e n t C o u n t   = =   0 U )   & &   ( h i 2 c - > I n i t . A d d r e s s i n g M o d e   = =   I 2 C _ A D D R E S S I N G M O D E _ 1 0 B I T ) )  
         {  
             / *   C l e a r   A D D R   f l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
             / *   G e n e r a t e   R e s t a r t   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
             h i 2 c - > E v e n t C o u n t + + ;  
         }  
         e l s e  
         {  
             i f   ( h i 2 c - > X f e r C o u n t   = =   0 U )  
             {  
                 / *   C l e a r   A D D R   f l a g   * /  
                 _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
             }  
             e l s e   i f   ( h i 2 c - > X f e r C o u n t   = =   1 U )  
             {  
                 i f   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N O _ O P T I O N _ F R A M E )  
                 {  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     i f   ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
                     {  
                         / *   D i s a b l e   A c k n o w l e d g e   * /  
                         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                         / *   C l e a r   A D D R   f l a g   * /  
                         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
                     }  
                     e l s e  
                     {  
                         / *   C l e a r   A D D R   f l a g   * /  
                         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                         / *   G e n e r a t e   S t o p   * /  
                         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
                     }  
                 }  
                 / *   P r e p a r e   n e x t   t r a n s f e r   o r   s t o p   c u r r e n t   t r a n s f e r   * /  
                 e l s e   i f   ( ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ L A S T _ F R A M E )   \  
                                   & &   ( ( P r e v _ S t a t e   ! =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E ) ) )  
                 {  
                     i f   ( ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ N E X T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) )  
                     {  
                         / *   D i s a b l e   A c k n o w l e d g e   * /  
                         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
                     }  
                     e l s e  
                     {  
                         / *   E n a b l e   A c k n o w l e d g e   * /  
                         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
                     }  
  
                     / *   C l e a r   A D D R   f l a g   * /  
                     _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
                 }  
                 e l s e  
                 {  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     / *   C l e a r   A D D R   f l a g   * /  
                     _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                     / *   G e n e r a t e   S t o p   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
                 }  
             }  
             e l s e   i f   ( h i 2 c - > X f e r C o u n t   = =   2 U )  
             {  
                 i f   ( ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ N E X T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ F I R S T _ A N D _ N E X T _ F R A M E )   & &   ( C u r r e n t X f e r O p t i o n s   ! =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P ) )  
                 {  
                     / *   E n a b l e   P o s   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ P O S ) ;  
  
                     / *   C l e a r   A D D R   f l a g   * /  
                     _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
                     / *   D i s a b l e   A c k n o w l e d g e   * /  
                     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
                 }  
                 e l s e  
                 {  
                     / *   E n a b l e   A c k n o w l e d g e   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                     / *   C l e a r   A D D R   f l a g   * /  
                     _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
                 }  
  
                 i f   ( ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )   & &   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N O _ O P T I O N _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E ) ) )  
                 {  
                     / *   E n a b l e   L a s t   D M A   b i t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
                 }  
             }  
             e l s e  
             {  
                 / *   E n a b l e   A c k n o w l e d g e   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
                 i f   ( ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )   & &   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N O _ O P T I O N _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E _ N O _ S T O P )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E ) ) )  
                 {  
                     / *   E n a b l e   L a s t   D M A   b i t   * /  
                     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
                 }  
  
                 / *   C l e a r   A D D R   f l a g   * /  
                 _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
             }  
  
             / *   R e s e t   E v e n t   c o u n t e r     * /  
             h i 2 c - > E v e n t C o u n t   =   0 U ;  
         }  
     }  
     e l s e  
     {  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   T X E   f l a g   f o r   S l a v e  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e T r a n s m i t _ T X E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
  
     i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
     {  
         / *   W r i t e   d a t a   t o   D R   * /  
         h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
  
         i f   ( ( h i 2 c - > X f e r C o u n t   = =   0 U )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N ) )  
         {  
             / *   L a s t   B y t e   i s   r e c e i v e d ,   d i s a b l e   I n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ B U F ) ;  
  
             / *   S e t   s t a t e   a t   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ T X ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
  
             / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > S l a v e T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   B T F   f l a g   f o r   S l a v e   t r a n s m i t t e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e T r a n s m i t _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
     {  
         / *   W r i t e   d a t a   t o   D R   * /  
         h i 2 c - > I n s t a n c e - > D R   =   * h i 2 c - > p B u f f P t r ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   R X N E   f l a g   f o r   S l a v e  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e R e c e i v e _ R X N E ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
  
     i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
     {  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
  
         i f   ( ( h i 2 c - > X f e r C o u n t   = =   0 U )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N ) )  
         {  
             / *   L a s t   B y t e   i s   r e c e i v e d ,   d i s a b l e   I n t e r r u p t   * /  
             _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ B U F ) ;  
  
             / *   S e t   s t a t e   a t   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ R X ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
  
             / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   B T F   f l a g   f o r   S l a v e   r e c e i v e r  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e R e c e i v e _ B T F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
     {  
         / *   R e a d   d a t a   f r o m   D R   * /  
         * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
         / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
         h i 2 c - > p B u f f P t r + + ;  
  
         / *   U p d a t e   c o u n t e r   * /  
         h i 2 c - > X f e r C o u n t - - ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   A D D   f l a g   f o r   S l a v e  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     I T 2 F l a g s   I n t e r r u p t 2   f l a g s   t o   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e _ A D D R ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   I T 2 F l a g s )  
 {  
     u i n t 8 _ t   T r a n s f e r D i r e c t i o n   =   I 2 C _ D I R E C T I O N _ R E C E I V E ;  
     u i n t 1 6 _ t   S l a v e A d d r C o d e ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) h i 2 c - > S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         / *   D i s a b l e   B U F   i n t e r r u p t ,   B U F   e n a b l i n g   i s   m a n a g e   t h r o u g h   s l a v e   s p e c i f i c   i n t e r f a c e   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   ( I 2 C _ I T _ B U F ) ) ;  
  
         / *   T r a n s f e r   D i r e c t i o n   r e q u e s t e d   b y   M a s t e r   * /  
         i f   ( I 2 C _ C H E C K _ F L A G ( I T 2 F l a g s ,   I 2 C _ F L A G _ T R A )   = =   R E S E T )  
         {  
             T r a n s f e r D i r e c t i o n   =   I 2 C _ D I R E C T I O N _ T R A N S M I T ;  
         }  
  
         i f   ( I 2 C _ C H E C K _ F L A G ( I T 2 F l a g s ,   I 2 C _ F L A G _ D U A L F )   = =   R E S E T )  
         {  
             S l a v e A d d r C o d e   =   ( u i n t 1 6 _ t ) h i 2 c - > I n i t . O w n A d d r e s s 1 ;  
         }  
         e l s e  
         {  
             S l a v e A d d r C o d e   =   ( u i n t 1 6 _ t ) h i 2 c - > I n i t . O w n A d d r e s s 2 ;  
         }  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         / *   C a l l   S l a v e   A d d r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > A d d r C a l l b a c k ( h i 2 c ,   T r a n s f e r D i r e c t i o n ,   S l a v e A d d r C o d e ) ;  
 # e l s e  
         H A L _ I 2 C _ A d d r C a l l b a c k ( h i 2 c ,   T r a n s f e r D i r e c t i o n ,   S l a v e A d d r C o d e ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
     e l s e  
     {  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   S T O P F   f l a g   f o r   S l a v e  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e _ S T O P F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
  
     / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
     _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
     / *   C l e a r   S T O P F   f l a g   * /  
     _ _ H A L _ I 2 C _ C L E A R _ S T O P F L A G ( h i 2 c ) ;  
  
     / *   D i s a b l e   A c k n o w l e d g e   * /  
     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
     / *   I f   a   D M A   i s   o n g o i n g ,   U p d a t e   h a n d l e   s i z e   c o n t e x t   * /  
     i f   ( ( h i 2 c - > I n s t a n c e - > C R 2   &   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
     {  
         i f   ( ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X )   | |   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N ) )  
         {  
             h i 2 c - > X f e r C o u n t   =   ( u i n t 1 6 _ t ) ( _ _ H A L _ D M A _ G E T _ C O U N T E R ( h i 2 c - > h d m a r x ) ) ;  
  
             i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
             {  
                 / *   S e t   E r r o r C o d e   c o r r e s p o n d i n g   t o   a   N o n - A c k n o w l e d g e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ A F ;  
             }  
  
             / *   D i s a b l e ,   s t o p   t h e   c u r r e n t   D M A   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
             / *   A b o r t   D M A   X f e r   i f   a n y   * /  
             i f   ( H A L _ D M A _ G e t S t a t e ( h i 2 c - > h d m a r x )   ! =   H A L _ D M A _ S T A T E _ R E A D Y )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   A b o r t   c a l l b a c k   :  
                 w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                 h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
                 / *   A b o r t   D M A   R X   * /  
                 i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a r x )   ! =   H A L _ O K )  
                 {  
                     / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                     h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a r x ) ;  
                 }  
             }  
         }  
         e l s e  
         {  
             h i 2 c - > X f e r C o u n t   =   ( u i n t 1 6 _ t ) ( _ _ H A L _ D M A _ G E T _ C O U N T E R ( h i 2 c - > h d m a t x ) ) ;  
  
             i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
             {  
                 / *   S e t   E r r o r C o d e   c o r r e s p o n d i n g   t o   a   N o n - A c k n o w l e d g e   * /  
                 h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ A F ;  
             }  
  
             / *   D i s a b l e ,   s t o p   t h e   c u r r e n t   D M A   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
             / *   A b o r t   D M A   X f e r   i f   a n y   * /  
             i f   ( H A L _ D M A _ G e t S t a t e ( h i 2 c - > h d m a t x )   ! =   H A L _ D M A _ S T A T E _ R E A D Y )  
             {  
                 / *   S e t   t h e   I 2 C   D M A   A b o r t   c a l l b a c k   :  
                 w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                 h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
                 / *   A b o r t   D M A   T X   * /  
                 i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a t x )   ! =   H A L _ O K )  
                 {  
                     / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                     h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a t x ) ;  
                 }  
             }  
         }  
     }  
  
     / *   A l l   d a t a   a r e   n o t   t r a n s f e r r e d ,   s o   s e t   e r r o r   c o d e   a c c o r d i n g l y   * /  
     i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
     {  
         / *   S t o r e   L a s t   r e c e i v e   d a t a   i f   a n y   * /  
         i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   S E T )  
         {  
             / *   R e a d   d a t a   f r o m   D R   * /  
             * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
         }  
  
         / *   S t o r e   L a s t   r e c e i v e   d a t a   i f   a n y   * /  
         i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ R X N E )   = =   S E T )  
         {  
             / *   R e a d   d a t a   f r o m   D R   * /  
             * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
  
             / *   U p d a t e   c o u n t e r   * /  
             h i 2 c - > X f e r C o u n t - - ;  
         }  
  
         i f   ( h i 2 c - > X f e r C o u n t   ! =   0 U )  
         {  
             / *   S e t   E r r o r C o d e   c o r r e s p o n d i n g   t o   a   N o n - A c k n o w l e d g e   * /  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ A F ;  
         }  
     }  
  
     i f   ( h i 2 c - > E r r o r C o d e   ! =   H A L _ I 2 C _ E R R O R _ N O N E )  
     {  
         / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
         I 2 C _ I T E r r o r ( h i 2 c ) ;  
     }  
     e l s e  
     {  
         i f   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N )  
         {  
             / *   S e t   s t a t e   a t   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
  
             / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
  
         i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ L I S T E N )  
         {  
             h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
             / *   C a l l   t h e   L i s t e n   C o m p l e t e   c a l l b a c k ,   t o   i n f o r m   u p p e r   l a y e r   o f   t h e   e n d   o f   L i s t e n   u s e c a s e   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > L i s t e n C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e  
         {  
             i f   ( ( h i 2 c - > P r e v i o u s S t a t e     = =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ R X )   | |   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ) )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
     }  
 }  
  
 / * *  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ S l a v e _ A F ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e s   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s               =   h i 2 c - > X f e r O p t i o n s ;  
  
     i f   ( ( ( C u r r e n t X f e r O p t i o n s   = =     I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E ) )   & &   \  
             ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ L I S T E N ) )  
     {  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
  
         / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
         / *   C l e a r   A F   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
         / *   D i s a b l e   A c k n o w l e d g e   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
         h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
         h i 2 c - > S t a t e                   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e                     =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   C a l l   t h e   L i s t e n   C o m p l e t e   c a l l b a c k ,   t o   i n f o r m   u p p e r   l a y e r   o f   t h e   e n d   o f   L i s t e n   u s e c a s e   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > L i s t e n C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
     e l s e   i f   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X )  
     {  
         h i 2 c - > X f e r O p t i o n s       =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ T X ;  
         h i 2 c - > S t a t e                   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e                     =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
  
         / *   C l e a r   A F   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
         / *   D i s a b l e   A c k n o w l e d g e   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > S l a v e T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
     e l s e  
     {  
         / *   C l e a r   A F   f l a g   o n l y   * /  
         / *   S t a t e   L i s t e n ,   b u t   X f e r O p t i o n s   = =   F I R S T   o r   N E X T   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     I 2 C   i n t e r r u p t s   e r r o r   p r o c e s s  
     *   @ p a r a m     h i 2 c   I 2 C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ I T E r r o r ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e   =   h i 2 c - > M o d e ;  
     u i n t 3 2 _ t   C u r r e n t E r r o r ;  
  
     i f   ( ( ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M A S T E R )   | |   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ M E M ) )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X ) )  
     {  
         / *   D i s a b l e   P o s   b i t   i n   I 2 C   C R 1   w h e n   e r r o r   o c c u r r e d   i n   M a s t e r / M e m   R e c e i v e   I T   P r o c e s s   * /  
         h i 2 c - > I n s t a n c e - > C R 1   & =   ~ I 2 C _ C R 1 _ P O S ;  
     }  
  
     i f   ( ( ( u i n t 3 2 _ t ) C u r r e n t S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
     {  
         / *   k e e p   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
         h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
     }  
     e l s e  
     {  
         / *   I f   s t a t e   i s   a n   a b o r t   t r e a t m e n t   o n   g o i n g ,   d o n ' t   c h a n g e   s t a t e   * /  
         / *   T h i s   c h a n g e   w i l l   b e   d o   l a t e r   * /  
         i f   ( ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N )   ! =   I 2 C _ C R 2 _ D M A E N )   & &   ( C u r r e n t S t a t e   ! =   H A L _ I 2 C _ S T A T E _ A B O R T ) )  
         {  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
         }  
         h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
     }  
  
     / *   A b o r t   D M A   t r a n s f e r   * /  
     i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N )   = =   I 2 C _ C R 2 _ D M A E N )  
     {  
         h i 2 c - > I n s t a n c e - > C R 2   & =   ~ I 2 C _ C R 2 _ D M A E N ;  
  
         i f   ( h i 2 c - > h d m a t x - > S t a t e   ! =   H A L _ D M A _ S T A T E _ R E A D Y )  
         {  
             / *   S e t   t h e   D M A   A b o r t   c a l l b a c k   :  
             w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 / *   D i s a b l e   I 2 C   p e r i p h e r a l   t o   p r e v e n t   d u m m y   d a t a   i n   b u f f e r   * /  
                 _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
                 / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                 h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a t x ) ;  
             }  
         }  
         e l s e  
         {  
             / *   S e t   t h e   D M A   A b o r t   c a l l b a c k   :  
             w i l l   l e a d   t o   c a l l   H A L _ I 2 C _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I 2 C _ D M A A b o r t ;  
  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h i 2 c - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 / *   S t o r e   L a s t   r e c e i v e   d a t a   i f   a n y   * /  
                 i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ R X N E )   = =   S E T )  
                 {  
                     / *   R e a d   d a t a   f r o m   D R   * /  
                     * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
                     / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
                     h i 2 c - > p B u f f P t r + + ;  
                 }  
  
                 / *   D i s a b l e   I 2 C   p e r i p h e r a l   t o   p r e v e n t   d u m m y   d a t a   i n   b u f f e r   * /  
                 _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
                 h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
                 / *   C a l l   D i r e c t l y   h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                 h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h i 2 c - > h d m a r x ) ;  
             }  
         }  
     }  
     e l s e   i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ A B O R T )  
     {  
         h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   S t o r e   L a s t   r e c e i v e   d a t a   i f   a n y   * /  
         i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ R X N E )   = =   S E T )  
         {  
             / *   R e a d   d a t a   f r o m   D R   * /  
             * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
         }  
  
         / *   D i s a b l e   I 2 C   p e r i p h e r a l   t o   p r e v e n t   d u m m y   d a t a   i n   b u f f e r   * /  
         _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
         / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > A b o r t C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
     e l s e  
     {  
         / *   S t o r e   L a s t   r e c e i v e   d a t a   i f   a n y   * /  
         i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ R X N E )   = =   S E T )  
         {  
             / *   R e a d   d a t a   f r o m   D R   * /  
             * h i 2 c - > p B u f f P t r   =   ( u i n t 8 _ t ) h i 2 c - > I n s t a n c e - > D R ;  
  
             / *   I n c r e m e n t   B u f f e r   p o i n t e r   * /  
             h i 2 c - > p B u f f P t r + + ;  
         }  
  
         / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     / *   S T O P   F l a g   i s   n o t   s e t   a f t e r   a   N A C K   r e c e p t i o n ,   B u s E r r o r ,   A r b i t r a t i o n L o s t ,   O v e r R u n   * /  
     C u r r e n t E r r o r   =   h i 2 c - > E r r o r C o d e ;  
  
     i f   ( ( ( C u r r e n t E r r o r   &   H A L _ I 2 C _ E R R O R _ B E R R )   = =   H A L _ I 2 C _ E R R O R _ B E R R )   | |   \  
             ( ( C u r r e n t E r r o r   &   H A L _ I 2 C _ E R R O R _ A R L O )   = =   H A L _ I 2 C _ E R R O R _ A R L O )   | |   \  
             ( ( C u r r e n t E r r o r   &   H A L _ I 2 C _ E R R O R _ A F )   = =   H A L _ I 2 C _ E R R O R _ A F )           | |   \  
             ( ( C u r r e n t E r r o r   &   H A L _ I 2 C _ E R R O R _ O V R )   = =   H A L _ I 2 C _ E R R O R _ O V R ) )  
     {  
         / *   D i s a b l e   E V T ,   B U F   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ B U F   |   I 2 C _ I T _ E R R ) ;  
     }  
  
     / *   S o   m a y   i n f o r m   u p p e r   l a y e r   t h a t   l i s t e n   p h a s e   i s   s t o p p e d   * /  
     / *   d u r i n g   N A C K   e r r o r   t r e a t m e n t   * /  
     C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
     i f   ( ( ( h i 2 c - > E r r o r C o d e   &   H A L _ I 2 C _ E R R O R _ A F )   = =   H A L _ I 2 C _ E R R O R _ A F )   & &   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ L I S T E N ) )  
     {  
         h i 2 c - > X f e r O p t i o n s       =   I 2 C _ N O _ O P T I O N _ F R A M E ;  
         h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
         h i 2 c - > S t a t e                   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e                     =   H A L _ I 2 C _ M O D E _ N O N E ;  
  
         / *   C a l l   t h e   L i s t e n   C o m p l e t e   c a l l b a c k ,   t o   i n f o r m   u p p e r   l a y e r   o f   t h e   e n d   o f   L i s t e n   u s e c a s e   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > L i s t e n C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ L i s t e n C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
 }  
  
 / * *  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ M a s t e r R e q u e s t W r i t e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s   =   h i 2 c - > X f e r O p t i o n s ;  
  
     / *   G e n e r a t e   S t a r t   c o n d i t i o n   i f   f i r s t   t r a n s f e r   * /  
     i f   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N O _ O P T I O N _ F R A M E ) )  
     {  
         / *   G e n e r a t e   S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
     }  
     e l s e   i f   ( h i 2 c - > P r e v i o u s S t a t e   = =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X )  
     {  
         / *   G e n e r a t e   R e S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
     }  
     e l s e  
     {  
         / *   D o   n o t h i n g   * /  
     }  
  
     / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
         {  
             h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
         }  
         r e t u r n   H A L _ T I M E O U T ;  
     }  
  
     i f   ( h i 2 c - > I n i t . A d d r e s s i n g M o d e   = =   I 2 C _ A D D R E S S I N G M O D E _ 7 B I T )  
     {  
         / *   S e n d   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ W R I T E ( D e v A d d r e s s ) ;  
     }  
     e l s e  
     {  
         / *   S e n d   h e a d e r   o f   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ H E A D E R _ W R I T E ( D e v A d d r e s s ) ;  
  
         / *   W a i t   u n t i l   A D D 1 0   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D 1 0 ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   S e n d   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ A D D R E S S ( D e v A d d r e s s ) ;  
     }  
  
     / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     M a s t e r   s e n d s   t a r g e t   d e v i c e   a d d r e s s   f o r   r e a d   r e q u e s t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ M a s t e r R e q u e s t R e a d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s   =   h i 2 c - > X f e r O p t i o n s ;  
  
     / *   E n a b l e   A c k n o w l e d g e   * /  
     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
     / *   G e n e r a t e   S t a r t   c o n d i t i o n   i f   f i r s t   t r a n s f e r   * /  
     i f   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ F R A M E )     | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N O _ O P T I O N _ F R A M E ) )  
     {  
         / *   G e n e r a t e   S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
     }  
     e l s e   i f   ( h i 2 c - > P r e v i o u s S t a t e   = =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X )  
     {  
         / *   G e n e r a t e   R e S t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
     }  
     e l s e  
     {  
         / *   D o   n o t h i n g   * /  
     }  
  
     / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
         {  
             h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
         }  
         r e t u r n   H A L _ T I M E O U T ;  
     }  
  
     i f   ( h i 2 c - > I n i t . A d d r e s s i n g M o d e   = =   I 2 C _ A D D R E S S I N G M O D E _ 7 B I T )  
     {  
         / *   S e n d   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ R E A D ( D e v A d d r e s s ) ;  
     }  
     e l s e  
     {  
         / *   S e n d   h e a d e r   o f   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ H E A D E R _ W R I T E ( D e v A d d r e s s ) ;  
  
         / *   W a i t   u n t i l   A D D 1 0   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D 1 0 ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   S e n d   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ A D D R E S S ( D e v A d d r e s s ) ;  
  
         / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C l e a r   A D D R   f l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
         / *   G e n e r a t e   R e s t a r t   * /  
         S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
         / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
         {  
             i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
             {  
                 h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
             }  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
  
         / *   S e n d   h e a d e r   o f   s l a v e   a d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 1 0 B I T _ H E A D E R _ R E A D ( D e v A d d r e s s ) ;  
     }  
  
     / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     M a s t e r   s e n d s   t a r g e t   d e v i c e   a d d r e s s   f o l l o w e d   b y   i n t e r n a l   m e m o r y   a d d r e s s   f o r   w r i t e   r e q u e s t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ R e q u e s t M e m o r y W r i t e ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     / *   G e n e r a t e   S t a r t   * /  
     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
     / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
         {  
             h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
         }  
         r e t u r n   H A L _ T I M E O U T ;  
     }  
  
     / *   S e n d   s l a v e   a d d r e s s   * /  
     h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ W R I T E ( D e v A d d r e s s ) ;  
  
     / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C l e a r   A D D R   f l a g   * /  
     _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
     / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
         {  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   I f   M e m o r y   a d d r e s s   s i z e   i s   8 B i t   * /  
     i f   ( M e m A d d S i z e   = =   I 2 C _ M E M A D D _ S I Z E _ 8 B I T )  
     {  
         / *   S e n d   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ L S B ( M e m A d d r e s s ) ;  
     }  
     / *   I f   M e m o r y   a d d r e s s   s i z e   i s   1 6 B i t   * /  
     e l s e  
     {  
         / *   S e n d   M S B   o f   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ M S B ( M e m A d d r e s s ) ;  
  
         / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
         {  
             i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
             {  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
             }  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   S e n d   L S B   o f   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ L S B ( M e m A d d r e s s ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     M a s t e r   s e n d s   t a r g e t   d e v i c e   a d d r e s s   f o l l o w e d   b y   i n t e r n a l   m e m o r y   a d d r e s s   f o r   r e a d   r e q u e s t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     D e v A d d r e s s   T a r g e t   d e v i c e   a d d r e s s :   T h e   d e v i c e   7   b i t s   a d d r e s s   v a l u e  
     *                   i n   d a t a s h e e t   m u s t   b e   s h i f t e d   t o   t h e   l e f t   b e f o r e   c a l l i n g   t h e   i n t e r f a c e  
     *   @ p a r a m     M e m A d d r e s s   I n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     M e m A d d S i z e   S i z e   o f   i n t e r n a l   m e m o r y   a d d r e s s  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ R e q u e s t M e m o r y R e a d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 1 6 _ t   D e v A d d r e s s ,   u i n t 1 6 _ t   M e m A d d r e s s ,   u i n t 1 6 _ t   M e m A d d S i z e ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     / *   E n a b l e   A c k n o w l e d g e   * /  
     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
     / *   G e n e r a t e   S t a r t   * /  
     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
     / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
         {  
             h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
         }  
         r e t u r n   H A L _ T I M E O U T ;  
     }  
  
     / *   S e n d   s l a v e   a d d r e s s   * /  
     h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ W R I T E ( D e v A d d r e s s ) ;  
  
     / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C l e a r   A D D R   f l a g   * /  
     _ _ H A L _ I 2 C _ C L E A R _ A D D R F L A G ( h i 2 c ) ;  
  
     / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
         {  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   I f   M e m o r y   a d d r e s s   s i z e   i s   8 B i t   * /  
     i f   ( M e m A d d S i z e   = =   I 2 C _ M E M A D D _ S I Z E _ 8 B I T )  
     {  
         / *   S e n d   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ L S B ( M e m A d d r e s s ) ;  
     }  
     / *   I f   M e m o r y   a d d r e s s   s i z e   i s   1 6 B i t   * /  
     e l s e  
     {  
         / *   S e n d   M S B   o f   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ M S B ( M e m A d d r e s s ) ;  
  
         / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
         i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
         {  
             i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
             {  
                 / *   G e n e r a t e   S t o p   * /  
                 S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
             }  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   S e n d   L S B   o f   M e m o r y   A d d r e s s   * /  
         h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ M E M _ A D D _ L S B ( M e m A d d r e s s ) ;  
     }  
  
     / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( h i 2 c ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( h i 2 c - > E r r o r C o d e   = =   H A L _ I 2 C _ E R R O R _ A F )  
         {  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   G e n e r a t e   R e s t a r t   * /  
     S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T ) ;  
  
     / *   W a i t   u n t i l   S B   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ S B ,   R E S E T ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         i f   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T A R T )   = =   I 2 C _ C R 1 _ S T A R T )  
         {  
             h i 2 c - > E r r o r C o d e   =   H A L _ I 2 C _ W R O N G _ S T A R T ;  
         }  
         r e t u r n   H A L _ T I M E O U T ;  
     }  
  
     / *   S e n d   s l a v e   a d d r e s s   * /  
     h i 2 c - > I n s t a n c e - > D R   =   I 2 C _ 7 B I T _ A D D _ R E A D ( D e v A d d r e s s ) ;  
  
     / *   W a i t   u n t i l   A D D R   f l a g   i s   s e t   * /  
     i f   ( I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( h i 2 c ,   I 2 C _ F L A G _ A D D R ,   T i m e o u t ,   T i c k s t a r t )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I 2 C   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ D M A X f e r C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 C _ H a n d l e T y p e D e f   * h i 2 c   =   ( I 2 C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
     H A L _ I 2 C _ M o d e T y p e D e f   C u r r e n t M o d e       =   h i 2 c - > M o d e ;  
     u i n t 3 2 _ t   C u r r e n t X f e r O p t i o n s               =   h i 2 c - > X f e r O p t i o n s ;  
  
     / *   D i s a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
     _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
     / *   C l e a r   C o m p l e t e   c a l l b a c k   * /  
     i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     }  
     i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     }  
  
     i f   ( ( ( ( u i n t 3 2 _ t ) C u r r e n t S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ T X )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ T X )   | |   ( ( ( ( u i n t 3 2 _ t ) C u r r e n t S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ R X )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ B U S Y _ R X )   & &   ( C u r r e n t M o d e   = =   H A L _ I 2 C _ M O D E _ S L A V E ) ) )  
     {  
         / *   D i s a b l e   D M A   R e q u e s t   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
         h i 2 c - > X f e r C o u n t   =   0 U ;  
  
         i f   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ T X _ L I S T E N )  
         {  
             / *   S e t   s t a t e   a t   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ T X ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
  
             / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > S l a v e T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ S l a v e T x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e   i f   ( C u r r e n t S t a t e   = =   H A L _ I 2 C _ S T A T E _ B U S Y _ R X _ L I S T E N )  
         {  
             / *   S e t   s t a t e   a t   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ S L A V E _ B U S Y _ R X ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
  
             / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ S l a v e R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e  
         {  
             / *   D o   n o t h i n g   * /  
         }  
  
         / *   E n a b l e   E V T   a n d   E R R   i n t e r r u p t   t o   t r e a t   e n d   o f   t r a n s f e r   i n   I R Q   h a n d l e r   * /  
         _ _ H A L _ I 2 C _ E N A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
     }  
     / *   C h e c k   c u r r e n t   M o d e ,   i n   c a s e   o f   t r e a t m e n t   D M A   h a n d l e r   h a v e   b e e n   p r e e m p t e d   b y   a   p r i o r   i n t e r r u p t   * /  
     e l s e   i f   ( h i 2 c - > M o d e   ! =   H A L _ I 2 C _ M O D E _ N O N E )  
     {  
         i f   ( h i 2 c - > X f e r C o u n t   = =   ( u i n t 1 6 _ t ) 1 )  
         {  
             / *   D i s a b l e   A c k n o w l e d g e   * /  
             C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
         }  
  
         / *   D i s a b l e   E V T   a n d   E R R   i n t e r r u p t   * /  
         _ _ H A L _ I 2 C _ D I S A B L E _ I T ( h i 2 c ,   I 2 C _ I T _ E V T   |   I 2 C _ I T _ E R R ) ;  
  
         / *   P r e p a r e   n e x t   t r a n s f e r   o r   s t o p   c u r r e n t   t r a n s f e r   * /  
         i f   ( ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ N O _ O P T I O N _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ O T H E R _ A N D _ L A S T _ F R A M E )   | |   ( C u r r e n t X f e r O p t i o n s   = =   I 2 C _ L A S T _ F R A M E ) )  
         {  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
         }  
  
         / *   D i s a b l e   L a s t   D M A   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ L A S T ) ;  
  
         / *   D i s a b l e   D M A   R e q u e s t   * /  
         C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 2 ,   I 2 C _ C R 2 _ D M A E N ) ;  
  
         h i 2 c - > X f e r C o u n t   =   0 U ;  
  
         / *   C h e c k   i f   E r r o r s   h a s   b e e n   d e t e c t e d   d u r i n g   t r a n s f e r   * /  
         i f   ( h i 2 c - > E r r o r C o d e   ! =   H A L _ I 2 C _ E R R O R _ N O N E )  
         {  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h i 2 c - > E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
             H A L _ I 2 C _ E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e  
         {  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
  
             i f   ( h i 2 c - > M o d e   = =   H A L _ I 2 C _ M O D E _ M E M )  
             {  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > M e m R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ M e m R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             e l s e  
             {  
                 h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 h i 2 c - > M a s t e r R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
                 H A L _ I 2 C _ M a s t e r R x C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
         }  
     }  
     e l s e  
     {  
         / *   D o   n o t h i n g   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I 2 C   c o m m u n i c a t i o n   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h d m a   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I 2 C _ H a n d l e T y p e D e f   * h i 2 c   =   ( I 2 C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   C l e a r   C o m p l e t e   c a l l b a c k   * /  
     i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     }  
     i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     }  
  
     / *   D i s a b l e   A c k n o w l e d g e   * /  
     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
     h i 2 c - > X f e r C o u n t               =   0 U ;  
     h i 2 c - > S t a t e                       =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
     h i 2 c - > M o d e                         =   H A L _ I 2 C _ M O D E _ N O N E ;  
     h i 2 c - > E r r o r C o d e               | =   H A L _ I 2 C _ E R R O R _ D M A ;  
  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h i 2 c - > E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
     H A L _ I 2 C _ E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f   D M A   I 2 C   c o m m u n i c a t i o n   a b o r t   c a l l b a c k  
     *                 ( T o   b e   c a l l e d   a t   e n d   o f   D M A   A b o r t   p r o c e d u r e ) .  
     *   @ p a r a m   h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ D M A A b o r t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
     I 2 C _ H a n d l e T y p e D e f   * h i 2 c   =   ( I 2 C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;   / *   D e r o g a t i o n   M I S R A C 2 0 1 2 - R u l e - 1 1 . 5   * /  
  
     / *   D e c l a r a t i o n   o f   t e m p o r a r y   v a r i a b l e   t o   p r e v e n t   u n d e f i n e d   b e h a v i o r   o f   v o l a t i l e   u s a g e   * /  
     H A L _ I 2 C _ S t a t e T y p e D e f   C u r r e n t S t a t e   =   h i 2 c - > S t a t e ;  
  
     / *   D u r i n g   a b o r t   t r e a t m e n t ,   c h e c k   t h a t   t h e r e   i s   n o   p e n d i n g   S T O P   r e q u e s t   * /  
     / *   W a i t   u n t i l   S T O P   f l a g   i s   r e s e t   * /  
     c o u n t   =   I 2 C _ T I M E O U T _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
     d o  
     {  
         i f   ( c o u n t   = =   0 U )  
         {  
             h i 2 c - > E r r o r C o d e   | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
             b r e a k ;  
         }  
         c o u n t - - ;  
     }  
     w h i l e   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P )   = =   I 2 C _ C R 1 _ S T O P ) ;  
  
     / *   C l e a r   C o m p l e t e   c a l l b a c k   * /  
     i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a t x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     }  
     i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a r x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
     }  
  
     / *   D i s a b l e   A c k n o w l e d g e   * /  
     C L E A R _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
     h i 2 c - > X f e r C o u n t   =   0 U ;  
  
     / *   R e s e t   X f e r A b o r t C a l l b a c k   * /  
     i f   ( h i 2 c - > h d m a t x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
     }  
     i f   ( h i 2 c - > h d m a r x   ! =   N U L L )  
     {  
         h i 2 c - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
     }  
  
     / *   D i s a b l e   I 2 C   p e r i p h e r a l   t o   p r e v e n t   d u m m y   d a t a   i n   b u f f e r   * /  
     _ _ H A L _ I 2 C _ D I S A B L E ( h i 2 c ) ;  
  
     / *   C h e c k   i f   c o m e   f r o m   a b o r t   f r o m   u s e r   * /  
     i f   ( h i 2 c - > S t a t e   = =   H A L _ I 2 C _ S T A T E _ A B O R T )  
     {  
         h i 2 c - > S t a t e                   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e                     =   H A L _ I 2 C _ M O D E _ N O N E ;  
         h i 2 c - > E r r o r C o d e           =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
         / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > A b o r t C p l t C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ A b o r t C p l t C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
     e l s e  
     {  
         i f   ( ( ( u i n t 3 2 _ t ) C u r r e n t S t a t e   &   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )   = =   ( u i n t 3 2 _ t ) H A L _ I 2 C _ S T A T E _ L I S T E N )  
         {  
             / *   R e n a b l e   I 2 C   p e r i p h e r a l   * /  
             _ _ H A L _ I 2 C _ E N A B L E ( h i 2 c ) ;  
  
             / *   E n a b l e   A c k n o w l e d g e   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ A C K ) ;  
  
             / *   k e e p   H A L _ I 2 C _ S T A T E _ L I S T E N   * /  
             h i 2 c - > P r e v i o u s S t a t e   =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ L I S T E N ;  
         }  
         e l s e  
         {  
             h i 2 c - > S t a t e   =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e   =   H A L _ I 2 C _ M O D E _ N O N E ;  
         }  
  
         / *   C a l l   t h e   c o r r e s p o n d i n g   c a l l b a c k   t o   i n f o r m   u p p e r   l a y e r   o f   E n d   o f   T r a n s f e r   * /  
 # i f   ( U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h i 2 c - > E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e l s e  
         H A L _ I 2 C _ E r r o r C a l l b a c k ( h i 2 c ) ;  
 # e n d i f   / *   U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     F l a g   s p e c i f i e s   t h e   I 2 C   f l a g   t o   c h e c k .  
     *   @ p a r a m     S t a t u s   T h e   n e w   F l a g   s t a t u s   ( S E T   o r   R E S E T ) .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     / *   W a i t   u n t i l   f l a g   i s   s e t   * /  
     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   F l a g )   = =   S t a t u s )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e           =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                           =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                             =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                   | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t   f o r   M a s t e r   a d d r e s s i n g   p h a s e .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   I 2 C   m o d u l e  
     *   @ p a r a m     F l a g   s p e c i f i e s   t h e   I 2 C   f l a g   t o   c h e c k .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n M a s t e r A d d r e s s F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   F l a g ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   F l a g )   = =   R E S E T )  
     {  
         i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F )   = =   S E T )  
         {  
             / *   G e n e r a t e   S t o p   * /  
             S E T _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P ) ;  
  
             / *   C l e a r   A F   F l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
             h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ A F ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t   f o r   s p e c i f i c   u s a g e   o f   T X E   f l a g .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n T X E F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ T X E )   = =   R E S E T )  
     {  
         / *   C h e c k   i f   a   N A C K   i s   d e t e c t e d   * /  
         i f   ( I 2 C _ I s A c k n o w l e d g e F a i l e d ( h i 2 c )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t   f o r   s p e c i f i c   u s a g e   o f   B T F   f l a g .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n B T F F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ B T F )   = =   R E S E T )  
     {  
         / *   C h e c k   i f   a   N A C K   i s   d e t e c t e d   * /  
         i f   ( I 2 C _ I s A c k n o w l e d g e F a i l e d ( h i 2 c )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
                 h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
                 h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
                 h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t   f o r   s p e c i f i c   u s a g e   o f   S T O P   f l a g .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n S T O P F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ S T O P F )   = =   R E S E T )  
     {  
         / *   C h e c k   i f   a   N A C K   i s   d e t e c t e d   * /  
         i f   ( I 2 C _ I s A c k n o w l e d g e F a i l e d ( h i 2 c )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
         {  
             h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t   f o r   s p e c i f i c   u s a g e   o f   S T O P   r e q u e s t   t h r o u g h   I n t e r r u p t .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n S T O P R e q u e s t T h r o u g h I T ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     / *   W a i t   u n t i l   S T O P   f l a g   i s   r e s e t   * /  
     c o u n t   =   I 2 C _ T I M E O U T _ S T O P _ F L A G   *   ( S y s t e m C o r e C l o c k   /   2 5 U   /   1 0 0 0 U ) ;  
     d o  
     {  
         c o u n t - - ;  
         i f   ( c o u n t   = =   0 U )  
         {  
             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     w h i l e   ( R E A D _ B I T ( h i 2 c - > I n s t a n c e - > C R 1 ,   I 2 C _ C R 1 _ S T O P )   = =   I 2 C _ C R 1 _ S T O P ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I 2 C   C o m m u n i c a t i o n   T i m e o u t   f o r   s p e c i f i c   u s a g e   o f   R X N E   f l a g .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ W a i t O n R X N E F l a g U n t i l T i m e o u t ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c ,   u i n t 3 2 _ t   T i m e o u t ,   u i n t 3 2 _ t   T i c k s t a r t )  
 {  
  
     w h i l e   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ R X N E )   = =   R E S E T )  
     {  
         / *   C h e c k   i f   a   S T O P F   i s   d e t e c t e d   * /  
         i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ S T O P F )   = =   S E T )  
         {  
             / *   C l e a r   S T O P   F l a g   * /  
             _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ S T O P F ) ;  
  
             h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ N O N E ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
         {  
             h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
             h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
             h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
             h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ T I M E O U T ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
             r e t u r n   H A L _ E R R O R ;  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   A c k n o w l e d g e   f a i l e d   d e t e c t i o n   d u r i n g   a n   I 2 C   C o m m u n i c a t i o n .  
     *   @ p a r a m     h i 2 c   P o i n t e r   t o   a   I 2 C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I 2 C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I 2 C _ I s A c k n o w l e d g e F a i l e d ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     i f   ( _ _ H A L _ I 2 C _ G E T _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F )   = =   S E T )  
     {  
         / *   C l e a r   N A C K F   F l a g   * /  
         _ _ H A L _ I 2 C _ C L E A R _ F L A G ( h i 2 c ,   I 2 C _ F L A G _ A F ) ;  
  
         h i 2 c - > P r e v i o u s S t a t e               =   I 2 C _ S T A T E _ N O N E ;  
         h i 2 c - > S t a t e                               =   H A L _ I 2 C _ S T A T E _ R E A D Y ;  
         h i 2 c - > M o d e                                 =   H A L _ I 2 C _ M O D E _ N O N E ;  
         h i 2 c - > E r r o r C o d e                       | =   H A L _ I 2 C _ E R R O R _ A F ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i 2 c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r t   I 2 C x   O T H E R _ x x x   X f e r O p t i o n s   t o   f u n c t i o n a l   X f e r O p t i o n s .  
     *   @ p a r a m     h i 2 c   I 2 C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I 2 C _ C o n v e r t O t h e r X f e r O p t i o n s ( I 2 C _ H a n d l e T y p e D e f   * h i 2 c )  
 {  
     / *   i f   u s e r   s e t   X f e r O p t i o n s   t o   I 2 C _ O T H E R _ F R A M E                         * /  
     / *   i t   r e q u e s t   i m p l i c i t l y   t o   g e n e r a t e   a   r e s t a r t   c o n d i t i o n   * /  
     / *   s e t   X f e r O p t i o n s   t o   I 2 C _ F I R S T _ F R A M E                                         * /  
     i f   ( h i 2 c - > X f e r O p t i o n s   = =   I 2 C _ O T H E R _ F R A M E )  
     {  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ F I R S T _ F R A M E ;  
     }  
     / *   e l s e   i f   u s e r   s e t   X f e r O p t i o n s   t o   I 2 C _ O T H E R _ A N D _ L A S T _ F R A M E   * /  
     / *   i t   r e q u e s t   i m p l i c i t l y   t o   g e n e r a t e   a   r e s t a r t   c o n d i t i o n         * /  
     / *   t h e n   g e n e r a t e   a   s t o p   c o n d i t i o n   a t   t h e   e n d   o f   t r a n s f e r         * /  
     / *   s e t   X f e r O p t i o n s   t o   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E                             * /  
     e l s e   i f   ( h i 2 c - > X f e r O p t i o n s   = =   I 2 C _ O T H E R _ A N D _ L A S T _ F R A M E )  
     {  
         h i 2 c - > X f e r O p t i o n s   =   I 2 C _ F I R S T _ A N D _ L A S T _ F R A M E ;  
     }  
     e l s e  
     {  
         / *   N o t h i n g   t o   d o   * /  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ I 2 C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  